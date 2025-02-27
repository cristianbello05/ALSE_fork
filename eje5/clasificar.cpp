#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <strings.h>

using namespace std;

int main(int argc, char *argv[])
{
    int cont = 0;
    if (argc < 2)
    {
        cout << "Error: Debe ingresar al menos un argumento" << endl;
        return 1;
    }
    else
    {
        cout << "He recibido " << argc << " argumentos" << endl;
        for (int i = 0; i < argc; i++)
        {
            cout << "Argumento " << (i + 1) << " : " << argv[i] << endl;
        }
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; j < strlen(argv[i]); j++)
            {
                if (argv[i][j] >= '0' && argv[i][j] <= '9')
                    cont++;
                else if (argv[i][j] == '.')
                    cont++;
            }
            if (cont == strlen(argv[i]))
            {
                cout << "El argumento " << i + 1 << " es un número" << endl;
            }
            else
            {
                cout << "El argumento " << i + 1 << " es una cadena de texto" << endl;
            }
            cont = 0;
        }
    }
    return 0;
}