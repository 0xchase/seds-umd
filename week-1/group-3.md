# Group 3

Members: Sahil Mayenkar, Chris Tharratt

This week we will be setting up our development environment and conducting research into various parts of the design. All groups will set up the same development environment, but will be doing different research. 

## Instructions
### Development Environment Setup
 - If you already have a linux environment you can skip this section (except the repo cloning)
 - Set up an [Ubuntu VM](https://ubuntu.com/) in [VirtualBox](https://www.virtualbox.org/wiki/Downloads). There are plenty of [tutorials](https://www.nakivo.com/blog/install-ubuntu-on-virtualbox-virtual-machine/) online explaining how to do this.
 - Clone this repository onto your VM. All our future code will go there. 
 - If you have issues with any of the above, message Chase on Slack. 

### Research
Group 3 will be researching *ground station research*. Our experiment won't be much use if we can't get the data back to earth. Thus, we need to communicate with a ground station. 

As a general guideline, we're interested in information like:
 - What hardware do CubeSats commonly use to communicate with ground stations?
 - Should we be interfacing with a ground station that already exists? Build our own ground station? Buy one? 
 - What wireless protocols or APIs are commonly used?
 - What are the bandwidth speeds like? Will transferring video files be difficult?

These are general guidelines, but use your own judgement to determine what you think the group needs to know. Don't spend an inordinate amount of time on this, we have a lot of time to pin down our design. If the dev environment setup takes people a while, we can push some of the research to next week. 

 ---
 
 ## Results
 
 Fill your research in here. When you're done, commit your changes and submit a pull request. 

  tl;dr Communication to and from space is dificult.
  
  ####Links:
   * Good information and general summary can be found [here](https://www.reddit.com/r/cubesat/comments/bo647j/how_to_set_up_a_uhfvhf_ground_station/)
   * [SatNOGS](https://satnogs.org/) is the Open Source Ground Station Network. 
   * [Smallsat/Cubesat Ground Communication Methods and Limitations](https://www.spacesymposium.org/wp-content/uploads/2017/10/J.Startup_31st_Space_Symposium_Tech_Track_paper.pdf)
   * [CubeSat Communications](https://arxiv.org/pdf/1908.09501.pdf)
   * [CubeSat Mission Writeup for Lulea University of Technology](https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&ved=2ahUKEwjHjabn7bnsAhVspnIEHbX2AKwQFjAOegQICxAC&url=https%3A%2F%2Fwww.mdpi.com%2F2076-3417%2F9%2F15%2F3110%2Fpdf&usg=AOvVaw0CTNfUhL4BMiwh_PdwXxQf)

  Ground stations are important to build and develop early in the project, as failure of communication is mission ending.
  While the CubeSat is being created, the ground station can be used to communicate with other satalites to get a feel
  for the technology, and to ensure working order. 

  It may be worth reaching out to various Amatetuer Radio operator clubs in the area to see if they have any advice on
  where to look for parts, and what types of things we need to be on the lookout for. Most ground stations are created
  using amateur radio parts. 

  What most systems use is cashing the data information, then downlink data when conditions are optimal.
  For our mission set it should not be required to have 100% communication all the time. Experiements
  could be run, with the video results stored with onboard memory, then downlinked either through our
  groundstation, or one that we rent. 
   
  We can also rent use of ground stations. Amazon Web Services includes pricing for renting ground station communication
  on a per minute basis. This is also pretty expensive and is roughly $1,470/week for about 147 minutes of time. 

  ####Communication "Bands"
  * Very High Frequency (VHF);: 30 to 300 MHz
  * Ultra High Frequency (UHF): 300 Mhz to 3 Ghz
  * L band: 1 to 2 Ghz
  * S band: 2 to 4 Ghz
  * C band: 4 to 8 Ghz

  Typically CubeSats operate between VHF and UHF, sometimes into S band. Most use Amateur Radio frequencies due to
  regulations, this does mean that information will be avaialble publically. Since we need to beam down video files
  it is likely that we will require a higher frequencies (UHF/L/S band) in order to have a bigger bandwith to use.   

  From Lulea University of Technology:
  >"The length of a Yagi antenna for the VHF band is 2 m, and 70 cm for a UHF antenna. Antennasoperating in the S-band are more effectively designed with a dish or patch shape. To amplify the signalmodulated by a radio transceiver, a low-noise amplifier (LNA) with a power output between 10 W and100 W is sufficient for LEO missions. Additionally, a computer is necessary as the operator ’s interfaceas well as for generating command signals, tracking the satellite, tuning the transceiver, controlling thepower output, pointing the antennas, etc."
    

  Definitely should reach out to local amateur radio operators and get their take on things. They likely have the
  experience neccesary to give us advice, as satalite communication is a common hobby within their circles. 
