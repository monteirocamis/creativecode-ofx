#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(5);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    ofNoFill();
    ofSetLineWidth(2);
    ofSetRectMode(OF_RECTMODE_CENTER);



        for (int i = 0; i < 50; i++) {
            ofRotateDeg(ofGetElapsedTimef());
            ofScale(0.9);
            ofDrawRectangle(0, 0, 500, 500);

            for (int j = 0; j < 50; j++) {
            

            }
        }
 
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'f') {
        ofToggleFullscreen();
    }
}
