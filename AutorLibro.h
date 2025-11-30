/*
 * Proyecto LiKes
 * Héctor Enrique Gassan Sanchez
 * A017098097
 * 30/11/2025
 */

/*
 * Clase AutorLibro con sus metodos
 */

#ifndef AUTORLIBRO_H_
#define AUTORLIBRO_H_

#include <string>
using namespace std;

// Declaracion de clase Autorlibro
class AutorLibro {
  private:
    // Declaro variables de instancia
    string nombre;
    int yearNacimiento;
    int librosPublicados;
    string biografia;

  public:
    // Constructor vacio
    AutorLibro()
        : nombre(""), yearNacimiento(0), librosPublicados(0), biografia("") {};
    // Constructor parametrizado
    AutorLibro(string n, int yn, int lb, string bi)
        : nombre(n), yearNacimiento(yn), librosPublicados(lb), biografia(bi) {};
    // Declaro los metodos que tendra el objeto
    string getNombre();
    int getYearNacimiento();
    int getLibros();
    string getBiografia();

    void setNombre(string n);
    void setYearNacimiento(int yn);
    void setLibros(int lb);
    void setBiografia(string bi);
};

// Getters de los atributos

/**
 * getter nombre
 *
 * @param
 * @return string: nombre del autor
 */
string AutorLibro ::getNombre() { 
  return nombre;
}

/**
 * getter year nacimiento
 *
 * @param
 * @return int: año de nacimiento del autor
 */
int AutorLibro ::getYearNacimiento() { 
  return yearNacimiento;
}

/**
 * getter libros publicados
 *
 * @param
 * @return int: numero de libros publicados
 */
int AutorLibro ::getLibros() { 
  return librosPublicados;
}

/**
 * getter biografia
 *
 * @param
 * @return string: biografia del autor
 */
string AutorLibro ::getBiografia() { 
  return biografia;
}

// Setters de los atributos

/**
 * setter de nombre
 *
 * Metodo que asigna la variable n
 * a nombre
 */
void AutorLibro ::setNombre(string n) { 
  nombre = n;
}

/**
 * setter de year nacimiento
 *
 * Metodo que asigna la variable yn
 * a yearNacimiento
 */
void AutorLibro ::setYearNacimiento(int yn) { 
  yearNacimiento = yn;
}

/**
 * setter de libros publicados
 *
 * Metodo que asigna la variable lb
 * a librosPublicados
 */
void AutorLibro ::setLibros(int lb) { 
  librosPublicados = lb;
}

/**
 * setter de biografia
 *
 * Metodo que asigna la variable bi
 * a biografia
 */
void AutorLibro ::setBiografia(string bi) { 
  biografia = bi;
}

#endif // AUTORLIBRO_H_
