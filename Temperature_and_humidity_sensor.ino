/*
this is a sketch for a temperature and humidity sensor that displays
the information on a 16x2 LCD  For more information see the README file supplied with this sketch.
*/
#include "DHT.h" // include the libraries
#include <LiquidCrystal.h>

#define DHTPIN 2   // define the DHT pin

#define DHTTYPE DHT22  // define the DHT type

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);  // define the LCD pins

void setup() {
  lcd.begin(16, 2);  // setup the LCD
  dht.begin();       // setup the DHT
  Serial.begin(9600);// setup serial coms to the serial monitor
}

void loop() {
  delay(2000); // wait 2 seconds
  float t = dht.readTemperature(); // read temperature
  Serial.println("Reading temperature...");
  float h = dht.readHumidity();    // read humidity
  Serial.println("Reading humidity...");
  if (isnan(h) || isnan(t)) {  // check if it failed to read and if so enter this loop
    Serial.println("Failed to read from DHT22");
    lcd.print(" Failed to read ");
    lcd.setCursor(0, 1);
    lcd.print("   from DHT22   ");
    return;
  }
  lcd.print("Temp: "); // print to the display
  lcd.print(t);
  lcd.print("*C");
  Serial.println("printing temperature...");
  lcd.setCursor(0, 1); // put the cursor on line 2
  lcd.print("Humidity: "); // print to the display again
  lcd.print(h);
  lcd.print(" %");
  Serial.println("printing humidity...");
  lcd.setCursor(0,0); // put the cursor back to line 1
}
