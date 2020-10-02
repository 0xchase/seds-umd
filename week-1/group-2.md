# Group 2

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
 
 Fill your research in here. When you're done, commit your changes and submit a pull request. 
