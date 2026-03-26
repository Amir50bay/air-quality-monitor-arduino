#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

const int MQ_PIN = A0;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);

  dht.begin();

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Air Monitor");
  lcd.setCursor(0, 1);
  lcd.print("Starting...");
  delay(2000);
}

void loop() {
  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int mqRaw = analogRead(MQ_PIN);

  if (isnan(h) || isnan(t)) {
    Serial.println("DHT22 error");
    lcd.setCursor(0, 0);
    lcd.print("DHT22 error     ");
    lcd.setCursor(0, 1);
    lcd.print("Check wiring    ");
    return;
  }

  Serial.print("T: ");
  Serial.print(t);
  Serial.print(" C,  H: ");
  Serial.print(h);
  Serial.print(" %,  MQ: ");
  Serial.println(mqRaw);

  const int THRESH_GOOD = 350;
  const int THRESH_BAD  = 500;
  const char* aqLabel;
  if (mqRaw < THRESH_GOOD)      aqLabel = "Good";
  else if (mqRaw < THRESH_BAD)  aqLabel = "Med ";
  else                          aqLabel = "Bad ";

  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(t, 1);
  lcd.print((char)223);
  lcd.print("C ");
  lcd.print("H:");
  lcd.print(h, 0);
  lcd.print("% ");

  lcd.setCursor(0, 1);
  lcd.print("AQ:");
  lcd.print(mqRaw);
  lcd.print(" ");
  lcd.print(aqLabel);
  lcd.print("   ");
}