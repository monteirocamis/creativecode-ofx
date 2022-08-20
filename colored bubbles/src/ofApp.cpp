#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetWindowTitle("openframeworks studies");
	//ofBackground( int r, int g, int b)
	//ofBackground(200, 0, 0); // red
	ofBackground(0, 0, 0); // white
	ofSetFrameRate(5);


//	ofNoFill();
	ofSetColor(255, 100, 0);

}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw() {
	int setSize = 40;

	ofColor myDrawColor;
	myDrawColor.setHsb(ofRandom(255), 255, 255, 50);
	ofSetColor(myDrawColor);


	for (int i = 0; i < 10; i++) {
		ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 100);

	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'f') {
		ofToggleFullscreen();
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
