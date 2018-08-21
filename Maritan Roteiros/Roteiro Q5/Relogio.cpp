#include "Relogio.h"

Relogio::Relogio(int h, int m, int s)
{
    hora = h;
    minuto = m;
    segundo = s;
}
int Relogio::getHora(){
    return hora;
}
int Relogio::getMinuto(){
    return minuto;
}
int Relogio::getSegundo(){
    return segundo;
}
void Relogio::setHorario(int h, int m, int s){
    hora = h;
    minuto = m;
    segundo = s;
}
void Relogio::avancarHorario(){
    segundo++;
    if(segundo==60){
        segundo=0;
        minuto++;
    }

    if(minuto==60){
        minuto=0;
        hora++;
    }

    if(hora==24){
        hora=0;
    }

}
