#ifndef LED_H_
#define LED_H_

void Chenilard(int Temps, int Nombre_LED) ;
void Setup(int Exa_Pin_entree, int Exa_Pin_Sortie);
bool Lire(int Exa_Pin);
void Allume(int Exa_Pin);
void Eteindre(int Exa_Pin);

#endif