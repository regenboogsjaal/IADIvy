//
//  Ball.hpp
//  BounceOOgui_vector
//
//  Created by Ivy on 25/09/16.
//
//

#ifndef Ball_hpp
#define Ball_hpp

#include <stdio.h>

#endif /* Ball_hpp */

#pragma once

#include "ofMain.h"

class Ball {
    
public:
    
    Ball();
    
    void setup(int mySpeedX, int mySpeedY, int myRadius, ofColor myColor);
    
    void update();
    
    void draw();
    
    // variables
    float x;
    float y;
    float speedY;
    float speedX;
    int radius;
    ofColor color;
    
private:
    
};