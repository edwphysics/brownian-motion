/*
 * Temperature Sensor
 *  
 *  CONVERTION A/D TO TEMPERATURE
 *  (Au)(5V/1024u)*(1°C/10^-2V) = A*(500/1024) °C
 *  
*/

//THERMOMETER PIN NUMBERS
const int LM35 = A5;

//THERMOMETER
float T;              //STORES TEMPERATURE MEASUREMENT
float CTOK = 273.15;  //CONVERSION °C TO KELVIN

//MEASURING TIME 
unsigned long time_Start = 0;
unsigned long time_Finish;

void setup() {
  //SET THE PINS MODE
  pinMode(LM35, INPUT); 
  
  //ALLOWS DATA TRANSFER TO SERIAL MONITOR
  Serial.begin(9600);
}

void loop() {  
  
  //READ THE LM35 SENSOR AVERAGE VALUE AS TEMPERATURE IN °C
  int max_Promedio = 500;
  int i = 1;
  float T_Sum = 0.;
  while(i <= max_Promedio){  
    T = analogRead(LM35);
    T_Sum += T;
    if(i == max_Promedio){
      T = T_Sum*(500./1024.)/i;
    }
    i++;

  }

  //PRINT TEMPERATURE IN °C OR K
  Serial.println(T + CTOK);
}
