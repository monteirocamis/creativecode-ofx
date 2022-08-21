#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	//ofNoFill();
	ofBackground(0);
//ofSetLineWidth(5);


	ofSetColor(255, 255, 255, 70);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	int time = ofGetSystemTimeMillis() / 100; // 10 for simple 



	ofPushMatrix();
	ofTranslate(
		ofGetWidth() / 2 , // <-- center of the view //
		ofGetHeight() / 2  // <-- center of the view //
	);
	ofRotateDeg(45);


	

	

	for (int i = 0; i < 400; i += 25) {

//marbles (& change the noFill on setup) :
		ofDrawCircle(i,0,20 );

		
		//ofDrawRectangle(i, 0, 20, 20);

		/*ofRotateDeg( i/25);*/
		ofRotateDeg(time % 360);
	}

	ofPopMatrix();

	ofDrawBitmapString(
		" Dev Camis to the world" ,20,20);





}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
