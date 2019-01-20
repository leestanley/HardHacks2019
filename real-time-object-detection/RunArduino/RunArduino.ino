// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Welcome to");
  lcd.setCursor(0,1);
  lcd.print("Noggin Login!");
  delay(2200);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Initiating...");
  delay(1700);
  lcd.clear();
  lcd.print("# of people:");
  lcd.setCursor(0,1);
  pinMode(10, OUTPUT);
}
 
void loop() {
    if (Serial.available() > 0) {
      lcd.home();
      String persons = Serial.readString();
      lcd.println(persons);
    }
    delay(300);
}
