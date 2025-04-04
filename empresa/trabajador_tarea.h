#ifndef ESTUDIANTE_TAREA_H
#define ESTUDIANTE_TAREA_H

#include "persona_tarea.h"
#include <vector>

using namespace std;

struct h_extra
{
    int dia;
    float canthoras;
};

class Trabajador : public Persona
{
    float _salario;
    float _totalex;
    float _pmensual;
    vector<h_extra> _horextra;
    Trabajador();

public:
    Trabajador(const string &name, const string &ape, const int &docid, const float &salario);

    ~Trabajador();

    void horasextra(const int &dia, const float &horas);

    float gethorasex(const int &dia);

    float pagoHextra();

    float pago_mensual();

    friend ostream &operator<<(ostream &os, Trabajador &t);
};

#endif // ESTUDIANTE_TAREA_H