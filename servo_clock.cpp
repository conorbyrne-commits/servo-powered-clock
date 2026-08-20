//imports necessary classes for the servo drivers
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

//first servo driver object created. Called this way, it uses the default address 0x40
Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver();
//second servo driver object created using the address 0x41, corresponding to the properly addressed second driver
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);

//servo frequency value of 50 mhz
#define SERVO_FREQ 50
//pwm values for 90 and 180 degrees
int DISPLAY_OFF = 290;
int DISPLAY_ON = 490;

//servo numbers are assigned to variable names
int FIRST_UP = 1;
int FIRST_UP_LEFT = 2;
int FIRST_UP_RIGHT = 3;
int FIRST_MIDDLE = 4;
int FIRST_DOWN_LEFT = 5;
int FIRST_DOWN_RIGHT = 6;
int FIRST_DOWN = 7;
int SECOND_UP = 8;
int SECOND_UP_LEFT = 9;
int SECOND_UP_RIGHT = 10;
int SECOND_MIDDLE = 11;
int SECOND_DOWN_LEFT = 12;
int SECOND_DOWN_RIGHT = 13;
int SECOND_DOWN = 14;

//time-keeping variables
int hours;
int minuteTens;
int minuteOnes;

void setup() {
    //sets serial monitor (unused in final version)
    Serial.begin(9600);
    
    //calls necessary functions to set up first servo driver
    pwm1.begin();
    pwm1.setOscillatorFrequency(27000000);
    pwm1.setPWMFreq(SERVO_FREQ);
    delay(10);

    //calls necessary functions to set up first servo driver
    pwm2.begin();
    pwm2.setOscillatorFrequency(27000000);
    pwm2.setPWMFreq(SERVO_FREQ);
    delay(10);

    //initializes time-keeping variables
    hours = 12;
    minuteTens = 0;
    minuteOnes = 0;
}

void loop() {

    /* Switch statement tracks the hours variable, containing 12
     * cases for each of the 12 possible hours values. For each possible hour,
     * each of the 14 hour-tracking servos are set to the necessary pwm value to 
     * display the right digit. 
     */
    switch(hours) {
        case 1:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break;
        case 2:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break;
        case 3:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break;
        case 4:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break; 
        case 5: 
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break;
        case 6:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break; 
        case 7:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break; 
        case 8:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break; 
        case 9:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break; 
        case 10:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
            break; 
        case 11:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF); 
            break;
        case 12:
            pwm2.setPWM(FIRST_UP, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
            pwm2.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_OFF);
            pwm2.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_UP, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
            pwm2.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_ON);
            pwm2.setPWM(SECOND_DOWN, 0, DISPLAY_OFF); 
            break; 
    }

    //While loop updates the minutes tens digit 6 times every hour (every 10 minutes)
    while (minuteTens < 6) {
        /* switch statement tracks the variable for the tens digit of the minute, with 6
         * cases for each of the 6 possible values. For every value, each of the
         * 7 tens digit-tracking servos are set to the necessary pwm value. 
         */
        switch(minuteTens) {
            case 0:
                pwm1.setPWM(SECOND_UP, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_UP_LEFT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN, 0, DISPLAY_ON);
                break;
            case 1:
                pwm1.setPWM(SECOND_UP, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_MIDDLE, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
                break;
            case 2:
                pwm1.setPWM(SECOND_UP, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_MIDDLE, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_DOWN, 0, DISPLAY_ON);
                break;
            case 3:
                pwm1.setPWM(SECOND_UP, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_UP_LEFT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_MIDDLE, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN, 0, DISPLAY_ON);
                break;
            case 4:
                pwm1.setPWM(SECOND_UP, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_UP_LEFT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_MIDDLE, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN, 0, DISPLAY_OFF);
                break;
            case 5:
                pwm1.setPWM(SECOND_UP, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_UP_LEFT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_UP_RIGHT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_MIDDLE, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN_LEFT, 0, DISPLAY_OFF);
                pwm1.setPWM(SECOND_DOWN_RIGHT, 0, DISPLAY_ON);
                pwm1.setPWM(SECOND_DOWN, 0, DISPLAY_ON);
                break;
        }

        //This loop updates ones digit of the minutes 10 times (one for every possible digit)
        while (minuteOnes < 10) {
            /* This switch statement tracks the variable for the ones digit of the minute, containing
             * 10 cases for each of the 10 possible values. For each possible value, each of the 7
             * digit-tracking servos are set to the necessary pwm value
             */
            switch(minuteOnes) {
                case 0:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
                    break;
                case 1:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_OFF);
                    break;
                case 2:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
                    break;
                case 3:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
                    break;
                case 4:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_OFF);
                    break;
                case 5:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
                    break;
                case 6:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
                    break;
                case 7:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_OFF);
                    break;
                case 8:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
                    break;
                case 9:
                    pwm1.setPWM(FIRST_UP, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_LEFT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_UP_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_MIDDLE, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN_LEFT, 0, DISPLAY_OFF);
                    pwm1.setPWM(FIRST_DOWN_RIGHT, 0, DISPLAY_ON);
                    pwm1.setPWM(FIRST_DOWN, 0, DISPLAY_ON);
                    break;
            }

            //Ones variable is incremented within the ones loop after waiting 1 second
            delay(1000);
            minuteOnes++;
        }

        //Ones variable is reset and tens variable is incremented for every 10-minute interval (both outside ones loop)
        minuteOnes = 0;
        minuteTens++;
    }

    //Tens variable is reset outside tens loop
    minuteTens = 0;

    //Outside all other loops, the hours variable is updated, and set back to 1 when incremented beyond 12
    hours++;
    if (hours > 12)
        hours = 1;
    
}