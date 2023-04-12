#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("¬вед≥ть оп≥р R0:     ќм\b\b\b\b\b\b\b");
    int R0;
    cin >> R0;
    printf("¬вед≥ть оп≥р R1:     ќм\b\b\b\b\b\b\b");
    int R1;
    cin >> R1;
    printf("¬вед≥ть оп≥р R2:     ќм\b\b\b\b\b\b\b");
    int R2;
    cin >> R2;

    printf("              1\n");
    printf("R = ---------------------\n");
    printf("      1       1       1  \n");
    printf("    ----- + ----- + -----\n");
    printf("    %5d   %5d   %5d\n\n", R0, R1, R2);
    float R = 1.0f / (1.0f / R0 + 1.0f / R1 + 1.0f / R2);
    printf("«агальний оп≥р R: %.2f ќм\n", R);
    
}