#include "ofApp.h"
#include "Ball.h"

Ball ball;

void ofApp::setup() {
    gui.setup("Instellingen", "settings.xml");
    gui.add(radius.set("Radius", 50, 0, 200));
    gui.add(x.set("x", 50, 0, ofGetWidth()));
    gui.add(y.set("y", 50, 0, ofGetHeight()));
    gui.add(colorR.setup("R", 50, 0, 255));
    gui.add(colorG.setup("G", 50, 0, 255));
    gui.add(colorB.setup("B", 50, 0, 255));
    
}

void ofApp::update() {
    ball.update();
}

void ofApp::draw() {
    ball.draw();
    gui.draw();
}

void ofApp::keyPressed(int key){
    if (key == ' '){
        ball.setup(x, y, radius);
    }
}

