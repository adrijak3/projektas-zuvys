#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

struct menuitemtype {string menuitem; double menuprice;}; // padarom item string nes pavadinimas, double nes nesveikas skaicius kaina
void getdata(menuitemtype sarasas[], int &kiekis);
void showmenu(menuitemtype sarasas[], int kiekiai[], int kiekis);

int main()
{
    int kiekis = 0;
    int kiekiai[20] = {0}; //nes db nulis uzsakyta
    menuitemtype sarasas[20];
    getdata(sarasas,kiekis);
    showmenu(sarasas,kiekis);
    }
