#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(600,600,OF_WINDOW);			// <-------- setup the GL context
	//ofSetupOpenGL(200, 200, OF_WINDOW);
	// ofSetupOpenGL(1024,768,OF_FULLSCREEN);	
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
