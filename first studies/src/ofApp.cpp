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
void ofApp::draw(){
	int setSize = 40;

	ofColor myDrawColor;
	//myDrawColor.set(200, 255, 200); 
	//myDrawColor.setHsb( ofRandom(255), 255, 255, 50);
	myDrawColor.setHsb(255, 100, 255);
	ofSetColor(myDrawColor);




//----------------------------/*   GENERATIVE LINES  #ep6  */
		







//--------------------------/*  RAINBOW FROM SPHERES  #ep5  */ 

		 for (int y = 0; y < ofGetHeight(); y += 20) {

			for (int x= 0; x < ofGetWidth(); x += 20) {

						//myDrawColor.setHsb( 
				ofMap(x, 0, ofGetWidth(), 0, 255), 
				ofMap( y , 0 ,ofGetHeight() , 0 , 255) , 255);
						// //myDrawColor.setHsb(x, y, 255); 
						ofSetColor(myDrawColor); 
						ofDrawCircle(x, y , 10);


						myDrawColor.setHsb(
							ofMap(x, 0, ofGetWidth(), 0, 255),
							ofMap(y, 0, ofGetHeight(), 0, 255),
							ofMap( ofGetMouseY() , 0, ofGetHeight() , 0 , 255 ) );
						
						ofSetColor(myDrawColor);
						ofDrawRectangle(x, y, 20,20); 
					}

			}
		










//---------------------------------/*  COLORED BUBBLES   #ep5   */

			//int setSize = 40;

			//ofColor myDrawColor;
			//myDrawColor.setHsb(ofRandom(255), 100, 255, 50);
			//ofSetColor(myDrawColor);

			//for (int i = 0; i < 10; i++) {
			//	ofDrawCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), 100);

			//}






//------------------------------/*    SPHERES EXAMPLES #ep1-4   */
// 
		//ofDrawCircle(200, 200, 100); // orange

		//cout << ofGetWidth() << end1;


		//ofDrawCircle(ofGetWidth() / 2, ofGetMouseY(), 50);
		/*
		* ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, 50);
		ofDrawCircle(float x , float , float, radius)
		//ofDrawCircle(100,100,50)
		ofDrawRectangle(100, 200, 50, 100);
		ofDrawEllipse(200, 300, 100, 20);*/





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
