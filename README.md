# CONSEQ (V A1.0) for OpenFrameworks
## Performance art tool for live video editing

![ScreenShot](/bin/data/logo.png)

CONSEQ (video controller/sequencer) is an openFrameworks app for controlling dynamic video art for multimedia performances. With the stroke of the keyboard, instantaneously live-cut video projections to sync up with performances – no matter what is currently happening on stage. 

With CONSEQ, you can take masterful control of your custom-made visuals at any concert or performance. Jump between random cuts within specific video segments to match the tempo and mood of live music, or add a psychedelic twist by slowing down and reversing the playback. Dim the screen to build up drama, and unleash an explosion of images during the grand finale. 

**Version A1.0:**

-Base functionality and interface has been implemented.

 -----------
## Development Team

CONCEPT AND ENGINEERING - [Evander Batson](http://evanderbatson.com) 

DESIGN AND INTERFACE - [Heloise Cullen](http://heloisecullen.org)

# HOW TO USE

Place your video file in '..CONSEQ/bin/data/' and name it 'video.mp4' replacing the default. Position the window into the desired screen and press RETURN to fullscreen. Consult the keycodes below to control the video as desired.

## Key Controls

key          | function
------------ | -------------
[ 1-0 ] | play 0% to play 90%
[ Q-P ] | random cut from 0%-10% to 0%-100%
[ A ] | random cut (entire sequence)
[ S ] | slow motion
[ D ] | normal motion
[ F ] | fast motion
[ space ] | play/pause
[ X ] | reverse slow motion
[ C ] | reverse motion
[ V ] | reverse fast motion
[ [ ] | linear loop (default)
[ ] ] | palindrome loop
[ \ ] | no loop
[ return ] | window/full screen
[ esc ] | quit 
[ TAB ] | toggle GUI

## Planned Features

**controls**

key          | function
------------ | -------------
[ Z ] | flash!
[ M ] | mute sound
[ < ] | darken projection
[ > ] | lighten projection

**features**
- GUI active function feedback
- GUI state toggle feedback
- GUI console
- GUI playback timeline |-|-|-|-|-|
- GUI video loader
- multiple window outputs
- standalone app installer

