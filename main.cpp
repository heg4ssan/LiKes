#include<iostream>
#include<string>
#include "Libro.h"
#include "Pelicula.h"
#include "Serie.h"

void menu(){
    std::cout << "LiKes - Menu" << std::endl;
    std::cout << "1. Mostrar lista de LiKes(peliculas, series y libros)" << std::endl;
    std::cout << "2. Agregar Pelicula" << std::endl;
    std::cout << "3. Agregar Serie" << std::endl;
    std::cout << "4. Agregar Libro" << std::endl;
    std::cout << "5. Informacion de Pelicula" << std::endl;
    std::cout << "6. Informacion de Serie" << std::endl;
    std::cout << "7. Informacion de LIbro" << std::endl;
}

void printPeliculas(Pelicula arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        std::cout << i + 1 << ". "<< arg[i].getNombre() << std::endl;
        }
}

void printSeries(Serie arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        std::cout << i + 1 << ". " << arg[i].getNombre() << std::endl;
        }
}

void printLibros(Libro arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        std::cout << i + 1 << ". " << arg[i].getTitulo() << std::endl;
        }
}


int main(){
    bool correrprogra = true;
    Pelicula miColeccionP[100];
    int numPeliculas = 0;
    Serie miColeccionS[100];
    int numSeries = 0;
    Libro miColeccionL[100];
    int numLibros = 0;
    while(correrprogra) {
        menu();
        int salirprogra = 0;
        int opcion;
        std::cin >> opcion;
        if(opcion == 1) {
            std::cout << "Peliculas:" << std::endl;
            printPeliculas(miColeccionP, numPeliculas);
            std::cout << "Series:" << std::endl;
            printSeries(miColeccionS, numSeries);
            std::cout << "Libros:" << std::endl;
            printLibros(miColeccionL, numLibros);

        } else if(opcion == 2) {
            std::string nom;
            std::string gen;
            std::string dir;
            float dura;
            float cali;
            int yr;
            std::cout << "Ingresa el nombre:" << std::endl;
            std::cin.ignore();
            getline(std::cin, nom);
            std::cout << "Ingresa el genero:" << std::endl;
            getline(std::cin, gen);
            std::cout << "Ingresa el/la director@:" << std::endl;
            getline(std::cin, dir);
            std::cout << "Ingresa duracion en minutos:" << std::endl;
            std::cin >> dura;
            std::cout << "Ingresa tu calificacion del 1 - 10" << std::endl;
            std::cin >> cali;
            std::cout << "Ingresa el año de lanzamiento" << std::endl;
            std::cin >> yr;
            Pelicula peli(nom, gen, dir, dura, cali, yr);
            miColeccionP[numPeliculas] = peli;
            numPeliculas++;

        } else if(opcion == 3) {
            std::string nom;
            std::string gen;
            std::string showr;
            std::string est;
            int cap;
            float cali;
            int yr;
            std::cout << "Ingresa el nombre:" << std::endl;
            std::cin.ignore();
            getline(std::cin, nom);
            std::cout << "Ingresa el genero:" << std::endl;
            getline(std::cin, gen);
            std::cout << "Ingresa el/la showrunner de la serie:" << std::endl;
            getline(std::cin, showr);
            std::cout << "Ingresa el estado actual de la serie (Emision, cancelada...):):" << std::endl;
            getline(std::cin, est);
            std::cout << "Ingresa la cantidad de capitulos:" << std::endl;
            std::cin >> cap;
            std::cout << "Ingresa tu calificacion del 1 - 10" << std::endl;
            std::cin >> cali;
            std::cout << "Ingresa el año de lanzamiento" << std::endl;
            std::cin >> yr;
            Serie serie(nom, gen, showr, est, cap, cali, yr);
            miColeccionS[numSeries] = serie;
            numSeries++;

        } else if (opcion == 4) {
            std::string tit;
            std::string gen;
            std::string aut;
            std::string edi;
            int pag;
            float cali;
            int yr;
            std::cout << "Ingresa el titulo:" << std::endl;
            std::cin.ignore();
            getline(std::cin, tit);
            std::cout << "Ingresa el genero:" << std::endl;
            getline(std::cin, gen);
            std::cout << "Ingresa el/la autor@ " << std::endl;
            getline(std::cin, aut);
            std::cout << "Ingresa la editorial del libro: " << std::endl;
            getline(std::cin, edi);
            std::cout << "Ingresa numero de paginas:" << std::endl;
            std::cin >> pag;
            std::cout << "Ingresa tu calificacion del 1 - 10" << std::endl;
            std::cin >> cali;
            std::cout << "Ingresa el año de lanzamiento" << std::endl;
            std::cin >> yr;
            Libro libr(tit, gen, aut, edi, pag, cali, yr);
            miColeccionL[numLibros] = libr;
            numLibros++;

        } else if (opcion == 5) {
            int peli;
            std::cout << "Ingresa el numero de pelicula (Si no lo sabes, consulta la lista):" << std::endl;
            std::cin >> peli;
            std::cout << miColeccionP[peli].getNombre() << ", " << miColeccionP[peli].getGenero() << ", " << miColeccionP[peli].getDirec()
            << ", " << miColeccionP[peli].getDura() << ", " << miColeccionP[peli].getCalif() << ", " << miColeccionP[peli].getYear() << std::endl;

        } else if (opcion == 6) {
            int ser;
            std::cout << "Ingresa el numero de serie (Si no lo sabes, consulta la lista):" << std::endl;
            std::cin >> ser;
            std::cout << miColeccionS[ser].getNombre() << ", " << miColeccionS[ser].getGenero() << ", " << miColeccionS[ser].getShowR()
            << ", "<< miColeccionS[ser].getEstado() << ", " <<  miColeccionS[ser].getCaps() << ", " << miColeccionS[ser].getCalif() << ", " <<
            miColeccionS[ser].getYear() << std::endl;

        } else if (opcion == 7) {
            int libr;
            std::cout << "Ingresa el numero de libro (Si no lo sabes, consulta la lista):" << std::endl;
            std::cin >> libr;
            std::cout << miColeccionL[libr].getTitulo() << ", " << miColeccionL[libr].getGenero() << ", " << miColeccionL[libr].getAutor() << ", "
            << miColeccionL[libr].getEditorial() << ", " <<  miColeccionL[libr].getPaginas() << ", " << miColeccionL[libr].getCalif() << ", " <<
            miColeccionL[libr].getYear() << std::endl;
        }
        std::cout << "Quieres salir del programa?, Si/No (1 = Si, 2 = No)" << std::endl;
        std::cin >> salirprogra;
        if(salirprogra == 1){
            correrprogra = false;
        }
    }
}
