# Meeting 1
 - Overview of mission requirements
 - Cubesat early failure rate is high (as high as 48% for university missions)
 - Considerations
   - Temperature (industrial)
   - Radiation (can cause random changes in RAM, leading to segfaults and kernel panics)
   - Power consumption
   - Reliability for critical funcitons (RTOS for altitude, temperature, etc)
   - Interfacing with camera
 - Microcontroller options
   - Raspberry Pi (vulnerable to radiation, not stable through power glitches, temperature concerns, not "industrial" grade)
   - Beaglebone Black (ok for non-critical components, power requirements?)
   - Pumpkin MSP430-F216, MSP-430
   - Watchdog https://en.m.wikipedia.org/wiki/Watchdog_timer
   
 - What is a real time operating system
 - FreeRTOS setup
 - Git tutorial

## Assignments
 - Set up a linux VM
 - Fork the git repository
 - Do assigned research and submit pull request

## Research
 - Set up linux VM
 - Research watchdog timer options: How is this usually implemented? How to use with Beaglebone Black. 
 - Research hardware platforms to run FreeRTOS: Which ones are commonly used? Are there radiation hardened variants? 
 - Ground Station Research: How is this communication usually achieved on CubeSats? Basic things like should we build our own station or pay someone else to recieve our data? 
