#include "ofApp.h"

void ofApp::setup(){
    // define values for every ball up untill 100 balls
    for(int i = 0; i<MaxAantal; i++){
        x[i] = ofRandom(0 , ofGetWidth());
        y[i] = ofRandom(0 , ofGetHeight());
        speedX[i] = ofRandom(-30,30);
        speedY[i] = ofRandom(-30,30);
        radius[i] = ofRandom(10, 50);
        colors[i] = ofColor(0, 0, ofRandom(0,255));
    }
}

void ofApp::update(){
    //every ball created with the values from setup can't leave the screen
    for(int i =0; i<MaxAantal; i++){
        if(x[i]<=0){
            x[i] = 0;
            speedX[i] = -speedX[i];
        } else if (x[i] >= ofGetWidth()) {
            x[i] = ofGetWidth();
            speedX[i] = -speedX[i];
        }
        if (y[i]<=0) {
            y[i] = 0;
            speedY[i] = -speedY[i];
        } else if (y[i]>=ofGetHeight()) {
            y[i] = ofGetHeight();
            speedY[i] = -speedY[i];
        }
        //make the ball move
        x[i]+=speedX[i];
        y[i]+=speedY[i];
    }
}

void ofApp::draw(){
    //draw every ball with values from setup
    for(int i = 0; i<MaxAantal; i++){
        ofSetColor(colors[i]);
        ofDrawCircle(x[i], y[i], radius[i]);
    }
    
}
