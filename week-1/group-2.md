# Group 2

Members: Madelyne Rossmann, Kaitlyn Dold

This week we will be setting up our development environment and conducting research into various parts of the design. All groups will set up the same development environment, but will be doing different research. 

## Instructions
### Development Environment Setup
 - If you already have a linux environment you can skip this section (except the repo cloning)
 - Set up an [Ubuntu VM](https://ubuntu.com/) in [VirtualBox](https://www.virtualbox.org/wiki/Downloads). There are plenty of [tutorials](https://www.nakivo.com/blog/install-ubuntu-on-virtualbox-virtual-machine/) online explaining how to do this.
 - Clone this repository onto your VM. All our future code will go there. 
 - If you have issues with any of the above, message Chase on Slack. 

### Research
Group 2 will be researching *watchdog timer implementations*. In the event that, for example, a cosmic ray corrupts data in RAM and causes a process to segfault, we want our system to automatically reboot. This is commonly achieved using [watchdog timers](https://en.wikipedia.org/wiki/Watchdog_timer). We're interested in learning about the best way to implement one for our CubeSat. 

As a general guideline, we're interested in information like:
 - What off-the-shelf solutions are avaliable for this? What would the cost be.
 - Are the watchdog components radiation hardened?
 - How do other cubesats implement these?
 - How is the communication between the watchdog device and the microcontroller achieved?

These are general guidelines, but use your own judgement to determine what you think the group needs to know. Don't spend an inordinate amount of time on this, we have a lot of time to pin down our design.

 ---
 
## Results
 
 - TPL5010-Q1 is a dedicated external hardware watchdog (AEC-Q100 qualified timer)
	- <$1 off-the-shelf (ti.com)
	- ideal for duty-cycled or battery-powered application
	- consumes 35 nA at 2.5 V
	- good for power-sensitive applications (extends battery-life and enables use of smaller batteries)
	- timing intervals of 100 ms to 7200 s
	- very small (3 mm x 3 mm)
	- 6-pin configuration
		- supply voltage [VDD]
		- ground [GND]
		- time interval set and manual reset [DELAY/M_RST]
		- logic input for watchdog functionality [DONE]
		- timer output signal generated every time interval period [WAKE]
		- reset output (open drain output) [RSTn]
	- vibration-resistant
	- -40 degrees Celsius to 125 degrees Celsius
	- how to use...
		- issues a periodic WAKE pulse to a microcontroller in either sleep or standby mode
		- after microcontroller receives WAKE, it has at least 20 ms to issue a DONE signal
			- if DONE is received, the counter of the watchdog is reset
		- if DONE signal is not issued, the watchdog sends an RSTn signal to reset microcontroller
	- no mention of radiation hardiness

 - MAX70X series devices (used with ATSAMD51 on PyCubed CubeSat)
	- $1.90 off-the-shelf (rocelec.com)
	- extensive radiation test history (TID, SEE, SEL scenarios)
	- maximum series temperature range is -40 degrees Celsius to 85 degrees Celsius
	- very small (1.422 mm x 1.143 mm)
	- set a voltage threshold to decide whether or not to reset
		- if voltage ping received from microcontroller is below threshold, holds microcontroller in reset fo 140 ms after the voltage reaches acceptable level

 - ATmega328 (used by PhoneSat-1 and -2)
	- $1.90 off-the-shelf (digikey.com)
	- utilizes C 
	- Interrupt mode:
		- gives an interrupt or system reset when counter times-out
		- interrupt can wake device from sleep-mode, also used as a general timer for the system
		- can limit maximum amount of time for certain operations (issues interrupt if operation runs longer than expected)
	- System Reset mode: 
		- gives a reset when timer expires
		- typically used to avoid system hang-up due to runaway code
	- Interrupt and System Reset mode:
		- first gives interrupt, then switches to System Reset mode
		- allows for safe shutdown by saving critical parameters before system reset

	
