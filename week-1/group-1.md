# Group 1

Members: Grace Liu, Cindy Yang, Christopher Ciccone, Abhishek Shastry

This week we will be setting up our development environment and conducting research into various parts of the design. All groups will set up the same development environment, but will be doing different research. 

## Instructions
### Development Environment Setup
 - If you already have a linux environment you can skip this section (except the repo cloning)
 - Set up an [Ubuntu VM](https://ubuntu.com/) in [VirtualBox](https://www.virtualbox.org/wiki/Downloads). There are plenty of [tutorials](https://www.nakivo.com/blog/install-ubuntu-on-virtualbox-virtual-machine/) online explaining how to do this.
 - Clone this repository onto your VM. All our future code will go there. 
 - If you have issues with any of the above, message Chase on Slack. 

### Research
Group 1 will be researching *Hardware platforms to run FreeRTOS*. Most CubeSats use a real time operating system like FreeRTOS to minimize OS overhead and maximize reliability. There are many hardware platforms that can run FreeRTOS—we want to know which one we should choose if we go this route. There is some basic information [here](https://docs.aws.amazon.com/freertos/latest/userguide/what-is-freertos.html). 

As a general guideline, we're interested in information like:
 - How popular is this platform? (popular platforms have better development toolchains)
 - How does the price compare?
 - What are the power requirements?
 - What are the temperature requirements?
 - Are their radiation hardened variants of this system?
 - What I/O does this platform offer?

These are general guidelines, but use your own judgement to determine what you think the group needs to know. Don't spend an inordinate amount of time on this, we have a lot of time to pin down our design. If the dev environment setup takes people a while, we can push some of the research to next week. 

 ---
 
 ## Results
 
 Most of the hardware platforms for which FreeRTOS has been ported are documented on the official FreeRTOS website itself: https://www.freertos.org/RTOS_ports.html
 
 Here is the link to the spreadsheet I plan to completely fill comapring all the different hardware platforms: https://docs.google.com/spreadsheets/d/1RH7zunQR9hyc0uh0WfrEifFn-An-V7xa7kjh6EEy47c/edit#gid=0
