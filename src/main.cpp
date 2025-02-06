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
#include "LED.h"

#define Nombre_Led 6
#define Exa_Leds 0x0E070000 
#define Exa_Bouton 0x00001000 
#define Temps 1000 //en ms

int Etat = 1 ; 
bool Etat_Bouton = LOW ;

void setup() 
{

  Setup(Exa_Leds, Exa_Bouton);

}

//Allumage simple
void loop() 
{

Etat_Bouton = Lire(Exa_Bouton);

if (Etat == 0 & Etat_Bouton == HIGH) 
  {

  Allume(Exa_Leds);
  delay(Temps);
  Etat = 1;
  Etat_Bouton = Lire(Exa_Bouton);

  }

if (Etat == 1 & Etat_Bouton == HIGH)
  {

  Eteindre(Exa_Leds);
  delay(Temps);
  Etat = 0;
  Etat_Bouton = Lire(Exa_Bouton);

  }
}

//chenillard
// void loop() {

// Etat_Bouton = Lire(Exa_Bouton);

// if (Etat_Bouton == 1) {

//   while (Etat_Bouton == 0);
//     {
//      Chenilard(Temps, Nombre_Led);
//      Etat_Bouton = Lire(Exa_Bouton);
//     }
//  }
//     else 
//   {
//     Eteindre(Exa_Leds);
//   }
// }