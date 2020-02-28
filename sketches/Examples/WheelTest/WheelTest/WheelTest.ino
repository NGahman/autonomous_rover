#include <DriveTrain.h>
#include <Drive.h> //Deals with spinning the wheels of the rover.
#include "coroutine.h"

coroutine driveCoroutine;

void setup() {
  // put your setup code here, to run once:
  driveCoroutine.setup(1000);
  Driver::setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  reset();
  forwards(50);
}

void forwards(int speed) {
  // left side
  Driver::spinAt(25, speed);
  Driver::spinAt(21, speed);
  Driver::spinAt(20, speed);

  // right side
  Driver::spinAt(27, -speed);
  Driver::spinAt(22, -speed);
  Driver::spinAt(28, -speed);
}


void reset() {
  /* Turn right */
  // front
  Driver::moveTo(23, 0);
  Driver::moveTo(29, 0);

  // back
  Driver::moveTo(24, 0);
  Driver::moveTo(26, 0);

  if(driveCoroutine.readyState){
      /* Turn Left */
    // front
    Driver::moveTo(23, 0);
    Driver::moveTo(29, 0);
  
    // back
    Driver::moveTo(24, 0);
    Driver::moveTo(26, 0);
  }
}
