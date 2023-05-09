// strstr -> шукає в рядку місцезнаходження певного підрядка, та повертає показчик 
//           на нього. Знайти слово, чи сполучення символів у рядку
#include <iostream>
using namespace std;

// Задача 2. Знайти в тексті що написав користувач всі слова, що починаються з 
// великої букви 'S'.123

int main()
{
    char* str = new char[300];
    fgets(str, 300, stdin);
    //Susan Sells Seashells by the Seashore. Sam Snead's swing is still studied by golfers today. The Sun Sets Slowly in the Summer Sky. The Statue of Liberty Stands Strong in New York City. Sally's Silly Sister Sings Songs on Saturdays.
    //SnSuRe hoW to. ProceED wiTH thIS dOCumeNT.The reSIgnation leTTER wAS submiTtEd LAsT weEk.The eXPLOsion CREatED a HUGe MESS in tHE lab.He wAS aCCUSED of SeLLinG coUNterfEIT GoODs.The aTTORneY ARGUED thAT the evidENCE wAS inaDmisSIBLE.
    for (char* pos = strstr(str, " S"); pos - str < strlen(str); pos++)
    {
        if (pos - str > 0)
        {
            for (char* pos2 = pos; *pos2 != ' ' && *pos2 != '.' && *pos2 != '\0'; pos2++)
            {
                cout << *pos2;
            }
            pos = strstr(pos, " S");
            cout << endl;
        }
    }
}