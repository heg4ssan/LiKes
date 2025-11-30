/*
 * Proyecto LiKes
 * Héctor Enrique Gassan Sánchez
 * A017098097
 * 30/11/2025
 */

/*
 * Clase Pelicula con los metodos genericos de una pelicula
 * y tiene 3 clases hijas que son peliculas mas especificas:
 * Documental, PeliculaAnimada y PeliculaFiccion
 *
 */

#ifndef PELICULA_H_
#define PELICULA_H_

#include "Director.h"
#include <iostream>
#include <string>

using namespace std;

// Declaracion de clase pelicula
class Pelicula {
    // Declaro variables de instancia
  protected:
    string nombre;
    string genero;
    Director director;
    float duracion;
    float calificacion;
    int year;

  public:
    // Constructor Vacio
    Pelicula()
        : nombre(""), genero(""), director(), duracion(0.0), calificacion(0.0),
          year(0) {};
    // Constructor Parametrizado
    Pelicula(string n, string g, string nd, int yn, string p, string ob,
             float du, float ca, int y)
        : nombre(n), genero(g), director(nd, yn, p, ob), duracion(du),
          calificacion(ca), year(y) {};
    // Declaro los metodos que tendra el objeto
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

// Getters de los atributos

/**
 * getter nombre
 *
 * @param
 * @return string: nombre de la pelicula
 */
string Pelicula ::getNombre() { 
  return nombre;
}

/**
 * getter genero
 *
 * @param
 * @return string: genero de la pelicula
 */
string Pelicula ::getGenero() { 
  return genero;
}

/**
 * getter Director
 *
 * @param
 * @return objeto tipo Director: director de la pelicula
 */
Director Pelicula ::getDirec() { 
  return director;
}

/**
 * getter Duracion
 *
 * @param
 * @return float: duracion de la pelicula
 */
float Pelicula ::getDura() { 
  return duracion;
}

/**
 * getter calificacion
 *
 * @param
 * @return float: calificacion personal de la pelicula
 */
float Pelicula ::getCalif() { 
  return calificacion;
}

/**
 * getter year
 *
 * @param
 * @return int: año de estreno de la pelicula
 */
int Pelicula ::getYear() { 
  return year;
}

// Setters de los atributos

/**
 * setter de nombre
 *
 * Metodo que asigna la variable n
 * a nombre
 */
void Pelicula ::setNombre(string n) { 
  nombre = n;
}

/**
 * setter de genero
 *
 * Metodo que asigna la variable g
 * a genero
 */
void Pelicula ::setGenero(string g) { 
  genero = g;
}

/**
 * setter de director
 *
 * Metodo que recibe los atributos de la clase
 * Director, reescribe el director vacio con
 * un director contruido con sus parametros
 *
 */
void Pelicula ::setDirec(string nd, int y, string p, string o) {
  director = Director(nd, y, p, o);
}

/**
 * setter de duracion
 *
 * Metodo que asigna la variable du
 * a duracion
 */
void Pelicula ::setDura(float du) { 
  duracion = du;
}

/**
 * setter de calificacion
 *
 * Metodo que asigna la variable ca
 * a calificacion
 */
void Pelicula ::setCalif(float ca) { 
  calificacion = ca;
}

/**
 * setter de year
 *
 * Metodo que asigna la variable y
 * a year
 */
void Pelicula ::setYear(int y) { 
  year = y;
}

// Declaro el objeto Documental que hereda de Pelicula
class Documental : public Pelicula {
  private:
    // Variables de instancia del objeto
    string tematica;
    string narrador;

  public:
    // Constructor vacio
    Documental() : Pelicula(), tematica(""), narrador("") {};
    // Constructor parametrizado
    Documental(string n, string g, string nd, int yn, string p, string ob,
               float du, float ca, int y, string t, string na)
        : Pelicula(n, g, nd, yn, p, ob, du, ca, y), tematica(t),
          narrador(na) {};
    // Declaro los metodos que tendra el objeto
    string getTematica();
    string getNarrador();

