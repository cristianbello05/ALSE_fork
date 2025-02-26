#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Error: Debe ingresar al menos un argumento" << endl;
        return 1;
    }
    cout << "He recibido " << argc << " argumentos" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "Argumento " << (i + 1) << " : " << argv[i] << endl;
    }
    return 0;
}