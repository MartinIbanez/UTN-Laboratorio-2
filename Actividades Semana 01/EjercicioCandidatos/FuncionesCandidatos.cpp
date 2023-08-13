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

void cargarVotos(int *vecCandidatos,int *vecMunicipios){
    int candidato,municipio,votos;

    cout<<"Ingresar Municipio: ";
    cin>>municipio;

    while (municipio>=0){
        cout<<"Ingresar Candidato: ";
        cin>>candidato;
        cout<<"Cantidad de votos: ";
        cin>>votos;

        vecCandidatos[candidato-1]+=votos;////A- El candidato que mas votos ha obtenido. Indicar la cantidad de votos

        vecMunicipios[municipio-1]+=votos;//B- La cantidad de municipios que hayan registrado mas de 5000 votos en total.*/

        cout<<"Ingresar Municipio: ";
        cin>>municipio;
    }

}

void puntoA(int *vecCandidatos,int tam){
    int pos=0,maximo=0;
        for(int x=0;x<tam;x++){
            if(x==0){
                maximo= vecCandidatos[x];
                pos=x;
        }
            if(vecCandidatos[x]>maximo){
                maximo= vecCandidatos[x];
                pos=x;

        }
    }
    cout<<endl;
    cout<<" EL CANDIDATO"<<pos+1<<" OBTUVO LA MAYOR CANTIDAD DE VOTOS"<<endl<<endl;
}


void puntoB(int vecMunicipios[],int tam){
    int mayorVotacion=0;
    for(int x=0;x<tam;x++){
        if(vecMunicipios[x]>5000){
            mayorVotacion++;
        }

    }
    cout<<" TOTAL DE MUNICIPIOS QUE REGISTRARON MAS DE 5000 VOTOS: "<<mayorVotacion<<endl;
}
