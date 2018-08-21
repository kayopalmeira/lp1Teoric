#include "Televisao.h"

Televisao::Televisao(int c, int v)
{
    canal = c;
    volume = v;
}

int Televisao::getCanal(){
    return canal;
}
int Televisao::getVolume(){
    return volume;
}
void Televisao::setCanal(int c){
    canal = c;
}
void Televisao::setVolume(int v){
    volume = v;
}
void Televisao::AumentarCanal(){
    canal++;
    if(canal>999)canal = 1;
}
void Televisao::DiminuirCanal(){
    canal--;
    if(canal<1)canal = 999;
}
void Televisao::AumentarVolume(){
    volume++;
    if(volume>100)volume = 100;
}
void Televisao::DiminuirVolume(){
    volume--;
    if(volume<0)volume = 0;
}
