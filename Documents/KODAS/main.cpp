#include <iostream>
#include <fstream>
using namespace std;

struct Zuvis
{
    int id;
    string vardas;
    string rusis;
    int amzius;
    double ilgis;
    double temperatura;
    int kiekis;
};
Zuvis zuvys[100];
int zuvuSkaicius = 0;
void nuskaitytiIsFailo()
{
    ifstream fd("zuvys.txt");
    while(fd >> zuvys[zuvuSkaicius].id >> zuvys[zuvuSkaicius].vardas >>
          zuvys[zuvuSkaicius].rusis >> zuvys[zuvuSkaicius].amzius >>
          zuvys[zuvuSkaicius].ilgis >> zuvys[zuvuSkaicius].temperatura >>
          zuvys[zuvuSkaicius].kiekis)
    {
        zuvuSkaicius++;
    }
    fd.close();
}
