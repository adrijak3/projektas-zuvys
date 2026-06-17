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
void issaugotiIFaila()
{ ofstream fr("zuvys.txt");
  for(int i = 0; i < zuvuSkaicius; i++)
    { fr << zuvys[i].id << " " << zuvys[i].vardas << " " << zuvys[i].rusis << " "
        << zuvys[i].amzius << " " << zuvys[i].ilgis << " " << zuvys[i].temperatura << " "
        << zuvys[i].kiekis << endl;
    }
fr.close();
}
void rodytiVisasZuvis()
{
    for(int i=0;i<zuvuSkaicius;i++)
    {
        cout << "Visu zuvu sarasas: " endl;
        cout << "ID: " << zuvys[i].id << endl;
        cout << "Vardas: " << zuvys[i].vardas << endl;
        cout << "Rusis: " << zuvys[i].rusis << endl;
        cout << "Amzius: " << zuvys[i].amzius << endl;
        cout << "Ilgis: " << zuvys[i].ilgis << endl;
        cout << "Temperatura: " << zuvys[i].temperatura << endl;
        cout << "Kiekis: " << zuvys[i].kiekis << endl;
    }
}
void pridetiZuvi()
{
    cout<<"ID: ";
    cin>>zuvys[zuvuSkaicius].id;
    cout<<"Vardas: ";
    cin>>zuvys[zuvuSkaicius].vardas;
    cout<<"Rusis: ";
    cin>>zuvys[zuvuSkaicius].rusis;
    cout<<"Amzius: ";
    cin>>zuvys[zuvuSkaicius].amzius;
    cout<<"Ilgis: ";
    cin>>zuvys[zuvuSkaicius].ilgis;
    cout<<"Temperatura: ";
    cin>>zuvys[zuvuSkaicius].temperatura;
    cout<<"Kiekis: ";
    cin>>zuvys[zuvuSkaicius].kiekis;
    zuvuSkaicius++;
    cout<<"Prideta:)"<<endl;
}
void redaguotiZuvi()
{
    int ieskomasId;
    cout<<"Iveskite zuvies ID: ";
    cin>>ieskomasId;
    for(int i=0;i<zuvuSkaicius;i++)
    { if(zuvys[i].id==ieskomasId)
        {
            cout<<"Naujas vardas: ";
            cin>>zuvys[i].vardas;
            cout<<"Nauja rusis: ";
            cin>>zuvys[i].rusis;
            cout<<"Naujas amzius: ";
            cin>>zuvys[i].amzius;
            cout<<"Naujas ilgis: ";
            cin>>zuvys[i].ilgis;
            cout<<"Nauja temperatura: ";
            cin>>zuvys[i].temperatura;
            cout<<"Naujas kiekis: ";
            cin>>zuvys[i].kiekis;
            cout<<"Atnaujinta"<<endl;
            return;}}
    cout<<"Zuvis nerasta"<<endl;
}
