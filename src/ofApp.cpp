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
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    drawVideo();
    
}

void ofApp::drawVideo() {
    
    video.play();
    video.draw(0,0,ofGetWidth(), ofGetHeight());
    
}

void ofApp::drawMenu() {
    
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

void ofApp::chapterCut(float chapterBeginning, float chapterEnd){
    float chapterRandom = ofRandom(chapterBeginning, chapterEnd);
    cout << "SEQ set to: " << chapterRandom << endl;
    video.setPosition(chapterRandom);
}

void ofApp::setSeq(float seqPosition){
    cout << "SEQ set to: " << seqPosition << endl;
    video.setPosition(seqPosition);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    //sequence percent cuts
    
    if (key == '0') {
        setSeq(0.0);
    }
    
    if (key == '1') {
        setSeq(0.1);
    }
    
    if (key == '2') {
        setSeq(0.2);
    }
    
    if (key == '3') {
        setSeq(0.3);
    }
    
    if (key == '4') {
        setSeq(0.4);
    }
    
    if (key == '5') {
        setSeq(0.5);
    }
    
    if (key == '6') {
        setSeq(0.6);
    }
    
    if (key == '7') {
        setSeq(0.7);
    }
    
    if (key == '8') {
        setSeq(0.8);
    }
    
    if (key == '9') {
        setSeq(0.9);
    }
    
    //random chapter cuts
    
    if (key == 'q') {
        chapterCut(0, 0.1);
    }
    
    if (key == 'w') {
        chapterCut(0.1, 0.2);
    }
    
    if (key == 'e') {
        chapterCut(0.2, 0.3);
    }
    
    if (key == 'r') {
        chapterCut(0.3, 0.4);
    }
    
    if (key == 't') {
        chapterCut(0.4, 0.5);
    }
    
    if (key == 'y') {
        chapterCut(0.5, 0.6);
    }
    
    if (key == 'u') {
        chapterCut(0.6, 0.7);
    }
    
    if (key == 'i') {
        chapterCut(0.7, 0.8);
    }
    
    if (key == 'o') {
        chapterCut(0.8, 0.9);
    }
    
    if (key == 'p') {
        chapterCut(0.9, 1);
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
