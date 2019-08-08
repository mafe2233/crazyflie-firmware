#include "mbed.h"
#include "crazyflie.h"

// Define all LEDs as digital output objects
DigitalOut led1(LED_BLUE_R,!false);
DigitalOut led2(LED_RED_R,!false);
char t;
// Define all motors as PWM objects

// Main program
int main()
{
    // Blink blue LED indicating inicialization (5 seconds)
    while(t<5)
    {
        led1 = !led1;
        wait(0.1);


    }
    // Turn on red LEDs indicating motors are armed
    led2 = !led2
    // Test all motors with different frequencies (to make different noises)
    
    // Turn off red LEDs indicating motors are disarmed
    
    // Blink green LEDs indicating end of program
    while(true)
    {
        
    }
}
