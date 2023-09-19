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
#include "Reunion.h"


    FechaHorario Reunion::getFechaHorario(){
    return _fechaHorario;
    }

    std::string Reunion::getLugar(){
    return _lugar;
    }
    std::string Reunion::getTema(){
    return _tema;
    }

    int Reunion::getDuracion(){
    return _duracion;
    }
    int Reunion::cantidadIntegrantes(){
        return _cantidadIntegrantes;

    }
    Persona Reunion::getIntegrante(int indice){
    /*if(indice>=0 && indice<= _cantidadIntegrantes-1){
        return _integrantes[indice];
    }
    else{
        return _integrantes[0];
    } */
    return _integrantes[indice];
    }

    std::string Reunion::toString(){

    std::string aux=_fechaHorario.toString();
    aux+=", " +getLugar();
    aux+=", " +getTema();
    aux+=", " +getDuracion();

    return aux;

    }


    void Reunion::setFechaHorario(FechaHorario fechaHorario){
        _fechaHorario=fechaHorario;

    }
    void Reunion::setLugar(std::string lugar){
    _lugar=lugar;
    }
    void Reunion::setTema(std::string tema){
    _tema=tema;
    }
    void Reunion::setDuracion(int duracion){
    _duracion=duracion;
    }
    void Reunion::setIntegrante(Persona integrante, int indice){
    _integrantes[indice]=integrante;
    }


    Reunion:: Reunion (int cantidadIntegrantes){
        if(cantidadIntegrantes>0){
            _integrantes=new Persona[cantidadIntegrantes];
            if(_integrantes==nullptr){
                _cantidadIntegrantes=0;
            }
            else{
                _cantidadIntegrantes=cantidadIntegrantes;
            }
        }
        _duracion=0; //valores por defecto
        _tema=" ";
        _lugar=" ";
    }
    Reunion::~Reunion(){
    if(_cantidadIntegrantes>0){
    delete []_integrantes;
    }
    }
