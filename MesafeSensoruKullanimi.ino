const int trig_pin = 2;
const int echo_pin = 3;

int sure = 0;
int mesafe = 0;

void setup() {
  pinMode(trig_pin,OUTPUT);
  pinMode(echo_pin,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig_pin,HIGH);
  delay(1);
  digitalWrite(trig_pin,LOW);

  sure = pulseIn(echo_pin,HIGH);
  
  mesafe = (sure/2)/29.1;

  Serial.print("Mesafe : ");
  Serial.print(mesafe);
  Serial.println(" cm");
  delay(500);
}
