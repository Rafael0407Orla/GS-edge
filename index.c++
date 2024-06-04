#include <LiquidCrystal_I2C.h>
//initialize lcd
LiquidCrystal_I2C lcd(0x20,16,2);
LiquidCrystal_I2C lcd2(0x21,16,2);

int analogPinPh = A2;
int analogPinPartic = A0;    
int SensorTempPino= A1;

int ledPartic = 6;
int ledTemp = 7;
int ledPh = 8;


void setup()
{ 
  pinMode(analogPinPartic, INPUT);
  pinMode(analogPinPh, INPUT);
  pinMode(analogPinPartic, INPUT);
  pinMode(ledPartic, OUTPUT);
  pinMode(ledTemp, OUTPUT); 
  pinMode(ledPh, OUTPUT);
 
  lcd.init();
  lcd.backlight();
  lcd.clear();  
  lcd2.init();
  lcd2.backlight();
  lcd2.clear();   
  
  lcd.setCursor(2,0);  
  lcd.print("Hello Oceans");
  
  lcd.setCursor(0,1);   
  lcd.print("Infos about you!");
  lcd2.print("  Alert screen");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Part. Temp. PH");  
 
  

}

void loop()
{
  // obtem os valores do ph
  int sensorPh = analogRead(analogPinPh);
  float ph = sensorPh * (14.0/1023); // Converte os valores para simular o PH
  // obtem os valores para temperatura
  int SensorTempTensao=analogRead(SensorTempPino);
  float Tensao=SensorTempTensao*5;
  Tensao/=1024;
  int TemperaturaC=(Tensao-0.5)*100;
  
  //obtem os valores da quantidade de particulas	
  int sensorValue = analogRead(analogPinPartic);
  
  lcd.setCursor(0, 1);
  String output = " " + String(sensorValue) + "   " + String(TemperaturaC) + "C " + String(ph);
  lcd.print(output);
  
  
  if(ph < 6 && TemperaturaC > 30 && sensorValue>600 ){
    lcd2.clear();
    lcd2.setCursor(3,0);  
    lcd2.print("Everything");
    lcd2.setCursor(4,1);
    lcd2.print("end up...");
    digitalWrite(ledPartic, HIGH);
    digitalWrite(ledTemp, HIGH);
    digitalWrite(ledPh, HIGH);
    delay(1000);

  }
  else if(ph < 6){
    lcd2.clear();
    lcd2.setCursor(1,0);  
    lcd2.print("Water is acid");
    lcd2.setCursor(5,1);
    lcd2.print("Ph:" + String(ph));  
    digitalWrite(ledPartic, LOW);
    digitalWrite(ledTemp, LOW);
    digitalWrite(ledPh, HIGH);
    delay(1000);

  }
  
  else if(TemperaturaC > 30){
    lcd2.clear();
    lcd2.setCursor(0,0);  
    lcd2.print("Water is to hot");
    lcd2.setCursor(3,1);
    lcd2.print("Temp:" + String(TemperaturaC)+ "°C"); 
    digitalWrite(ledPartic, LOW);
    digitalWrite(ledTemp, HIGH);
    digitalWrite(ledPh, LOW);
    delay(1000);
  }
  
  else  if(sensorValue > 600 ){
    lcd2.clear();
    lcd2.setCursor(0,0);  
    lcd2.print(" Water is dirty");
    lcd2.setCursor(1,1);
    lcd2.print("Partic: " + String(sensorValue) + "ppm");  
    digitalWrite(ledPartic, HIGH);
    digitalWrite(ledTemp, LOW);
    digitalWrite(ledPh, LOW);
    delay(1000);
  }
  
  if(sensorValue < 600 && TemperaturaC <30 && ph > 6){
   	lcd2.clear(); 
  };
    digitalWrite(ledPartic, LOW);
    digitalWrite(ledTemp, LOW);
    digitalWrite(ledPh, LOW);
    delay(100);
  
}