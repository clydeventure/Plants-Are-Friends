# Emotional Plants ![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)
<p align="center">
  <img src="https://github.com/clydeventure/Plants-Are-Friends/blob/master/img/arduinocactus.png?raw=true" width="275"/></center>
 </a>



---

## Table of Contents

- [Introduction](#giving-plants-emotions)
- [Getting Started](#how-to-use)
- [Future Direction](#where-is-this-project-going)

---
---

## Giving Plants Emotions

Plants are undeniably the most awesome beings existing in our known universe. They're easily 100x cooler than humans.  
 
* Do you like caffeine? Plants *make* that.
 
* Think living to 100 is a feat? The Methuselah tree in California is 4,850.
 
* Feeling good about recycling that empty beer bottle? Plants not only convert CO<sub>2</sub> to O<sub>2</sub>, they also collect and store pollutants in a process called phytoremediation.
 
Now that you have a taste of the sheer magnificence that is the kingdom *Plantae*, you should feel pretty bad about that suffering deflated succulent on your kitchen counter. If there is anything plants *can't* do better than humans, is expression. 
 
Plants, being the simplistic treasures they are, cannot communicate their needs to us. Of course in nature, their needs are met and their resilience shines through millions of years of adaptation. However, being uprooted from their indiginous lives and placed in our temperate homes has created an environment where their survival relies solely on the diligence and responsibility of their owner. They just simply don't have the means to let us know when they *need something*. **And that right there is the problem this project aims to solve.**

The emotional plant system works by utilizing a max7219 LED array (8x8) grid and a hygrometer to sense the soil’s moisture content and display to the owner the plant’s level of contentment.

<p align="center">
 <img src="https://github.com/clydeventure/Plants-Are-Friends/blob/master/img/faces.png?raw=true" width="85%"/>
 </a>

---
---

## How To Use


#### Getting Started

---
##### Software
---
1. Start by going to [Arduino's Website](https://create.arduino.cc/) and creating an account for the web editor:

<p align="center">
 <img src="https://github.com/clydeventure/Plants-Are-Friends/blob/master/img/signup_instruct.png?raw=true" width="92%"/>
 </a>

2. Download the [Plants-Are_Friends](https://github.com/clydeventure/Plants-Are-Friends/archive/master.zip) respository.

3. Upload the [Plants-Are_Friends](https://github.com/clydeventure/Plants-Are-Friends/archive/master.zip) .zip file to the cloud editor.
<p align="center">
 <img src="https://github.com/clydeventure/Plants-Are-Friends/blob/master/img/upload_instructions.png?raw=true" width="75%"/>
</a>

4. Plug in your Arduino to a COM port and push the code.

---
#### Hardware
---
1. Here is the schematic for the project.

<p align="center">
 <img src="https://github.com/clydeventure/Plants-Are-Friends/blob/master/img/arduino_emotional_plant.png?raw=true" width="90%"/>
</a>


---
|MAX7219|||Hygrometer||
|-|-|-|-|-|
|DIN|12||AO|A0|
|CS|11||GND|GND|
|CLK|10||VCC|5V|
|GND|GND||||
|VCC|5V||||

---
2. Wire up your arduino and enjoy the emotions of you plant!




[Back To The Top](#read-me-template)

---
---


## Where is this Project Going?

This project was a fun subsidy of a larger initiative called Plantera. Plantera is a long-term sustainable farming project tasked with creating an ecosystem of microscale farms in urban environments. 

As far as the Friendly Plant is concerned, it is possible that I will add an additional speaker component to the project. That way the plant can scream at you when it needs water.

* [x] Find a way to remember to water my plants

* [x] Give plants facial expressions

* [ ] Make plants scream bloody-murder when their soil gets a smidge too dry

[Back To The Top](#read-me-template)
