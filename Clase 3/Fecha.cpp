#include <cstring>
#include<ctime>
#ifndef FECHA_H
#define FECHA_H
#include "Fecha.h"

class Fecha{
private:
    int _dia, _mes, _anio;
    int _diaSemana;

public:
    Fecha(int dia,int mes,int anio){
    if(dia<32&&dia>0 && mes<13&&mes>0){
    _dia=dia;
    _mes=mes;
    _anio=anio;
    _diaSemana= -1;}

    else{
        _dia=1;
        _mes=1;
        _anio=2023;
    }
    }
    Fecha(){
    time_t t=time(NULL);
    struct tm *f=localtime(&t);
    _dia= f->tm_mday;
    _mes= f->tm_mon+1;
    _anio=f->tm_year +1900;
    _diaSemana=f->tm_wday;

    }

    void cargar(){
    std::cout<<"Ingresar Dia: ";
    std::cin>>_dia;
    std::cout<<"Ingresar Mes: ";
    std::cin>>_mes;
    std::cout<<"Ingresar Anio: ";
    std::cin>>_anio;
    }
    void setDia(int dia){_dia=dia;}
    void setMes(int mes){_mes=mes;}
    void setAnio(int anio){_anio=anio;}


    int getDia(){return _dia;}
    int getMes(){return _mes;}
    int getAnio(){return _anio;}

    void mostrar(){
    std::cout<<"Dia: "<<_dia<<std::endl;
    std::cout<<"Mes: "<<_mes<<std::endl;
    std::cout<<"Anio: "<<_anio<<std::endl;

    }

    std::string toString(){
    std::string valorADevolver;
    valorADevolver=std::to_string(_dia) +"/"+std::to_string(_mes)+"/"+std::to_string(_anio);
    return valorADevolver;
    }
    std::string getNombreDia(){
    std::string nombres[7]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
    if(_diaSemana>=0 && _diaSemana<=6){
        return nombres[_diaSemana];
    }
    return " ";
    }

};









#endif // FECHA_H
