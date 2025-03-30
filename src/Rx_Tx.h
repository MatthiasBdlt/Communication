#ifndef RX_TXH
#define RX_TXH

void setupMoniteurSerie(int Baud);
void setupTransmition(int Pin_RX, int Pin_TX, int Baud_transm);
void setupDHT22();
void afficherTrame();
void envoyerTrame(String SERRE_ID, float TEMPERATURE, float HUMIDITE);
float capteurTemperature();
float capteurHumidite();

#endif