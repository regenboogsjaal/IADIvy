#include "Ball.h"

Ball::Ball() {
}

void Ball::setup(int startX, int startY, int startRadius) {
    x = startX;
    y = startY;

    speedX = ofRandom(-10, 10);           // and random speed and direction
    speedY = ofRandom(-10, 10);

    radius = startRadius;
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
    ofSetColor(colorR, colorG, colorB);
    ofDrawCircle(x, y, radius);
}
