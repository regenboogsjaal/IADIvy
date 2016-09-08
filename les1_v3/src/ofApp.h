#pragma once
#include "ofMain.h"
#define MaxAantal 100

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
//variables with list
private:
    float x[MaxAantal];
    float y[MaxAantal];
    float speedX[MaxAantal];
    float speedY[MaxAantal];
    int radius[MaxAantal];
    ofColor colors[MaxAantal];
};