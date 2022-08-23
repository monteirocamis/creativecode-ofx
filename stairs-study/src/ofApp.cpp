#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
   ofBackground(255, 255, 255); 
   ofSetColor(0, 0, 0 , 90);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
    ofSetLineWidth(2);
    ofSetRectMode(OF_RECTMODE_CENTER);

    for (int i = 1; i < 1000; i++) {
         
            ofRotateDeg(ofGetElapsedTimef() + 20 );
            ofScale(0.9);
            ofDrawRectangle(ofGetWidth() / 2 , ofGetHeight() / 2, ofGetWidth(), ofGetHeight());
    }
 
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'f') {
        ofToggleFullscreen();
    }
}
