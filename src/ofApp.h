#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    void drawVideo();
    void drawMenu();
    void drawInterface();
    
    void chapterCut(float chapterBeginning, float chapterEnd);
    void setSeq(float seqPosition);
    void setSeqRandom();
    void setSeqMotion(float motion);
    void toggleFullScreen();
    
    ofImage interfaceImg;
    ofTrueTypeFont LatoLight;
    
    ofVideoPlayer video;
    ofSoundPlayer sound;
    
    int videoSpeed;
    bool fullscreen;
    bool interface;
    
};
