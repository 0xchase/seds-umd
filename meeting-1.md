# Meeting 1
 - Overview of mission requirements
 - Cubesat failure rate is high
 - Considerations
   - Temperature (industrial)
   - Radiation (can cause random changes in RAM, leading to segfaults and kernel panics)
   - Power consumption
   - Reliability for critical funcitons (RTOS for altitude, temperature, etc)
   - Interfacing with camera
 - Microcontroller options
   - Raspberry Pi (vulnerable to radiation, not stable through power glitches, temperature concerns, not "industrial" grade)
   - Beaglebone Black (ok for non-critical components)
   - Pumpkin MSP430-F216, MSP-430
   - Watchdog https://en.m.wikipedia.org/wiki/Watchdog_timer
   
 - What is a real time operating system
 - FreeRTOS setup
 - Git tutorial

## Assignments
 - Fork the git repository
 - Set up development environment for FreeRTOS
 - Do assigned research and submit pull request with those changes
 - 
