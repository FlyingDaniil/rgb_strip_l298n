#define RED_PIN 11       // пин красного канала
#define GREEN_PIN 10     // пин зелёного канала
#define BLUE_PIN 9       // пин синего канала

int red = 0, green = 0, blue = 0; // переменные цветов

void setup() {
  Serial.begin(9600);             //общение с монитором порта
  Serial.println("RBG LED v 1.0");//отправка версии прошивки в порт

  pinMode(RED_PIN,   OUTPUT); // конфигурируем пин как цифровой выход красного канала
  pinMode(GREEN_PIN, OUTPUT); // конфигурируем пин как цифровой выход зеленого канала
  pinMode(BLUE_PIN,  OUTPUT); // конфигурируем пин как цифровой выход синего канала
}

void loop() {
  red   = (red + 1)   % 1024; // меняем красный цвет
  green = (green + 2) % 1024; // меняем зеленый цвет
  blue  = (blue + 3)  % 1024; // меняем синий цвет

  analogWrite(RED_PIN, red);    // выводим красный цвет
  analogWrite(GREEN_PIN, green);// выводим зеленый цвет
  analogWrite(BLUE_PIN, blue);  // выводим синий цвет
  delay(10);                    // ждём 50 миллисекунд
}
