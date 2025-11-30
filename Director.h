/*
 * Proyecto LiKes
 * Héctor Enrique Gassan Sanchez
 * A017098097
 * 30/10/2025
 */

/*
 * Clase Director con sus metodos
 */

#ifndef DIRECTOR_H_
#define DIRECTOR_H_

#include <string>
using namespace std;

// Declaracion de clase Director
class Director {
  private:
    // Declaro variables de instancia
    string nombre;
    int yearNacimiento;
    string premios;
    string otrasObras;

  public:
    // Constructor vacio
    Director() : nombre(""), yearNacimiento(0), premios(""), otrasObras("") {};
    // Constructor parametrizado
    Director(string n, int yn, string p, string ob)
        : nombre(n), yearNacimiento(yn), premios(p), otrasObras(ob) {};
    // Declaro los metodos que tendra el objeto
    string getNombre();
    int getYearNacimiento();
    string getPremios();
    string getObras();

    void setNombre(string n);
    void setYearNacimiento(int yn);
    void setPremios(string p);
    void setObras(string ob);
};

// Getters de los atributos

/**
 * getter nombre
 *
 * @param
 * @return string: nombre del director
 */
string Director ::getNombre() { 
  return nombre;
}

/**
 * getter year nacimiento
 *
 * @param
 * @return int: año de nacimiento del director
 */
int Director ::getYearNacimiento() { 
  return yearNacimiento;
}

/**
 * getter premios
 *
 * @param
 * @return string: premios anteriores del director
 */
string Director ::getPremios() { 
  return premios;
}

/**
 * getter obras
 *
 * @param
 * @return string: peliculas anteriores del director
 */
string Director ::getObras() { 
  return otrasObras;
}

// Setters de los atributos

/**
 * setter de nombre
 *
 * Metodo que asigna la variable n
 * a nombre
 */
void Director ::setNombre(string n) { 
  nombre = n;
}

/**
 * setter de year nacimiento
 *
 * Metodo que asigna la variable yn
 * a yearNacimiento
 */
void Director ::setYearNacimiento(int yn) { 
  yearNacimiento = yn;
}

/**
 * setter de premios
 *
 * Metodo que asigna la variable p
 * a premios
 */
void Director ::setPremios(string p) { 
  premios = p;
}

/**
 * setter de year obras
 *
 * Metodo que asigna la variable ob
 * a otrasObras
 */
void Director ::setObras(string ob) { 
  otrasObras = ob;
}

#endif // DIRECTOR_H_
