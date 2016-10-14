#include "ofApp.h"
#define PIN_IF 2

void ofApp::setup(){
    ofAddListener(arduino.EInitialized, this, &ofApp::setupArduino);
    arduino.connect("/dev/cu.usbmodem641");
    arduino.sendFirmwareVersionRequest();

}

void ofApp::update(){
    arduino.update();

}

void ofApp::draw(){

}

void ofApp::setupArduino(const int&version){
    ofLogNotice() << "arduino init" << endl;
    ofRemoveListener(arduino.EInitialized, this, &ofApp::setupArduino);
    
    arduino.sendDigitalPinMode(PIN_IF, ARD_INPUT);
    //arduino.sendAnalogPinReporting(PIN_POT, ARD_ANALOG);
    
    ofAddListener(arduino.EDigitalPinChanged, this, &ofApp::digitalPinChanged);
    ofAddListener(arduino.EAnalogPinChanged, this, &ofApp::analogPinChanged);
    
}

void ofApp::updateArduino(const int&version){
    
}

void ofApp::digitalPinChanged(const int&pin){
    ofLog() << "value of pin" << pin << "is now" << arduino.getPwm(pin) << endl;

}

void ofApp::analogPinChanged(const int&pin){
    ofLog() << "analog pin" << pin << "changed to" <<arduino.getAnalog(pin) << endl;
    
}

