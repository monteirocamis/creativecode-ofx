#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float time = ofGetElapsedTimef();

	for (int x = 1; x < 40; x++) {

		for(int i = 0; i < 900; i += 5) {
//with shake time
			//ofSetCircleResolution(53 + 50 * sin(i *0.001 + time  )); // makes sure the smallest resolution is 3side (for triangles)

			ofSetColor(
				127 + 127 * sin(i * 0.01 + time + x),
				127 + 127 * sin(i * 0.011 + time),
				127 + 127 * sin(i * 0.012 + time)
			);

/* pride smokes */ 
			ofDrawCircle( 50 * x + 100 * sin(i * 0.01 + time + x),
				50 + i,
				50 + 40 *sin(i * 0.005 + time + x));



/* simple smoke flow
	
			ofDrawCircle(ofGetWidth() / 2 + 100 *
				sin(i * 0.01 + time ), i, 50 + 40 *
				sin(i * 0.005 + time));*/





//meteor centered , @danbuzzo  
			//   ofDrawCircle( ofGetWidth()/2 , i, 100 );

//colored smoke	,  @danbuzzo  
			//    ofDrawCircle( ofGetWidth()/2 + 100 * sin( i * 0.01 + time ), i , 50 +  40 * sin( i * 0.005 + time  ) ) ;

//from left side ,  @danbuzzo 
			//ofDrawSphere(50 * x + 100 * sin( i * 0.01 + time + x), 50 * x + 100 * sin( i * 0.01 + time + x), 50 + i , 50 +  40 * sin( i * 0.005 + time + x) ) ; // draw spheres in 3D



		}
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
	switch (key) {
	case 'f':
	case 'F':
		ofToggleFullscreen();
		break;

	default:
		break;
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
