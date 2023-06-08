#include <iostream>
#include <fstream> // бібліотека побітових файлових потоків
using namespace std;

const char* path = "Z:/PKO/C++/p21/ConsoleApplication34/FILE.bin";

ofstream out; // клас що дозволяє писать в файл (out file stream)
ifstream in;  // клас що дозволяє читати з файлу (in file stream)
int main()
{
    int i = 10;

    out.open(path, ofstream::out | ios::binary);
    out << i;
    out.close();

    int n;
    in.open(path, ifstream::in | ios::binary);
    in >> n;
    in.close();

    cout << n;
}