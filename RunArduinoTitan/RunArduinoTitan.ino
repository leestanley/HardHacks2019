// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Initiating...");
  delay(3000);
  lcd.clear();
  lcd.print("# of people:");
  pinMode(10, OUTPUT);
}
 
void loop() {
    if (Serial.available() > 0) {
      lcd.setCursor(0, 1);
      String persons = Serial.readString();
      lcd.print(persons);
    }
    delay(1000);
}
