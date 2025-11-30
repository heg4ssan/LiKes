/*
 * Proyecto LiKes
 * Héctor Enrique Gassan Sanchez
 * A017098097
 * 30/11/2025
 */

/*
 * Clase Libro con sus metodos
 */

#ifndef LIBRO_H_
#define LIBRO_H_

#include "AutorLibro.h"
#include <string>
using namespace std;

// Declaracion de clase Libro
class Libro {
  private:
    // Declaro variables de instancia
    string titulo;
    string genero;
    AutorLibro autor;
    string editorial;
    int paginas;
    float calificacion;
    int year;

  public:
    // Constructor Vacio
    Libro()
        : titulo(""), genero(""), autor(), editorial(""), paginas(0),
          calificacion(0.0), year(0) {};
    // Constructor Parametrizado
    Libro(string t, string g, string n, int yn, int lb, string bi, string e,
          int p, float c, int y)
        : titulo(t), genero(g), autor(n, yn, lb, bi), editorial(e), paginas(p),
          calificacion(c), year(y) {};
    // Declaro los metodos que tendra el objeto
    string getTitulo();
    string getGenero();
    AutorLibro getAutor();
    string getEditorial();
    int getPaginas();
    float getCalif();
    int getYear();

    void setTitulo(string t);
    void setGenero(string g);
    void setAutor(string n, int yn, int lb, string bi);
    void setEditorial(string e);
    void setPaginas(int p);
    void setCalificacion(float c);
    void setYear(int y);
};

// Getters de lo atrubutos

/**
 * getter titulo
 *
 * @param
 * @return string: titulo del libro
 */
string Libro ::getTitulo() { 
  return titulo;
}

/**
 * getter genero
 *
 * @param
 * @return string: genero del libro
 */
string Libro ::getGenero() { 
  return genero;
}

/**
 * getter nombre
 *
 * @param
 * @return objeto tipo AutorLibro: autor del libro
 */
AutorLibro Libro ::getAutor() { 
  return autor;
}

/**
 * getter editorial
 *
 * @param
 * @return string: editorial del libro
 */
string Libro ::getEditorial() { 
  return editorial;
}

/**
 * getter paginas
 *
 * @param
 * @return int: numero de paginas del libro
 */
int Libro ::getPaginas() { 
  return paginas;
}

/**
 * getter calificacion
 *
 * @param
 * @return float: calificacion personal del libro
 */
float Libro ::getCalif() { 
  return calificacion;
}

/**
 * getter year
 *
 * @param
 * @return int: año de estreno del libro
 */
int Libro ::getYear() { 
  return year;
}

// Setters de los atrubutos

/**
 * setter de titulo
 *
 * Metodo que asigna la variable t
 * a titulo
 */
void Libro ::setTitulo(string t) { 
  titulo = t;
}

/**
 * setter de genero
 *
 * Metodo que asigna la variable g
 * a genero
 */
void Libro ::setGenero(string g) { 
  genero = g;
}

/**
 * setter de autor
 *
 * Metodo que recibe los atributos de la clase
 * AutorLibro, reescribe el autor vacio con
 * un autor contruido con sus parametros
 *
 */
void Libro ::setAutor(string n, int yn, int lb, string bi) {
  autor = AutorLibro(n, yn, lb, bi);
}

/**
 * setter de editorial
 *
 * Metodo que asigna la variable e
 * a editorial
 */
void Libro ::setEditorial(string e) { 
  editorial = e;
}

/**
 * setter de paginas
 *
 * Metodo que asigna la variable p
 * a paginas
 */
void Libro ::setPaginas(int p) { 
  paginas = p;
}

/**
 * setter de calificacion
 *
 * Metodo que asigna la variable c
 * a calificacion
 */
void Libro ::setCalificacion(float c) { 
  calificacion = c;
}

/**
 * setter de year
 *
 * Metodo que asigna la variable y
 * a year
 */
void Libro ::setYear(int y) { 
  year = y;
}

#endif // LIBRO_H_
