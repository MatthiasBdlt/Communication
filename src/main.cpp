/**     // TO DO
 * @file main.cpp
 * @author Matthias Bidault
 * @brief 
 * @version 0.1
 * @date 2025-01-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
//////////////////////////////////////////////////////////////////////

#include <Arduino.h>

#define TX_PIN 17  // GPIO17 comme TX
#define RX_PIN 16  // GPIO16 comme RX

// Définition des constantes pour chaque valeur
#define SERRE_ID 1            // ID du serre
#define TRAME_NUM 150         // Numéro de la trame
#define TEMPERATURE 23.5      // Température en °C
#define HUMIDITE 65           // Humidité en %

HardwareSerial mySerial(2);  // UART2

void setup() {
    Serial.begin(9600);  // Moniteur Série USB
    mySerial.begin(200, SERIAL_8N1, RX_PIN, TX_PIN);  // UART2
}

void loop() {
    // Construire la trame avec les valeurs définies
    String data = "SERRE;" + String(SERRE_ID) + ";" + String(TRAME_NUM) + ";" + String(TEMPERATURE) + ";C;" + String(HUMIDITE) + ";%";
    String trame = "\x02" + data + "\x03\r\n";  // Construction de la trame

    mySerial.print(trame);  // Envoi via UART
    Serial.println("Trame envoyée : " + trame);  // Debug via USB

    delay(1000);  // Pause 1s
}