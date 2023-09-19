#ifndef REUNION_H_INCLUDED
#define REUNION_H_INCLUDED
#include "FechaHorario.h"
#include "Persona.h"

class Reunion{
public:
    FechaHorario getFechaHorario();
    std::string getLugar();
    std::string getTema();
    int getDuracion();
    int cantidadIntegrantes();
    Persona getIntegrante(int indice);
    std::string toString();


    void setFechaHorario(FechaHorario fechaHorario);
    void setLugar(std::string lugar);
    void setTema(std::string tema);
    void setDuracion(int duracion);
    void setIntegrante(Persona integrante, int indice);


    Reunion(int _cantidadIntegrantes);
    ~Reunion();
private:
    FechaHorario _fechaHorario;
    std:: string _lugar, _tema;
    int _duracion, _cantidadIntegrantes;
    Persona *_integrantes;





};



#endif // REUNION_H_INCLUDED
