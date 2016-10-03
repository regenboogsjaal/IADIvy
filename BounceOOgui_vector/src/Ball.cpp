//
//  Ball.cpp
//  BounceOOgui_vector
//
//  Created by Ivy on 25/09/16.
//
//

#include "Ball.hpp"

Ball::Ball() {
}

void Ball::setup(int mySpeedX, int mySpeedY, int myRadius, ofColor myColor) {
    x = ofRandom(0, ofGetWidth());
    y = ofRandom(0, ofGetHeight());
    
    speedX = mySpeedX;
    speedY = mySpeedY;
    
    radius = myRadius;
    
    color = myColor;

}


void Ball::update() {
    if (x < 0) {
        x = 0;
        speedX *= -1;
    } else if (x > ofGetWidth()) {
        x = ofGetWidth();
        speedX *= -1;
    }
    
    if (y < 0) {
        y = 0;
        speedY *= -1;
    } else if (y > ofGetHeight()) {
        y = ofGetHeight();
        speedY *= -1;
    }
    
    x += speedX;
    y += speedY;
}

void Ball::draw() {
    ofSetColor(color);
    ofDrawCircle(x, y, radius);
}
