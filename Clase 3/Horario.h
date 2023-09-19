#ifndef HORARIO_H_INCLUDED
#define HORARIO_H_INCLUDED
#include <cstring>



class Horario{
private:
    int _hora, _minuto, _segundo;


public:
    int getSegundo();
    int getMinuto();
    int getHora();
    void setSegundo(int segundo);
    void setMinuto(int minuto);
    void setHora(int hora);
    Horario();
    Horario(int segundo,int minuto,int hora);
    std::string toString();

};






#endif // HORARIO_H_INCLUDED
