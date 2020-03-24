// defines variables
const int trigPin = 9;
const int echoPin = 10;
int a=0;
int b=0;
int dur;
int dis;
// defines variables


long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(2,INPUT);
   pinMode(8,OUTPUT);
    pinMode(9,INPUT);
    pinMode(13,INPUT);
    pinMode(12,INPUT);
    pinMode(7,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(A0,OUTPUT);
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600);

}

void loop() {
analogWrite(A0,0);
  digitalWrite(5,LOW);

  digitalWrite(7,HIGH);
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);
  if(digitalRead(12)==HIGH)
  {
    Serial.write("1");
   
  }
  if(digitalRead(13)==HIGH)
  {
    Serial.write("2");
    
   
  }
  if(digitalRead(2)==HIGH)
  {
    Serial.write("5");
    
   
  }
  digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
a=distance;
delay(500);
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

dur = pulseIn(echoPin, HIGH);
  dis= dur*0.034/2;
  b=dis;
  if(b<95){Serial.write("3");}
  else if(b>105){Serial.write("4");}
  if(Serial.available()>0)
  {
    if(Serial.read()=='9'){digitalWrite(4,HIGH);}
    if(Serial.read()=='8'){digitalWrite(3,HIGH);}
    if(Serial.read()=='1'){digitalWrite(6,HIGH);}
    if(Serial.read()=='0'){digitalWrite(6,LOW);}
    if(Serial.read()=='0'){digitalWrite(4,LOW);}
    if(Serial.read()=='0'){digitalWrite(3,LOW);}
    
    }
  }
  
  
