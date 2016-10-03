#include "ofApp.h"
#define PIN_LED 3
#define PIN_POT 1

void ofApp::setup(){
    ofAddListener(arduino.EInitialized, this, &ofApp::setupArduino);
    arduino.connect("/dev/cu.usbmodem641");
    arduino.sendFirmwareVersionRequest();
    
    //gui.setup("instellingen", "settings.xml");
    //gui.add(pwm.set("PWM", 0,0,255));
    //for (unsigned int i; i < MAXVALUE; i++){
        //pwmValue[i] += pwmValue[i];
    //}
    //pwmValue = 0;

}

void ofApp::update(){
    arduino.update();
    //pwmValue += pwmValue;
    //arduino.sendPwm(PIN_LED, pwmValue);
    //for (unsigned int i; i < MAXVALUE; i++){
        //pwmValue[i] += pwmValue[i];
        //arduino.sendPwm(PIN_LED, pwmValue[i]);
    //}
    arduino.sendPwm(PIN_LED, pwm);
}

void ofApp::draw(){
    //gui.draw();
}

void ofApp::setupArduino(const int&version){
    ofLogNotice() << "arduino init" << endl;
    ofRemoveListener(arduino.EInitialized, this, &ofApp::setupArduino);
    
    arduino.sendDigitalPinMode(PIN_LED, ARD_PWM);
    arduino.sendAnalogPinReporting(PIN_POT, ARD_ANALOG);
    
    ofAddListener(arduino.EDigitalPinChanged, this, &ofApp::digitalPinChanged);
    ofAddListener(arduino.EAnalogPinChanged, this, &ofApp::analogPinChanged);
    
}

void ofApp::updateArduino(const int&version){
}

void ofApp::digitalPinChanged(const int&pin){
    ofLog() << "pwm value of pin" << pin << "is now" << arduino.getPwm(pin) << endl;
}

void ofApp::analogPinChanged(const int&pin){
    ofLog() << "analog pin" << pin << "changed to" <<arduino.getAnalog(pin) << endl;
    //pwm = arduino.getPwm(PIN_LED);
    for (unsigned int i; i < MAXVALUE; i++){
        pwm[i] += pwm[i];
    }
}

