#include <iostream>
#include<cstdlib> ///PARA LIMPIAR LA PANTALLA
#include <stdlib.h> ///PARA LA PAUSA.
#include <ctime>     ///LIBRERIA PARA NUMERO ALEATORIO.
#include <string.h> ///LIBRERIA PARA CADENA DE CARACTERES.
#include <cstring>  ///COPIA UNA PALABRA EN OTRA.
#include <conio.h> ///PARA USAR GETCH.
#include <string> ///ELEMENTOS TIPO CHAR
#include<locale.h> ///PARA CARACTERES ESPECIALES.
#include<windows.h> ///PARA EL LOGO DE CARD JITSU Y COLOR.
#include <clocale> ///PARA CARACTERES ESPECIALES.
//using namespace std;
#include "Horario.h"


    int Horario::getSegundo(){
    return _segundo;
    }
    int Horario::getMinuto(){
    return _minuto;
    }
    int Horario::getHora(){
    return _hora;
    }
    void Horario::setSegundo(int segundo){
    _segundo=segundo;
    }
    void Horario::setMinuto(int minuto){
    _minuto=minuto;
    }
    void Horario::setHora(int hora){
    _hora=hora;
    }

    Horario::Horario(){
    time_t t=time(NULL);
    struct tm *f=localtime(&t);
    _segundo= f->tm_sec;
    _minuto= f->tm_min;
    _hora=f->tm_hour;

    }

    Horario::Horario(int segundo,int minuto,int hora){
    setSegundo(segundo);
    setMinuto(minuto);
    setHora(hora);
    }


    std::string Horario::toString(){
    std::string valorADevolver;
    valorADevolver= std::to_string(_hora)+":"+std::to_string(_minuto)+":"+std::to_string(_segundo);
    return valorADevolver;

    }


