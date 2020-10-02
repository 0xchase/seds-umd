# Meeting 1
### Mission Requirements
 - Overview of mission requirements
   - Control for the shaker
   - Uplink/downlink
   - Camera

### Reliability
 - Cubesat early failure rate is high (48% for university missions), reliabilty is key
 - Considerations
   - Temperature (industrial)
   - Radiation (can cause random changes in RAM, leading to segfaults and kernel panics)
   - Power consumption
   - Reliability for critical funcitons (RTOS for altitude, temperature, etc)
   - Interfacing with camera
   
### Some solutions
 - Real time operating systems
 - Watchdog timers
 - Radiation hardened components
 
### Potential hardware platforms
 - Microcontroller options (run linux, run rtos, or program directly)
   - Raspberry Pi (vulnerable to radiation, not stable through power glitches, temperature concerns, not "industrial" grade)
   - Beaglebone Black (ok for non-critical components, power requirements?)
   - Pumpkin MSP430-F216, MSP-430
   - STM32

### Overview of development environment
 - Tour of linux
 - Basic git tutorial (git tutorial markdown doc)
   - Fork the repository
   - Pull to a local folder
   - Make changes, add the files, commit changes, and push.
   - Make changes both remote and locally, show conflict
   - Checkout remote files, make changes, push
   - Submit pull request

---

### Assignment
 - Set up the development environment
 - Fork the repository (either individually, or one fork for the group)
 - Conduct research, add it to your group's markdown document
 - Submit a pull request
