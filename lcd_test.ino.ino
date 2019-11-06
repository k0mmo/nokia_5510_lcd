#include <Nokia_LCD.h>

Nokia_LCD lcd(7 /* CLK */, 6 /* DIN */, 5 /* DC */, 4 /* CE */, 3 /* RST */); // pin layout from lcd to uno

void setup(){
  // start screen
  lcd.begin();
  // set contrast
  lcd.setContrast(50); // best between 40 and 60
  // prints to the lcd
  lcd.setCursor(0,0); // sets cursor top left of screen
  lcd.clear(false);
  lcd.print("testing");
  lcd.setCursor(0,1);
  lcd.print("working");
  delay(2000);
}

void loop(){
  // main code here
  lcd.clear(false);
  lcd.setCursor(0,0);
  lcd.print("BY k0mmo");
  lcd.setCursor(0,2);
  lcd.print("Done in c++");
}
