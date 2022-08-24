#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	webcam.setup(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update() {
	webcam.update();
}
//--------------------------------------------------------------
void ofApp::draw() {
	webcam.draw(ofGetWidth(), ofGetHeight());


	for (int i = 0; i < webcam.getWidth(); i += 16) {
		for (int j = 0; j < webcam.getHeight(); j += 16) {
			ofColor color = webcam.getPixels().getColor(i, j);
			float brightness = color.getBrightness();
			float radius = ofMap(brightness, 0, 255, 0, 8);
			ofDrawCircle(i, j, radius);
			
			// --- with color --- // 
			//ofSetColor(color);
		}
	}
}

//--------------------------------------------------------------
void ofApp::exit() {
	webcam.close();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == 'f') {
		ofToggleFullscreen();
	}
}