    void setTematica(string t);
    void setNarrador(string n);
};

/**
 * getter tematica
 *
 * @param
 * @return string: tematica del documental
 */
string Documental ::getTematica() { 
  return tematica;
}

/**
 * getter narrador
 *
 * @param
 * @return string: narrador del documental
 */
string Documental ::getNarrador() { 
  return narrador;
}

/**
 * setter de tematica
 *
 * Metodo que asigna la variable t
 * a tematica
 */
void Documental ::setTematica(string t) { 
  tematica = t;
}

/**
 * setter de narrador
 *
 * Metodo que asigna la variable n
 * a narrador
 */
void Documental ::setNarrador(string n) { 
  narrador = n;
}

// Declaro el objeto PeliculaAnimada que hereda de Pelicula
class PeliculaAnimada : public Pelicula {
  private:
    // Variables de instancia del objeto
    string estudioAnimacion;
    string tipoAnimacion;

  public:
    // Constructor vacio
    PeliculaAnimada() : Pelicula(), estudioAnimacion(""), tipoAnimacion("") {};
    // Constructor parametrizado
    PeliculaAnimada(string n, string g, string nd, int yn, string p, string ob,
                    float du, float ca, int y, string ea, string ta)
        : Pelicula(n, g, nd, yn, p, ob, du, ca, y), estudioAnimacion(ea),
          tipoAnimacion(ta) {};
    // Declaro los metodos que tendra el objeto
    string getEstudio();
    string getTipo();

    void setEstudio(string ea);
    void setTipo(string ta);
};

/**
 * getter estudio
 *
 * @param
 * @return string: estudio de animacion
 */
string PeliculaAnimada ::getEstudio() { 
  return estudioAnimacion;
}

/**
 * getter tipo
 *
 * @param
 * @return string: tipo de animacion
 */
string PeliculaAnimada ::getTipo() { 
  return tipoAnimacion;
}

/**
 * setter de estudio
 *
 * Metodo que asigna la variable ea
 * a estudioAnimacion
 */
void PeliculaAnimada ::setEstudio(string ea) { 
  estudioAnimacion = ea;
}

/**
 * setter de tipo
 *
 * Metodo que asigna la variable ta
 * a tipoAnimacion
 */
void PeliculaAnimada ::setTipo(string ta) { 
  tipoAnimacion = ta;
}

// Declaro el objeto PeliculaFiccion que hereda de Pelicula
class PeliculaFiccion : public Pelicula {
  private:
    // Declaro variables de instancia
    string actorPrincipal;
    string directorFotografia;

  public:
    // Constructor vacio
    PeliculaFiccion()
        : Pelicula(), actorPrincipal(""), directorFotografia("") {};
    // Conatructor parametrizado
    PeliculaFiccion(string n, string g, string nd, int yn, string p, string ob,
                    float du, float ca, int y, string ap, string df)
        : Pelicula(n, g, nd, yn, p, ob, du, ca, y), actorPrincipal(ap),
          directorFotografia(df) {};
    // Declaro los metodos que tendra el objeto
    string getActor();
    string getDirFotografia();

    void setActor(string ap);
    void setDirFotografia(string df);
};

/**
 * getter actor
 *
 * @param
 * @return string: actor principal de la pelicula
 */
string PeliculaFiccion ::getActor() { 
  return actorPrincipal;
}

/**
 * getter director fotografia
 *
 * @param
 * @return string: director de fotografia de la pelicula
 */
string PeliculaFiccion ::getDirFotografia() { 
  return directorFotografia;
}

/**
 * setter de actor
 *
 * Metodo que asigna la variable ap
 * a actorPrincipal
 */
void PeliculaFiccion ::setActor(string ap) { 
  actorPrincipal = ap;
}

/**
 * setter de director fotogradia
 *
 * Metodo que asigna la variable df
 * a directorFotografia
 */
void PeliculaFiccion ::setDirFotografia(string df) { 
  directorFotografia = df;
}

#endif // PELICULA_H_
