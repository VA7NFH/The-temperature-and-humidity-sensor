The temperature and humidity sensor
=========================================

This is a temperature and humidity sensor that displays the information on a 16x2 Hitachi HD44780 driven LCD (e.g. adafruit pid:1447) via an arduino and using an AM2302 sensor. NOTE: you must use arduino IDE version 1.0.5 for uploading to work else you will have an avr g++ error while compiling.

  The circuit:
 * LCD RS pin to arduino digital pin 7
 * LCD Enable pin to arduino digital pin 8
 * LCD D4 pin to arduino digital pin 9
 * LCD D5 pin to arduino digital pin 10
 * LCD D6 pin to arduino digital pin 11
 * LCD D7 pin to arduino digital pin 12
 * LCD R/W pin to ground
 * 10K variable resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * AM2302 Temperature and humidity sensor (adafruit pid 393):
 * data pin to arduino digital pin 2
 * VCC to 3.3V
 * ground to ground

For this code to work you will first have to install the libraries required so the Arduino IDE can use the libraries and then restart the IDE (for more information on installing libraries see http://arduino.cc/en/Guide/Libraries)
