#include <iostream>
#include "Relogio.h"

using namespace std;

int main()
{
    Relogio horario(23, 59, 57);

    cout << horario.getHora() << ";" << horario.getMinuto()<< ";" << horario.getSegundo() << endl;

    horario.avancarHorario();
    horario.avancarHorario();

    cout<< "alteracoes" << endl;

    cout << horario.getHora() << ";" << horario.getMinuto()<< ";" << horario.getSegundo() << endl;

    horario.avancarHorario();
    horario.avancarHorario();
    horario.avancarHorario();
    horario.avancarHorario();

    cout << horario.getHora() << ";" << horario.getMinuto()<< ";" << horario.getSegundo() << endl;


    return 0;
}
