#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetWindowTitle("openframeworks studies");
	
	ofBackground(0, 0, 0); // white
	ofSetFrameRate(10);

	ofSetColor(255, 100, 0);

}

//--------------------------------------------------------------
void ofApp::update() {


}

//--------------------------------------------------------------
void ofApp::draw() {
	int setSize = 40;

	ofColor myDrawColor;
	myDrawColor.setHsb(255, 100, 255);
	ofSetColor(myDrawColor);




	for (int y = 0; y < ofGetHeight(); y += 20) {

		for (int x = 0; x < ofGetWidth(); x += 20) {

			myDrawColor.setHsb( 
				ofMap(x, 0, ofGetWidth(), 0, 255),
				ofMap(y, 0, ofGetHeight(), 0, 255),
				ofMap( ofGetMouseY(), 0, ofGetHeight(), 0, 255)
			);
				
				ofSetColor(myDrawColor);
				ofDrawRectangle(x, y, 20, 20);


			
					/* static rainbow
				myDrawColor.setHsb(
					ofMap(x, 0, ofGetWidth(), 0, 255),
					ofMap(y, 0, ofGetHeight(), 0, 255),
					255);

				ofSetColor(myDrawColor);
				ofDrawRectangle(x, y, 20, 20);*/
		}

	}











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
