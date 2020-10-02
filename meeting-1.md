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
   - Raspberry Pi (nope)
   - Beaglebone Black (ok for non-critical components)
   - Pumpkin MSP430-F216, MSP-430
   - Watchdog https://en.m.wikipedia.org/wiki/Watchdog_timer
   
 - What is a real time operating system
 - FreeRTOS setup
 - Git tutorial
