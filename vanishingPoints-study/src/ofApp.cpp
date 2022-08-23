#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetWindowTitle("Vanisching points - antimodular studies");
	ofBackground(255, 255, 255);
	ofSetFrameRate( 5);

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	
	ofColor myDrawColor;
	myDrawColor.setHsb(0, 0, 0, ofRandom(90) );
	ofSetColor( myDrawColor );

	ofSetLineWidth(5);
	for (int i = 0; i < 120; i++) {

		ofColor myDrawColor;
		myDrawColor.setHsb(0, 0, 0, ofRandom(80));
		ofSetColor(myDrawColor);

		x1 = 1;
		y1 = ofRandom( ofGetHeight() );
		x2 = ofGetWidth(); 
		y2 = y1;

		ofDrawLine(x1, y1, x2, y2);

	}
	for (int j = 0; j < 10; j++) {
		ofColor myDrawColor;
		myDrawColor.setHsb(0, 0, 0, ofRandom(80));
		ofSetColor(myDrawColor);

		verticalx1 = ofRandom( ofGetWidth() ) ;
		verticaly1 = 1;
		verticalx2 = verticalx1 + ofRandom(300);
		verticaly2 = ofGetHeight();

		ofDrawLine(verticalx1, verticaly1, verticalx2 , verticaly2);
	}

	for (int h = 0; h < 30; h++) {
		ofColor myDrawColor;
		myDrawColor.setHsb(0, 0, 0, ofRandom(80));
		ofSetColor(myDrawColor);

		anotherVerticalx1 = ofRandom(ofGetWidth());
		anotherVerticaly1 = 1;
		anotherVerticalx2 = anotherVerticalx1 - ofRandom(300);
		anotherVerticaly2 = ofGetHeight();

		ofDrawLine(anotherVerticalx1, anotherVerticaly1, anotherVerticalx2, anotherVerticaly2);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == 'f') {
		ofToggleFullscreen();
	}
}
