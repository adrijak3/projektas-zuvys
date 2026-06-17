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
    cout << "visu zuvu sarasas: " << endl;
    for(int i=0;i<zuvuSkaicius;i++)
    {
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
    cout << "Iveskite zuvies ID: ";
    cin >> ieskomasId;

    for (int i = 0; i < zuvuSkaicius; i++)
    {
        if (zuvys[i].id == ieskomasId)
        {
            int pasirinkimas;
            cout << "Ka norite redaguoti?\n";
            cout << "1 - Vardas\n";
            cout << "2 - Rusis\n";
            cout << "3 - Amzius\n";
            cout << "4 - Ilgis\n";
            cout << "5 - Temperatura\n";
            cout << "6 - Kiekis\n";
            cin >> pasirinkimas;
            switch (pasirinkimas)
            {
                case 1:
                    cout << "Naujas vardas: ";
                    cin >> zuvys[i].vardas;
                    break;
                case 2:
                    cout << "Nauja rusis: ";
                    cin >> zuvys[i].rusis;
                    break;
                case 3:
                    cout << "Naujas amzius: ";
                    cin >> zuvys[i].amzius;
                    break;
                case 4:
                    cout << "Naujas ilgis: ";
                    cin >> zuvys[i].ilgis;
                    break;
                case 5:
                    cout << "Nauja temperatura: ";
                    cin >> zuvys[i].temperatura;
                    break;
                case 6:
                    cout << "Naujas kiekis: ";
                    cin >> zuvys[i].kiekis;
                    break;
                default:
                    cout << "Nera tokio pasirinkimo\n";
            }
            cout << "Atnaujinta\n";
            return;
        }
    }
    cout << "Zuvis nerasta\n";
}
void pasalintiZuvi()
{
    int ieskomasId;

    cout<<"Iveskite ID: ";
    cin>>ieskomasId;

    for(int i=0;i<zuvuSkaicius;i++)
    {
        if(zuvys[i].id==ieskomasId)
        {
            for(int j=i;j<zuvuSkaicius-1;j++)
            {
                zuvys[j]=zuvys[j+1];
            }
            zuvuSkaicius--;
            cout<<"Pasalinta"<<endl;
            return;
        }

    }

    cout<<"Zuvis nerasta"<<endl;
}
void rodytiAtaskaita()
{
    int daugiausia = 0;
    int maziausia = 0;
    for(int i=1;i<zuvuSkaicius;i++)
    {
        if(zuvys[i].kiekis > zuvys[daugiausia].kiekis)
        {
            daugiausia=i;
        }
        if(zuvys[i].kiekis < zuvys[maziausia].kiekis)
        {
            maziausia=i;
        }
    }
    cout<<"Daugiausia ir maziausia zuvu: " << endl;
    cout<<"Daugiausia:"<<endl;
    cout<<zuvys[daugiausia].vardas <<" " <<zuvys[daugiausia].kiekis <<endl;
    cout<<endl;
    cout<<"Maziausia:"<<endl;
    cout<<zuvys[maziausia].vardas <<" " <<zuvys[maziausia].kiekis <<endl;
}
void spausdintiIFaila()
{
    ofstream fr("rezultatas.txt");

    fr << "VISU ZUVU ATASKAITA\n\n";

    for (int i = 0; i < zuvuSkaicius; i++)
    {
        fr << "ID: " << zuvys[i].id << "\n";
        fr << "Vardas: " << zuvys[i].vardas << "\n";
        fr << "Rusis: " << zuvys[i].rusis << "\n";
        fr << "Amzius: " << zuvys[i].amzius << "\n";
        fr << "Ilgis: " << zuvys[i].ilgis << "\n";
        fr << "Temperatura: " << zuvys[i].temperatura << "\n";
        fr << "Kiekis: " << zuvys[i].kiekis << "\n";
        fr << "----------------------\n";
    }

    fr.close();
    cout << "Rezultatas issaugotas i rezultatas.txt\n";
}
int main()
{ nuskaitytiIsFailo();
int pasirinkimas;
    while(true)
    {
        cout<<" Ka norite daryti?" << endl;
        cout<<"1 - Rodyti visas zuvis"<<endl;
        cout<<"2 - Prideti zuvi"<<endl;
        cout<<"3 - Redaguoti zuvi"<<endl;
        cout<<"4 - Pasalinti zuvi"<<endl;
        cout<<"5 - Ataskaita"<<endl;
        cout<<"6 - Issaugoti"<<endl;
        cout << "7 - Spausdinti ataskaita i faila"<<endl;
        cout<<"0 - Baigti"<<endl;
        cin>>pasirinkimas;
        switch(pasirinkimas)
        {
            case 1:
                rodytiVisasZuvis();
                break;
            case 2:
                pridetiZuvi();
                break;
            case 3:
                redaguotiZuvi();
                break;
            case 4:
                pasalintiZuvi();
                break;
            case 5:
                rodytiAtaskaita();
                break;
            case 6:
                issaugotiIFaila();
                cout<<"Issaugota"<<endl;
                break;
                case 7:
                  spausdintiIFaila();
                  break;
            case 0:
                issaugotiIFaila();
                return 0;
            default:
                cout<<"NERA TOKIO PASIRINKIMO!";
        }
}
}
