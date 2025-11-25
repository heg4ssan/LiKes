#include <string>
#include <iostream>
#include "Director.h"

using namespace std;

class Pelicula {
  protected:
    string nombre;
    string genero;
    Director director;
    float duracion;
    float calificacion;
    int year;
  public:
    Pelicula(): nombre(""), genero(""), director(), duracion(0.0), calificacion(0.0), year(0){};
    Pelicula(string n, string g, string nd, int yn, string p, string ob, float du, float ca, int y):
        nombre(n), genero(g), director(nd, yn ,p ,ob), duracion(du), calificacion(ca), year(y){};
    string getNombre();
    string getGenero();
    Director getDirec();
    float getDura();
    float getCalif();
    int getYear();

    void setNombre(string n);
    void setGenero(string g);
    void setDirec(string nd, int y, string p, string o);
    void setDura(float du);
    void setCalif(float ca);
    void setYear(int y);

};

string Pelicula :: getNombre(){
    return nombre;
}

string Pelicula :: getGenero(){
    return genero;
}

Director Pelicula :: getDirec(){
    return director;
}

float Pelicula :: getDura(){
    return duracion;
}

float Pelicula :: getCalif(){
    return calificacion;
}

int Pelicula :: getYear(){
    return year;
}


void Pelicula :: setNombre(string n){
    nombre = n;
}

void Pelicula :: setGenero(string g){
    genero = g;
}

void Pelicula :: setDirec(string nd, int y, string p, string o){
    director = Director(nd, y, p, o);
}

void Pelicula :: setDura(float du){
    duracion = du;
}

void Pelicula :: setCalif(float ca){
    calificacion = ca;
}

void Pelicula :: setYear(int y){
    year = y;
}



class Documental: public Pelicula{
    private:
    string tematica;
    string narrador;

    public:
    Documental() : Pelicula(), tematica(""), narrador(""){};
    Documental(string n, string g, string nd, int yn, string p, string ob, float du, float ca, int y, string t, string na) :
        Pelicula(n, g, nd, yn, p, ob, du, ca, y), tematica(t), narrador(na){};
    string getTematica();
    string getNarrador();

    void setTematica(string t);
    void setNarrador(string n);

};

string Documental :: getTematica(){
    return tematica;
}

string Documental :: getNarrador(){
    return narrador;
}

void Documental :: setTematica(string t){
    tematica = t;
}

void Documental :: setNarrador(string n){
    narrador = n;
}



class PeliculaAnimada: public Pelicula{
    private:
    string estudioAnimacion;
    string tipoAnimacion;

    public:
    PeliculaAnimada() : Pelicula(), estudioAnimacion(""), tipoAnimacion(""){};
    PeliculaAnimada(string n, string g, string nd, int yn, string p, string ob, float du, float ca, int y, string ea, string ta) :
        Pelicula(n, g, nd, yn, p, ob, du, ca, y), estudioAnimacion(ea), tipoAnimacion(ta){};
    string getEstudio();
    string getTipo();

    void setEstudio(string ea);
    void setTipo(string ta);
};

string PeliculaAnimada :: getEstudio(){
    return estudioAnimacion;
}

string PeliculaAnimada :: getTipo(){
    return tipoAnimacion;
}

void PeliculaAnimada :: setEstudio(string ea){
    estudioAnimacion = ea;
}

void PeliculaAnimada :: setTipo(string ta){
    tipoAnimacion = ta;
}



class PeliculaFiccion: public Pelicula{
    private:
    string actorPrincipal;
    string directorFotografia;

    public:
    PeliculaFiccion() : Pelicula(), actorPrincipal(""), directorFotografia(""){};
    PeliculaFiccion(string n, string g, string nd, int yn, string p, string ob, float du, float ca, int y, string ap, string df) :
        Pelicula(n, g, nd, yn, p, ob, du, ca, y), actorPrincipal(ap), directorFotografia(df){};
    string getActor();
    string getDirFotografia();

    void setActor(string ap);
    void setDirFotografia(string df);
};

string PeliculaFiccion :: getActor(){
    return actorPrincipal;
}

string PeliculaFiccion :: getDirFotografia(){
    return directorFotografia;
}

void PeliculaFiccion :: setActor(string ap){
    actorPrincipal = ap;
}

void PeliculaFiccion :: setDirFotografia(string df){
    directorFotografia = df;
}
