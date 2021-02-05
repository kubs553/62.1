#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int rozmiar = 1000;
  int minimum = 9999;
  int maximum = 0;
  ifstream plik ("liczby1.txt");
  int t[rozmiar];
  for (int i = 0; i < rozmiar; i++) 
    plik >> t[i];
  for (int i = 0; i < rozmiar; i++) {
    if (t[i] < minimum) minimum = t[i];
    if (t[i] > maximum) maximum = t[i];
  }
  cout << "Najmniejsza: " << minimum << "\n";
  cout << "Najwieksza: " << maximum << "\n";
  return 0;
}
