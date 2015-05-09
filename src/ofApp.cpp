#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowTitle("CONSEQ");
    ofSetFrameRate(24);
    
    //loading typefaces
    
    CousineRegular.loadFont("Cousine-Regular.ttf", 8);
    
    //loading images
    
    menuImg.loadImage("menuImg.jpg");
    
    //loading videos
    
    video.loadMovie("video.mp4");
    sound.loadSound("audio.mp3");
    video.setLoopState(OF_LOOP_NORMAL);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // pause the video
    
    video.setPaused(true);
    
    // draw the menu
    
    menuImg.draw(0,0,ofGetWidth(), ofGetHeight());
    
    ofSetColor(98,90,229);
    string menuTitle;
    menuTitle += "A sequence controler for live-editing video art multimedia performances.";
    
    int menuPosX = ofGetWidth()*.2;
    int menuPosY = ofGetHeight()*.22;
    
    CousineRegular.drawString(menuTitle, menuPosX, menuPosY);
    ofSetColor(255);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == '0') {
        //play 90%
    }
    
    //etc 0 - 1
    
    if (key == 'q') {
        //random cut from 0-10%
    }
    
    //etc Q-P
    
    if (key == 'a') {
        //random cut entire sequence
    }
    
    if (key == 's') {
        //slow playback speed
    }
    
    if (key == 'd') {
        //normal playback speed
    }
    
    if (key == 'f') {
        //fast playback speed
    }
    
    //    if (key == 'spacebar'){
    //        //toggle play/pause
    //    }
    
    if (key == 'z'){
        //flash!
    }
    
    if (key == 'x'){
        //reverse slow playback speed
    }
    
    if (key == 'c'){
        //reverse normal playback speed
    }
    
    if (key == 'v'){
        //reverse fast playback speed
    }
    
    if (key == '['){
        //set loop mode to linear
    }
    
    if (key == ']'){
        //set loop mode to palindrome
    }
    //
    //    if (key == '\'){
    //        //set loop mode to none
    //        }
    //
    //    if (key == 'command+f'){
    //        //toggle window/fullscreen mode
    //        }
    //
    //    if (key == 'esc'){
    //
    //        }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
