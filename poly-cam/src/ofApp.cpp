#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	webcam.setup(ofGetWidth(), ofGetHeight());
	imitate(pxPrevious, webcam);
	imitate(imgDifference, webcam);
}

//--------------------------------------------------------------
void ofApp::update(){
	webcam.update();

	if(webcam.isFrameNew()) {
		absdiff(webcam, pxPrevious, imgDifference);
		imgDifference.update();
		copy(webcam, pxPrevious);
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	//imgDifference.draw(0, 0);


	for (int i = 0; i < webcam.getHeight(); i += 8) {
		ofPolyline polyline;
		for (int j = 0; j < webcam.getWidth(); j++) {
			ofColor color = imgDifference.getPixels().getColor(j, i);
			int brightness = color.getBrightness();
			polyline.addVertex(j, i + ofMap(brightness, 0, 255, 0, -64));
		}
		polyline = polyline.getSmoothed(10);
		polyline.draw();
	}





}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'f') {
		ofToggleFullscreen();
	}
}

