int ledp=6;
int potp=A5;
int blink;
int lv;
int pv;
float per;
String mode="";
String bri;
String menu="\n==MENU==\n1.ON\n2. OFF\n3.Blink\n4.Fade\n5.Brightness\n6.Status\n";
int ip;

void setup()
{
  pinMode(ledp,OUTPUT);
  pinMode(potp,INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(menu);
  while (Serial.available()==0){}
  ip=Serial.parseInt();
 
  if (ip == 1) {
    analogWrite(ledp, 255);
    mode="ON";
    bri="100%";
    
  }
  else if (ip == 2) {
    analogWrite(ledp, 0);
    mode="OFF";
    bri="0%";
  }
 
  else if(ip==3){
    Serial.println("Enter number of seconds LED should blink:");
    while (Serial.available() == 0) {}
    blink=Serial.parseInt();
    for(int i=0; i<blink*5 ; i++){
    	analogWrite(ledp, 255);
      	delay(100);
      	analogWrite(ledp, 0);
      	delay(100);
    }
    mode="blink";
    bri="100%";
  }
  else if(ip==4){
	for(int b=0; b<=255; b++){
    	analogWrite(ledp,b);
    	delay(5);
}

	for(int b=255; b>=0; b--){
    	analogWrite(ledp,b);
    	delay(5);
}
    mode="fade";
    bri="Variable";
    }
  
  else if (ip == 5){
  Serial.println("Turn knob to adjust brightness. To exit, enter any key.");
  while (Serial.available() == 0) {
    pv = analogRead(potp);
    lv = (255.0 / 1023.0) * pv;
    analogWrite(ledp, lv);
  }
    
  Serial.readString(); 
    
    mode="Brightness control";
    per=(100.0/255.0)*lv;
    bri=String(per)+"%";
 }
 else if(ip==6){
    Serial.println("==Status==");

    Serial.print("Mode=");
    Serial.println(mode);

    Serial.print("Brightness=");
    Serial.println(bri);
}
}
