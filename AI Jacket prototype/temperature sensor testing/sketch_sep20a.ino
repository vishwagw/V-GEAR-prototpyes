
//Libraries
#include <DHT.h>;

#define dataPin 2
#define dataType DHT22
DHT dht(dataPin, dataType);

int chk;
float hum;  //Stores humidity value
float temp; //Stores temperature value

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
dht.begin();
}

void loop() {
  hum = dht.readHumidity();
  temp= dht.readTemperature();
  
  // Printing the results on the serial monitor
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print(" %, Temp: ");
  Serial.print(temp);
  Serial.println(" Celsius");

}
