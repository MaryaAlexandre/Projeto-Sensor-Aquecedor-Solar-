const int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float temperatureC = sensorValue * 0.48828125; // Convertendo a leitura do sensor em temperatura Celsius
  Serial.print("Temperatura: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
  delay(1000); // Aguarda 1 segundo antes de ler novamente
}

