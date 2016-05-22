This is a temperature and humidity sensor that displays the information on a 16x2 Hitachi HD44780 driven LCD (e.g. adafruit pid:1447) via an arduino.

  The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * 10K variable resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)
 * DTH22 Temperature and humidity sensor (adafruit pid 393):
 * data pin to digital pin 2
 * VCC to 3.3V
 * ground to ground

For this code to work you will first have to move the libraries folder supplied with this into your sketchbook folder so the Arduino IDE can use the libraries and then restart the IDE (for more information on installing libraries see http://arduino.cc/en/Guide/Libraries)

 This code is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This code is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
