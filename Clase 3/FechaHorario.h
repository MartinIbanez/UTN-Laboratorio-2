#ifndef FECHAHORARIO_H_INCLUDED
#define FECHAHORARIO_H_INCLUDED
#include "Fecha.h"
#include "Horario.h"

class FechaHorario{
public:
    Fecha getFecha();
    Horario getHorario();
    void setFecha(Fecha fecha);
    void setHorario(Horario horario);
    void setFecha(int dia, int mes,int anio);
    void setHorario(int segundo,int minuto,int hora);
    FechaHorario();
    FechaHorario(int dia, int mes, int anio, int segundo,int minuto,int hora);
    FechaHorario(Fecha fecha, Horario horario);
    std::string toString();
private:
    Fecha _fecha;
    Horario _horario;



};



#endif // FECHAHORARIO_H_INCLUDED
