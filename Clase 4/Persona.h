#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Persona{
public:
    std:: string getApellidos();
    std:: string getNombres();
    std:: string getApellidosyNombres();

    void setNombres(std::string nombres);
    void setApellidos(std::string apellidos);
    //void setApellidoyNombre(std::string apellidoynombre);

    Persona();
    Persona(std::string apellidos, std::string nombres);


private:
    std:: string _apellidos, _nombres;



};



#endif // PERSONA_H_INCLUDED
