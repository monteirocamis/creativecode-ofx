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

        horizontalX1 = 1;
        horizontalY1 = ofRandom( ofGetHeight() );
        horizontalX2 = ofGetWidth();
        horizontalY2 = horizontalY1;

        ofDrawLine(horizontalX1, horizontalY1, horizontalX2, horizontalY2);

    }
    for (int j = 0; j < 10; j++) {
        ofColor myDrawColor;
        myDrawColor.setHsb(0, 0, 0, ofRandom(80));
        ofSetColor(myDrawColor);

        verticalX1 = ofRandom( ofGetWidth() ) ;
        verticalY1 = 1;
        verticalX2 = verticalX1 + ofRandom(300);
        verticalY2 = ofGetHeight();

        ofDrawLine(verticalX1, verticalY1, verticalX2 , verticalY2);
    }

    for (int h = 0; h < 30; h++) {
        ofColor myDrawColor;
        myDrawColor.setHsb(0, 0, 0, ofRandom(80));
        ofSetColor(myDrawColor);

        anotherVerticalX1 = ofRandom(ofGetWidth());
        anotherVerticalY1 = 1;
        anotherVerticalX2 = anotherVerticalX1 - ofRandom(300);
        anotherVerticalY2 = ofGetHeight();

        ofDrawLine(anotherVerticalX1, anotherVerticalY1, anotherVerticalX2, anotherVerticalY2);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    if (key == 'f') {
        ofToggleFullscreen();
    }
}
