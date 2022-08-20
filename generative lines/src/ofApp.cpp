#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetWindowTitle("generative lines");

	ofBackground(255, 255, 255);
	ofSetFrameRate(10);

}

//--------------------------------------------------------------
void ofApp::update() {

	myLine.addVertex(
		ofRandom(ofGetWidth()),
		ofRandom(ofGetHeight())
	);

}

//--------------------------------------------------------------
void ofApp::draw() {
	int setSize = 40;

	ofColor myDrawColor;
	myDrawColor.setHsb(255, 255, 255 , 80);
	ofSetColor(myDrawColor);
	ofSetLineWidth(10);

	/*	for (int i = 0; i < 100; i++) {
			ofDrawLine(ofRandom(ofGetWidth()),
				ofRandom(ofGetHeight()),
				ofRandom(ofGetWidth()),
				ofRandom(ofGetHeight())
			);

		}*/

	myLine.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	if (key == 'f') {
		ofToggleFullscreen();
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
