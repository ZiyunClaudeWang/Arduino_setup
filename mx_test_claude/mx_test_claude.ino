/***************************
 * AXSimpleTest
 * This sketch sends positional commands to the AX servo 
 * attached to it - the servo must set to ID # 1
 * The sketch will send a value, i, to the servo.
 * 'For' loops are used to increment and decrement the value of 'i'
 ***************************/

//import ax12 library to send DYNAMIXEL commands
#include <ax12.h>

const int SERVO_ID = 1; //servo id to control
//int mode = 0;
//__attribute__((section(".noinit"))) unsigned int mode;

volatile int mode=1;

void setup()
{
//    dxlInit(57600); //start the DYNAMIXEL chain at 57600, the defualt baud for MX servos. set to 1mbps if you have changed the servo baus 
    //dxlInit(1000000); //start the DYNAMIXEL chain at 
    dxlInit(115200);
    Serial.begin(9600);
    SetPosition(SERVO_ID,0); //set the position of servo # 1 to '0'
    dxlSetGoalPosition(SERVO_ID, 0);
    delay(1000);//wait for servo to move
//    mxSetWheelMode(SERVO_ID);

//    mode = 1 - mode;
//    if (++mode >= 2) mode = 0;

//
    if (mode == 0)
      mxSetJointMode(SERVO_ID);
    else
      mxSetWheelMode(SERVO_ID);
//      
    int rpm = 10;
    int counterClowiseSpeedValue = rpm / 0.111;
////    int clockwiseSpeedValue = 1023 + (rpm/0.111);
//    //dxlSetGoalSpeed(SERVO_ID, clockwiseSpeedValue);

    dxlSetGoalSpeed(SERVO_ID, counterClowiseSpeedValue);

//    delay(1000);//wait for servo to move

}

void loop()
{
      Serial.println(mode);

//    Serial.print("Hello World\n");
//    delay(100);
//    int speed = dxlGetGoalSpeed(SERVO_ID);
//    Serial.println(speed);
//    dxlSetGoalPosition(SERVO_ID, 0);
//    delay(1000);//wait for servo to move
//
//    dxlSetGoalPosition(SERVO_ID, 1023);
//    delay(1000);//wait for servo to move

    
  //increment from 0 to 4095
//  for(int i=0; i <=4095; i++)
//  {
//    dxlSetGoalPosition(SERVO_ID,i); //set the position of servo #1 to the current value of 'i'
//    delay(33);//wait for servo to move / send data at 30hz
//  }
//  //decrement from 1024 to 0
//  for(int i=4095; i>0; i--)
//  {
//    dxlSetGoalPosition(SERVO_ID,i);//set the position of servo #1 to the current value of 'i'
//    delay(33);//wait for servo to move / send data at 30hz
//  }
//  SetPosition(SERVO_ID, 1023);
}
