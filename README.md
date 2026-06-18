# Pavadinimas: Akvariumo žuvų valdymo sistema
## Projekto tikslas :
Sukurti C++ programą, skirtą akvariumo žuvų duomenų saugojimui, peržiūrai ir valdymui.
## Pasirinktos temos aprašymas :
Programa skirta akvariumo žuvų informacijos valdymui. Vartotojas gali pridėti naujas žuvis, peržiūrėti esamas, redaguoti jų informaciją ir pašalinti įrašus.
Kiekviena žuvis turi po:
ID, vardą, rūšį, amžių, ilgį, vandens temperatūrą, kiekį.
## Programos funkcionalumo aprašymas :
Programa leidžia:
- Nuskaityti duomenis iš tekstinio failo.
- Peržiūrėti visas žuvis.
- Ieškoti žuvies pagal ID.
- Pridėti naują žuvį.
- Redaguoti esamą žuvį.
- Pašalinti žuvį.
- Generuoti ataskaitą.
- Išsaugoti duomenis į failą.

## Naudojamų failų aprašymas :
### main.cpp
Pagrindinis programos kodas.
### zuvys.txt
Tekstinis failas, kuriame saugomi visi žuvų duomenys.
### README.md
Projekto aprašymas.

## Programos paleidimo instrukcija :
1. Atidaryti projektą.
2. Įsitikinti, kad failas `zuvys.txt` yra tame pačiame aplanke kaip `main.cpp`.
3. Sukompiliuoti programą.
4. Paleisti programą.
5. Naudotis meniu.

## Papildomų funkcijų aprašymas :
Programa generuoja ataskaitą, kurioje pateikiama:
- Daugiausiai turimų žuvų.
- Mažiausiai turimų žuvų.
