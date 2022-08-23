#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
	
		int horizontalX1 ;
		int horizontalY1 ;
		int horizontalX2 ;
		int horizontalY2 ;

		int verticalX1 ;
		int verticalY1 ;
		int verticalX2 ;
		int verticalY2 ;


		int anotherVerticalX1 ;
		int anotherVerticalY1 ;
		int anotherVerticalX2 ;
		int anotherVerticalY2 ;
};
