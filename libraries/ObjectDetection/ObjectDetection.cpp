#include "ObjectDetection.h"

void ObjectDetection::setup(int lefttrig, int leftreceive, int righttrig, int rightreceive) {
	leftEcho.setup(lefttrig, leftreceive);
	rightEcho.setup(righttrig, rightreceive);
}

void ObjectDetection::loop()
{
	leftEcho.loop();
	rightEcho.loop();
}

int EchoDetect() {
	float leftDistance = leftEcho.distance;
	float rightDistance = rightEcho.distance;
	return int((rightDistance < 112)) + 2 * int((leftDistance < 112));
}