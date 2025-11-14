#ifndef CONFIG_H
#define CONFIG_H
#include <Arduino.h>

// Motor pins for wheels (connected to MakerVerse driver)
const int MOTOR2_PWM = 9;      // Right motor PWM
const int MOTOR1_PWM = 10;     // Left motor PWM
const int MOTOR2_DIR = 4;      // Right motor direction
const int MOTOR1_DIR = 7;      // Left motor direction

// Servo pin
const int SERVO_PIN = 11;      // Servo for mandible

// Motor direction logic (Motor 2 is reversed)
const bool MOTOR2_FORWARD = LOW;
const bool MOTOR2_REVERSE = HIGH;
const bool MOTOR1_FORWARD = HIGH;   // Inverted because motor is wired backwards
const bool MOTOR1_REVERSE = LOW;    // Inverted because motor is wired backwards

const int LED_PIN = 3;

// Motor speed compensation
// If left motor is weaker, use ratio < 1.0 (e.g., 0.9)
// If left motor is stronger, use ratio > 1.0 (e.g., 1.1)
// Ratio of 1.0 means no compensation
const float MOTOR_SPEED_RATIO = 0.8;  // Left to Right ratio (TUNE THIS!)
const int MAX_PWM = 255;              // Maximum PWM value

// Speed constants (keeping things smooth and slow)
const int SPEED_FAST = 90;
const int SPEED_NORMAL = 70;
const int SPEED_SLOW = 55;
const int SPEED_CREEP = 55;
const int SPEED_ROTATE_CONT = 45;
const int SPEED_NUDGE = 70;

// Timing constants (experimentally tune these)
const int ROTATE_180_TIME = 2000;  // Time for 180 degree turn (tune this!)
const int ROTATE_90_TIME = 850;    // Time for 90 degree turn (tune this!)
const int NUDGE_TIME = 150;        // Small adjustment time
const int SHIMMY_TIME = 250;       // Time for each shimmy movement

// Motor settling delays
const int DIR_SETTLE_DELAY = 50;   // Time to let direction pins settle
const int MOTOR_STOP_DELAY = 100;  // Brief pause when stopping

// Pixy camera constants
const int BALL_SIGNATURE = 1;      // Signature number for the ball (1-7)

// TARGET POSITION: X: 59, Y: 137, Size: 58
const int PIXY_CENTER_X = 59;       // Target X position
const int PIXY_CENTER_Y = 177;      // Target Y position
const int CENTER_TOLERANCE = 2;     // 4% of 59 = 2.36 pixels

// TARGET SIZE: Width 58
const int TARGET_BALL_SIZE = 58;    // Target ball width
const int SIZE_TOLERANCE = 2;       // 4% of 58 = 2.32 pixels

#endif