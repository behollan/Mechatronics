/*
 MEGN 540: Mechatronics
Laboratory 1: Atmel Studio and Serial Communication   Version 3.0

 Objective: In this lab you will learn the basics of microcontroller programming and serial communication using the Atmel Studio software development environment. 
  
 * Created: 2/2/2017 2:50:52 PM
 * Author : Josh McNeely			<jmcneely@mymail.mines.edu>
			Ben Holland				<behollan@mines.edu.
			Joaquin Ortega Moreno	<joaquin.om5@gmail.com>
 
 Assignment: The main assignment in this lab is to build a program/application that will set up the microcontroller for serial communication and transmit and receive some values via the serial port (a USB port set up to operate as a serial COM port) to be viewed in a serial communication program you will write in Matlab. 
 
 1. Create a function that sends a single character (type char) of your choosing from the microcontroller to the computer via serial communication (such as letter "A"). Make sure you can receive and display this character in Matlab (also develop the Matlab code to do this). 
 
 2. Create a function that sends a string (composed of several characters, such as a word or a sentence) from the microcontroller to the computer. 
 
 3. Create a function that sends an 8-bit numerical value, of type uint8_t  from the microcontroller to the computer. You will need to convert the number to a character for this. 
 
 4. Create a function that sends a 32-bit numerical value (type float), from the microcontroller to the computer. You will need to split it into 8-bit parts and send them in correct order, and also receive and combine them in the correct order at the Matlab end. Call this function print_float. 5. Create a program that makes use of  your print_float function, to receive a 32-bit number from the computer, multiplies it by 5, and sends it back to the computer. When tested from the Matlab screen, you should input a float type number, then the microcontroller will send you back 5 times that number, which should be displayed. 
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
    while (1) 
    {
    }
}

