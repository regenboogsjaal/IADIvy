#pragma once

#include "ofMain.h"
#include "ofxGui.h"
#define MAXVALUE 255

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    
    void digitalPinChanged(const int&pin);
    void analogPinChanged(const int&pin);
    void setupArduino(const int&version);
    void updateArduino(const int&version);
    
    ofArduino arduino;
    //ofxPanel gui;
    //ofParameter<int> pwm;
    int pwm[MAXVALUE];
    //int pwmValue[MAXVALUE];
    //int pwmValue;
		
};

