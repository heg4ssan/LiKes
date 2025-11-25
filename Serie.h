#include <string>
#include "Showrunner.h"
using namespace std;

class Serie {
  protected:
    string nombre;
    string genero;
    Showrunner showrunner;
    string estado;
    int capitulos;
    float calificacion;
    int year;
  public:
    Serie(): nombre(""), genero(""), showrunner(), estado(""), capitulos(0), calificacion(0.0), year(0){};
    Serie(string n, string gn, string ns, int yn, int g, string sa,  string e, int cp, float ca, int y):
        nombre(n), genero(gn), showrunner(ns, yn, g, sa), estado(e), capitulos(cp), calificacion(ca), year(y){};
    string getNombre();
    string getGenero();
    Showrunner getShowR();
    string getEstado();
    int getCaps();
    float getCalif();
    int getYear();

    void setNombre(string n);
    void setGenero(string gn);
    void setShowR(string ns, int yn, int g, string sa);
    void setEstado(string e);
    void setCaps(int cp);
    void setCalif(float ca);
    void setYear(int y);

};

string Serie :: getNombre(){
    return nombre;
}

string Serie :: getGenero(){
    return genero;
}

Showrunner Serie :: getShowR(){
    return showrunner;
}

string Serie :: getEstado(){
    return estado;
}

int Serie :: getCaps(){
    return capitulos;
}

float Serie :: getCalif(){
    return calificacion;
}

int Serie :: getYear(){
    return year;
}


void Serie :: setNombre(string n){
    nombre = n;
}

void Serie :: setGenero(string gn){
    genero = gn;
}

void Serie :: setShowR(string ns, int yn, int g, string sa){
    showrunner = Showrunner(ns, yn, g, sa);
}

void Serie :: setEstado(string e){
    estado = e;
}

void Serie :: setCaps(int cp){
    capitulos = cp;
}

void Serie :: setCalif(float ca){
    calificacion = ca;
}

void Serie :: setYear(int y){
    year = y;
}



class SerieEmision: public Serie{
    private:
    string canalTV;
    string frecuenciaEmision;
    public:
    SerieEmision(): Serie(), canalTV(""), frecuenciaEmision(""){};
    SerieEmision(string n, string gn, string ns, int yn, int g, string sa,  string e, int cp, float ca, int y, string ctv, string f) :
        Serie(n, gn, ns, yn, g, sa, e, cp, ca, y), canalTV(ctv), frecuenciaEmision(f){};
    string getCanalTv();
    string getFrecuenciaEm();

    void setCanalTv(string ctv);
    void setFrecuenciaEm(string f);
};

string SerieEmision :: getCanalTv(){
    return canalTV;
}

string SerieEmision :: getFrecuenciaEm(){
    return frecuenciaEmision;
}

void SerieEmision :: setCanalTv(string ctv){
    canalTV = ctv;
}

void SerieEmision :: setFrecuenciaEm(string f){
    frecuenciaEmision = f;
}



class SeriePlataforma: public Serie{
    private:
    string plataformaPrincipal;
    public:
    SeriePlataforma(): Serie(), plataformaPrincipal(""){};
    SeriePlataforma(string n, string gn, string ns, int yn, int g, string sa,  string e, int cp, float ca, int y, string p) :
        Serie(n, gn, ns, yn, g, sa, e, cp, ca, y), plataformaPrincipal(p){};
    string getPlataforma();

    void setPlataforma(string p);
};

string SeriePlataforma :: getPlataforma(){
    return plataformaPrincipal;
}

void SeriePlataforma :: setPlataforma(string p){
    plataformaPrincipal = p;
}
