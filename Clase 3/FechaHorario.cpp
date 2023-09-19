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
using namespace std;
#include "FechaHorario.h"
#include "Fecha.h"
#include "Horario.h"


    Fecha FechaHorario::getFecha(){
    return _fecha;
    }
    Horario FechaHorario::getHorario(){
    return _horario;
    }
    void FechaHorario::setFecha(Fecha fecha){
        _fecha=fecha;
    }

    void FechaHorario::setHorario(Horario horario){
        _horario=horario;
    }
    void FechaHorario::setFecha(int dia, int mes,int anio){
        _fecha.setDia(dia);
        _fecha.setMes(mes);
        _fecha.setAnio(anio);
    }

    void FechaHorario::setHorario(int segundo,int minuto,int hora){
        _horario=Horario(segundo,minuto,hora);
    }
    FechaHorario::FechaHorario(){

    }

    FechaHorario::FechaHorario(int dia, int mes, int anio, int segundo,int minuto,int hora){
        _fecha.setDia(dia);
        _fecha.setMes(mes);
        _fecha.setAnio(anio);
        _horario.setSegundo(segundo);
        _horario.setMinuto(minuto);
        _horario.setHora(hora);

    }


    FechaHorario::FechaHorario(Fecha fecha, Horario horario){
    _fecha=fecha;
    _horario=horario;

    }

    std::string FechaHorario::toString(){
        std::string valorADevolver;
        valorADevolver= _fecha.toString()+" "+_horario.toString();


        return valorADevolver;
    }
