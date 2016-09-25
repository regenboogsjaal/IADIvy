#pragma once

#include "ofMain.h"
#include "Ball.h"
#include "ofxGui.h"

#define MAXBALLS 15

class ofApp : public ofBaseApp {

    public:
    
        void setup();

        void update();

        void draw();
    
        void keyPressed(int key);
    
        //void mousePressed(int x, int y, int button);

        Ball ball;
    
        ofxPanel gui;
        ofParameter<int> radius;
        ofParameter<int> x;
        ofParameter<int> y;
        ofxIntSlider colorR;
        ofxIntSlider colorG;
        ofxIntSlider colorB;
        
};
