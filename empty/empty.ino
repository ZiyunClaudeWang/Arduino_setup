#include <ax12.h>
const int SERVO_ID = 1; //servo id to control
volatile int mode=1;

void setup() {
  // put your setup code here, to run once:
    
    dxlInit(115200);
    mxSetJointMode(SERVO_ID);
    SetPosition(SERVO_ID,0); //set the position of servo # 1 to '0'
    dxlSetGoalPosition(SERVO_ID, 0);
    delay(1000);//wait for servo to move
}

void loop() {
  // put your main code here, to run repeatedly:

}
