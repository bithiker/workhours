// Zeitermittlung v1.2

#include <iostream>

using namespace std;

int main()
{
   // Var declaration
   int AnfangStunde = 0, AnfangMinute, EndStunde, EndMinute, Pause, Anfang, Ende;
   float totalMinuten, totalStunden;
   
   // Endlosschleife solange Benutzereingabe größer -1 (0... n) ist
   while (AnfangStunde > -1)
   {
      // Input
      cout << "Anfang (hh mm): "; cin >> AnfangStunde >> AnfangMinute;
      cout << "Ende (hh mm): "; cin >> EndStunde >> EndMinute;
      cout << "Pause (mm): "; cin >> Pause;
   
      // Processing (Conversions and Calculations)
      if (Pause < 30) Pause = 30;
      Anfang = AnfangStunde*60 + AnfangMinute;
      Ende = EndStunde*60 + EndMinute;
      totalMinuten = Ende - Anfang - Pause;
      totalStunden = totalMinuten/60;
  
      // Output
      cout << AnfangStunde << ":" << AnfangMinute << " bis " << EndStunde << ":" << EndMinute;
      cout << " mit " << Pause << " Minuten Pause = ";
      cout << totalStunden << " Arbeitsstunden, umgerechnet ";
      cout << totalMinuten << " Minuten\n";
   }
   return 0;
} 