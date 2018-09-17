#define RED_PIN 11       // red channel pin
#define GREEN_PIN 10     // green channel pin
#define BLUE_PIN 9       // blue channel pin

int red = 0, green = 0, blue = 0; // Colors variables

void setup() {
  Serial.begin(9600);             //enable serial communication
  Serial.println("RBG LED v 1.0");//sketch version to serial port

  pinMode(RED_PIN,   OUTPUT);  // configuraiting pin as red channel output
  pinMode(GREEN_PIN, OUTPUT);// configuraiting pin as green channel output
  pinMode(BLUE_PIN,  OUTPUT); // configuraiting pin as blue channel output
}

void loop() {
  red   = (red + 1)   % 1024; // change red color
  green = (green + 2) % 1024; // change green color
  blue  = (blue + 3)  % 1024; // change blue color

  analogWrite(RED_PIN, red);    // red channel output
  analogWrite(GREEN_PIN, green);// green channel output
  analogWrite(BLUE_PIN, blue);  // blue channel output
  delay(10);                    // delay 50 milliseconds
}
