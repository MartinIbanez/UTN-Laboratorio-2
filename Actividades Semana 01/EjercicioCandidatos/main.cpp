/*A un grupo de personas candidatas a presidente se les asigno un numero correlativo comenzando desde el 1. En total son siete candidatos.
Se desea un programa que compute los votos totales que obtuvieron los candidatos por municipio. Por cada municipio y candidato se registro:

-Codigo de municipio (1 a 280)
-Codigo de candidato (1 a 7)
-Cantidad de votos

No necesariamente existen votos para todos los municipios ni para todos los candidatos. La informacion no esta agrupada ni ordenada. Se indica el fin de la carga de datos con un
codigo de municipio negativo. Calcular:
- El candidato que mas votos ha obtenido. Indicar la cantidad de votos
- La cantidad de municipios que hayan registrado mas de 5000 votos en total.*/
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
#include "FuncionesCandidatos.h"
using namespace std;


int main(){

    int vecCandidatos[7]={0};
    int vecMunicipios[280]={0};


    cargarVotos(vecCandidatos,vecMunicipios);
    puntoA(vecCandidatos,7);
    puntoB(vecMunicipios,280);



getch();
return 0;
}

