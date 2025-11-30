/*
 * Proyecto LiKes
 * Héctor Enrique Gassan Sanchez
 * A017098097
 * 30/10/2025
 */

/*
 * Clase Serie con los metodos genericos de una serie
 * y tiene 2 clases hijas que son series mas especificas:
 * SerieEmision y Serie Plataforma
 *
 */

#ifndef SERIE_H_
#define SERIE_H_

#include "Showrunner.h"
#include <string>
using namespace std;

// Declaracion de clase pelicula
class Serie {
  protected:
    // Declaro variables de instancia
    string nombre;
    string genero;
    Showrunner showrunner;
    string estado;
    int capitulos;
    float calificacion;
    int year;

  public:
    // Constructor Vacio
    Serie()
        : nombre(""), genero(""), showrunner(), estado(""), capitulos(0),
          calificacion(0.0), year(0) {};
    // COnstructor Parametrizado
    Serie(string n, string gn, string ns, int yn, int g, string sa, string e,
          int cp, float ca, int y)
        : nombre(n), genero(gn), showrunner(ns, yn, g, sa), estado(e),
          capitulos(cp), calificacion(ca), year(y) {};
    // Declaro los metodos que tendra el objeto
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

// Getters de los atrubutos

/**
 * getter nombre
 *
 * @param
 * @return string: nombre de la serie
 */
string Serie ::getNombre() { 
  return nombre;
}

/**
 * getter genero
 *
 * @param
 * @return string: genero de la pelicula
 */
string Serie ::getGenero() { 
  return genero;
}

/**
 * getter ShowRunner
 *
 * @param
 * @return objeto tipo ShowR: showrunner de la serie
 */
Showrunner Serie ::getShowR() { 
  return showrunner;
}

/**
 * getter Estado
 *
 * @param
 * @return string: estado de la serie
 */
string Serie ::getEstado() { 
  return estado;
}

/**
 * getter Capitulos
 *
 * @param
 * @return int: numero de capitulos de la serie
 */
int Serie ::getCaps() { 
  return capitulos;
}

/**
 * getter calificacion
 *
 * @param
 * @return float: calificacion personal de la serie
 */
float Serie ::getCalif() { 
  return calificacion;
}

/**
 * getter year
 *
 * @param
 * @return int: año de lanzamiento de la serie
 */
int Serie ::getYear() { 
  return year;
}

// Setters de los atributos

/**
 * setter de nombre
 *
 * Metodo que asigna la variable n
 * a nombre
 */
void Serie ::setNombre(string n) { 
  nombre = n;
}

/**
 * setter de genero
 *
 * Metodo que asigna la variable g
 * a genero
 */
void Serie ::setGenero(string gn) { 
  genero = gn;
}

/**
 * setter de showrunner
 *
 * Metodo que recibe los atributos de la clase
 * Showrunner, reescribe el showrunner vacio con
 * un showrunner contruido con sus parametros
 *
 */
void Serie ::setShowR(string ns, int yn, int g, string sa) {
  showrunner = Showrunner(ns, yn, g, sa);
}

/**
 * setter de estado
 *
 * Metodo que asigna la variable e
 * a estado
 */
void Serie ::setEstado(string e) { 
  estado = e;
}

/**
 * setter de capitulos
 *
 * Metodo que asigna la variable cp
 * a capitulos
 */
void Serie ::setCaps(int cp) { 
  capitulos = cp;
}

/**
 * setter de calificacion
 *
 * Metodo que asigna la variable ca
 * a calificacion
 */
void Serie ::setCalif(float ca) { 
  calificacion = ca;
}

/**
 * setter de year
 *
 * Metodo que asigna la variable y
 * a year
 */
void Serie ::setYear(int y) { year = y; }

// Declaro el objeto Documental que hereda de Pelicula
class SerieEmision : public Serie {
  private:
    // Variables de instancia del objeto
    string canalTV;
    string frecuenciaEmision;

  public:
    // Constructor vacio
    SerieEmision() : Serie(), canalTV(""), frecuenciaEmision("") {};
    // Constructor parametrizado
    SerieEmision(string n, string gn, string ns, int yn, int g, string sa,
                 string e, int cp, float ca, int y, string ctv, string f)
        : Serie(n, gn, ns, yn, g, sa, e, cp, ca, y), canalTV(ctv),
          frecuenciaEmision(f) {};
    // Declaro los metodos que tendra el objeto
    string getCanalTv();
    string getFrecuenciaEm();

    void setCanalTv(string ctv);
    void setFrecuenciaEm(string f);
};

// Getters de los atributos

/**
 * getter canal tv
 *
 * @param
 * @return string: canal donde pasan la serie
 */
string SerieEmision ::getCanalTv() { 
  return canalTV;
}

/**
 * getter frecuencia de emision
 *
 * @param
 * @return string: frecuencia de emision de la serie
 */
string SerieEmision ::getFrecuenciaEm() { 
  return frecuenciaEmision;
}

/**
 * setter de canal tv
 *
 * Metodo que asigna la variable ctv
 * a canalTV
 */
void SerieEmision ::setCanalTv(string ctv) { 
  canalTV = ctv;
}

/**
 * setter de frecuencia de emision
 *
 * Metodo que asigna la variable f
 * a frecuenciaEmision
 */
void SerieEmision ::setFrecuenciaEm(string f) { 
  frecuenciaEmision = f;
}

// Declaro el objeto Documental que hereda de Pelicula
class SeriePlataforma : public Serie {
  private:
    // Variable de instancia del objeto
    string plataformaPrincipal;

  public:
    // Constructor vacio
    SeriePlataforma() : Serie(), plataformaPrincipal("") {};
    // Constructor parametrizado
    SeriePlataforma(string n, string gn, string ns, int yn, int g, string sa,
                    string e, int cp, float ca, int y, string p)
        : Serie(n, gn, ns, yn, g, sa, e, cp, ca, y), plataformaPrincipal(p) {};
    // Declaro los metodos que tendra el objeto
    string getPlataforma();

    void setPlataforma(string p);
};

// Getters de los atributos

/**
 * getter plataforma principal
 *
 * @param
 * @return string: plataforma principal donde esta la serie
 */
string SeriePlataforma ::getPlataforma() { 
  return plataformaPrincipal;
}

// Setters de lo atributos

/**
 * setter de plataforma
 *
 * Metodo que asigna la variable p
 * a plataformaPrincipal
 */
void SeriePlataforma ::setPlataforma(string p) { 
  plataformaPrincipal = p;
}

#endif // SERIE_H_
