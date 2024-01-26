# Rad Engine
---
## About Rad Engine

### Description

Rad Engine is a geometry viewer developed by Ogylandy Yespagambetov and Dani García.

GitHub Link: https://github.com/DaniGarMata/Rad-Engine

Website Link: https://danigarmata.github.io/radEngine.github.io

### Team Members

* Ogylandy Yespagambetov: https://github.com/Oga29
* Dani García: https://github.com/DaniGarMata

---
## Audio System
The Rad Engine makes use of the Wwise audio system. 

The following background music are played as a playlist, on loop:
* Heartache (1min 50sec)
* Wizard (around 3min)
  
The music can be played, paused, and reset in the Play/Stop menu.

The following sound effects are played:
* Train sounds
* Windows Boot-Up Sound (played from the computer, press 1 to play it again)
  
Reverb is dynamically added to the train sounds if the main camera is in the tunnel of the demo scene, to simulate the train going through the tunnel. In order to hear the sound without the effect, move the camera along the train tracks until you are out of the tunnel Z-length.

---
## Engine Functionalities

### General
* Window resizing
* Tab resizing
* Tab layout customization
* Drag and drop feature (supports FBX models and PNG textures)

### Camera Controls

* W - Move forwards
* A - Move left
* S - Move backwards
* D - Move right
* R - Move up
* F - Move down
* Alt+LClick - Rotate
* Mouse Wheel - Zoom
* Shift - Double speed

### Menus
File:
* Save / Load Configuration (it loads the saved configuration after exiting and launching the editor)
* Save / Load Scene
* Exit

Edit:
* Cut / Copy / Paste
* Settings / Console tabs
* Load Test Model

Create:
* Create Cube / Sphere / Cone / Pyramid / Cylinder / Torus / Polyhedron Ball

View:
* Wireframe Mode
* Disable Textures
* Cull Faces
* Disable Lights
* Disable Ambient Occlusion

Help:
* GitHub link
* About tab

Play/Stop:
* Play / Stop / Reset
* Game time
* Play / Stop / Reset Background Music
  
Experimental features toggling
* Enable Mouse Picking
* Enable Mesh Transformations

## Tabs
GameObject:
* Select object

GameObjects Inspector:
* Mesh
* Transform
     * Translate
     * Rotate
     * Scale
     * Reset all
* Texture
* Camera
* Hierarchy Options

Assets Tree

Folder Explorer

Settings:
* Window Settings
    * Brightness
    * Width / Height
    * Resizable / Borderless / Fullscreen / Vsync
* FPS
* Extra Settings
* Hardware Specifics 

Console

About
