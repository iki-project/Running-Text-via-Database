#include <avr/wdt.h>
#include <SPI.h>
#include <Ethernet.h>
#include <SoftwareSerial.h>
#include <ArduinoJson.h>

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };

IPAddress ip(192, 168, 1, 7); //IP address for your arduino. UBAH UNTUK SETTING RUNNING TEXT BELAKANG 192,168,10,7
char host[] = "http://192.168.1.5"; //IP address of your computer.
int interrupt = 0; //Variable to control the iterations of void loop().
String mod = "testing"; //Variable to be written on the database.
String rcv = ""; //Variable in which the server response is recorded.
const int httpPort = 80;
String url;
long duration, distance;
unsigned long timeout;
char data_kirim;

EthernetClient client;
void setup() {
  Serial.begin(9600);
  Ethernet.begin(mac, ip);
  //Serial.println("Waiting to connect network...");
  delay(1000);           //Wait for ethernet to connect.
  wdt_enable(WDTO_8S);
  //Serial.println();
  //Serial.print("Connecting to ");
  //Serial.println(host);
}


void loop() {
  
    //Serial.print("");
    //Serial.print("connecting to ");
    //Serial.println(host);
    if (!client.connect(host, httpPort)) {
    //Serial.println("connection failed");
    return;
    }

    url = "/pids_tmii/runtext.php/";
    //Serial.print("Requesting URL: ");
    //Serial.println(url);

    client.println(String("GET ")+ url + " HTTP/1.1\r\n" +
          "Host: " + host + "\r\n" + 
          "Connection: close\r\n\r\n");
    timeout = millis();
    while (client.available() == 0) {
      if (millis() - timeout > 3000) {
          //Serial.println(">>> Client Timeout !");
          client.stop();
          return;
      }
  }



while(client.available()){
  String line = client.readStringUntil("\r");
  Serial.print(line);
  //int length = line.length();
  line.remove(0, 218);
  //Serial.println(line);
  //Serial.print("   ");
  //Serial.println();
  }

  
  //Serial.println("closing connection");
  //Serial.println();
  
  delay(1000);
}
