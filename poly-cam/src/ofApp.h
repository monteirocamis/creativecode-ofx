#pragma once

#include "ofMain.h"
#include "ofxCv.h"

using namespace ofxCv;
using namespace cv;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
	

		ofVideoGrabber webcam;
		ofImage imgDifference;
		ofPixels pxPrevious;
};
