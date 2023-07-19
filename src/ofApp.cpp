#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetBackgroundColor(0);
	ofSetCircleResolution(100);
	ofSetDepthTest(true);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {

	float time = ofGetElapsedTimef();

	for (int x = 1; x < 20; x++) {
		for (int i = 0; i < 900; i += 5) {
			ofSetColor(127 + 127 * sin(i * 0.01 + time + x),
				70 + 127 * sin(i * 0.011 + time),
				70 + 127 * sin(i * 0.012 + time));


			ofDrawCircle(50 * x + 100 * sin(i * 0.01 + time + x ), 50 + i + x, 50 + 40 * sin(i * 0.005 + time + x));
		}

	}
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
