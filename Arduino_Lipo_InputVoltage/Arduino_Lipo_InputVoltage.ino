int BatteryVoltageInput(A5);

int BatteryProzent=0;
float BatteryVoltageVar=0;


int  BatteryProzentNumbers[21]={0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
 
float BatteryVoltage[22]={0,0};

 
void defineBatteryVoltage(){
BatteryVoltage[1]= 3.20;
BatteryVoltage[2]=3.35;
BatteryVoltage[3]=3.42; //10
BatteryVoltage[4]=3.45;
BatteryVoltage[5]=3.50; //20
BatteryVoltage[6]=3.55;
BatteryVoltage[7]=3.60; //30
BatteryVoltage[8]=3.62;  
BatteryVoltage[9]=3.64;
BatteryVoltage[10]=3.66;
BatteryVoltage[11]=3.68;
BatteryVoltage[12]=3.70; //55
BatteryVoltage[13]=3.72;
BatteryVoltage[14]=3.75;
BatteryVoltage[15]=3.77;
BatteryVoltage[16]=3.80; //75
BatteryVoltage[17]=3.83;
BatteryVoltage[18]=3.86;
BatteryVoltage[19]=3.90; //90
BatteryVoltage[20]=4.00;
BatteryVoltage[21]=4.20;
BatteryVoltage[22]=4.30;
}
void setup() {
 pinMode(BatteryVoltageInput,INPUT);
 defineBatteryVoltage();
Serial.begin(9600);


}

 
void loop() {
   
  BatteryVoltageVar=analogRead(BatteryVoltageInput);
  //Serial.println(BatteryVoltageVar);
  BatteryVoltageVar=BatteryVoltageVar/250;
  Serial.print("Voltage: ");
  Serial.println( BatteryVoltageVar);
   BatteryVoltageOutput();
   delay(500);
   
  }

void BatteryVoltageOutput(){
  for(int x=1;x>=21;x++){
    if(BatteryVoltage[x]<=BatteryVoltageInput&&BatteryVoltage[x+1]>BatteryVoltageInput){
      BatteryProzent=BatteryProzentNumbers[x];
      Serial.println(BatteryProzent);
      goto A;
      }
      
    
  }
  A: ;
}
