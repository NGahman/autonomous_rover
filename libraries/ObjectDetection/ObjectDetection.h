#pragma once
#include <Arduino.h>
#include "echo.h"
class ObjectDetection {
public:
	int EchoDetect();
private:
	echo rightEcho;
	echo leftEcho;
};