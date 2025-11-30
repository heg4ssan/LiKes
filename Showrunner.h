/*
 * Proyecto LiKes
 * Héctor Enrique Gassan Sanchez
 * A017098097
 * 30/10/2025
 */

/*
 * Clase Showrunner con sus metodos
 */

#ifndef SHOWRUNNER_H_
#define SHOWRUNNER_H_

#include <string>
using namespace std;

// Declaracion de clase Director
class Showrunner {
  private:
    // Declaro variables de instancia
    string nombre;
    int yearNacimiento;
    int guionesEscritos;
    string seriesAnteriores;

  public:
    // Constructor vacio
    Showrunner()
        : nombre(""), yearNacimiento(0), guionesEscritos(0),
          seriesAnteriores("") {};
    // COnstructor parametrizado
    Showrunner(string n, int yn, int g, string sa)
        : nombre(n), yearNacimiento(yn), guionesEscritos(g),
          seriesAnteriores(sa) {};
    // Declaro los metodos que tendra el objeto
    string getNombre();
    int getYearNacimiento();
    int getGuiones();
    string getSeries();

    void setNombre(string n);
    void setYearNacimiento(int yn);
    void setGuiones(int g);
    void setSeries(string sa);
};

// Getters de los atributos

/**
 * getter nombre
 *
 * @param
 * @return string: nombre del director
 */
string Showrunner ::getNombre() { return nombre; }

/**
 * getter year nacimiento
 *
 * @param
 * @return int: año de nacimiento del director
 */
int Showrunner ::getYearNacimiento() { return yearNacimiento; }

/**
 * getter guiones escritos
 *
 * @param
 * @return int: numero de guiones escritos
 */
int Showrunner ::getGuiones() { return guionesEscritos; }

/**
 * getter series anteriores
 *
 * @param
 * @return string: numero de series anteriores
 */
string Showrunner ::getSeries() { return seriesAnteriores; }

// Setters de los atributos

/**
 * setter de nombre
 *
 * Metodo que asigna la variable n
 * a nombre
 */
void Showrunner ::setNombre(string n) { nombre = n; }

/**
 * setter de year nacimiento
 *
 * Metodo que asigna la variable yn
 * a yearNacimiento
 */
void Showrunner ::setYearNacimiento(int yn) { yearNacimiento = yn; }

/**
 * setter de guiones
 *
 * Metodo que asigna la variable g
 * a guionesEscritos
 */
void Showrunner ::setGuiones(int g) { guionesEscritos = g; }

/**
 * setter de series anteriores
 *
 * Metodo que asigna la variable sa
 * a seriesAnteriores
 */
void Showrunner ::setSeries(string sa) { seriesAnteriores = sa; }

#endif // SHOWRUNNER_H_
