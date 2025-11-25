#include<iostream>
#include<string>
#include "Libro.h"
#include "Pelicula.h"
#include "Serie.h"
using namespace std;


void menu(){
    cout << "LiKes - Menu" << endl;
    cout << "1. Mostrar lista de LiKes(peliculas, series y libros)" << endl;
    cout << "2. Agregar Pelicula" << endl;
    cout << "3. Agregar Serie" << endl;
    cout << "4. Agregar Libro" << endl;
    cout << "5. Informacion de Pelicula" << endl;
    cout << "6. Informacion de Serie" << endl;
    cout << "7. Informacion de LIbro" << endl;

}

void printPeliculasDoc(Documental arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        cout << i + 1 << ". "<< arg[i].getNombre() << endl;
        }
}

void printPeliculasAnim(PeliculaAnimada arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        cout << i + 1 << ". "<< arg[i].getNombre() << endl;
        }
}

void printPeliculasFicc(PeliculaFiccion arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        cout << i + 1 << ". "<< arg[i].getNombre() << endl;
        }
}

void printSeriesEmi(SerieEmision arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        cout << i + 1 << ". " << arg[i].getNombre() << endl;
        }
}

void printSeriesPlata(SeriePlataforma arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        cout << i + 1 << ". " << arg[i].getNombre() << endl;
        }
}

void printLibros(Libro arg[], int tam) {
    for(int i = 0; i < tam; i++) {
        cout << i + 1 << ". " << arg[i].getTitulo() << endl;
        }
}


int main(){
    bool correrprogra = true;
    Documental miColeccionDoc[100];
    int numDocumentales = 0;
    PeliculaAnimada miColeccionPA[100];
    int numPeliculasAnim = 0;
    PeliculaFiccion miColeccionPF[100];
    int numPeliculasFicc = 0;
    SerieEmision miColeccionSE[100];
    int numSeriesE = 0;
    SeriePlataforma miColeccionSP[100];
    int numSerieSP = 0;
    Libro miColeccionL[100];
    int numLibros = 0;
    while(correrprogra) {
        menu();
        int salirprogra = 0;
        int opcion;
        cin >> opcion;
        if(opcion == 1) {
            cout << "PELICULAS:" << endl;
            cout << "Animadas:" << endl;
            printPeliculasAnim(miColeccionPA, numPeliculasAnim);
            cout << "Documentales:" << endl;
            printPeliculasDoc(miColeccionDoc, numDocumentales);
            cout << "Ficcion/Comunes:" << endl;
            printPeliculasFicc(miColeccionPF, numPeliculasFicc);
            cout << "SERIES:" << endl;
            cout << "En emision:" << endl;
            printSeriesEmi(miColeccionSE, numSeriesE);
            cout << "De Plataforma:" << endl;
            printSeriesPlata(miColeccionSP, numSerieSP);
            cout << "LIBROS:" << endl;
            printLibros(miColeccionL, numLibros);

        } else if(opcion == 2) {
            int opcionp;
            cout << "De que tipo es tu pelicula?: animada(1), Documental(2), Ficcion/Comun(3) / Ingresa el numero" << endl;
            cin >> opcionp;
            if(opcionp == 1){
                string nom;
                string gen;
                string nomd;
                int yn;
                string prem;
                string obr;
                float dura;
                float cali;
                int yr;
                string estd;
                string tipo;
                PeliculaAnimada peli;
                cout << "Ingresa el nombre:" << endl;
                cin.ignore();
                getline(cin, nom);
                cout << "Ingresa el genero:" << endl;
                getline(cin, gen);
                cout << "Ingresa los siguentes datos del director@:" << endl;
                cout << "Nombre:" << endl;
                getline(cin, nomd);
                cout << "Año de nacimiento:" << endl;
                cin >> yn;
                cout << "Premios que tiene:" << endl;
                cin.ignore();
                getline(cin, prem);
                cout << "Otras Obras:" << endl;
                getline(cin, obr);
                cout << "Ingresa duracion en minutos:" << endl;
                cin >> dura;
                cout << "Ingresa tu calificacion del 1 - 10:" << endl;
                cin >> cali;
                cout << "Ingresa el año de lanzamiento:" << endl;
                cin >> yr;
                cout << "Ingresa el estudio de animacion:" << endl;
                cin.ignore();
                getline(cin, estd);
                cout << "Ingresa el tipo de animacion:" << endl;
                getline(cin, tipo);
                peli.setNombre(nom);
                peli.setGenero(gen);
                peli.setDirec(nomd, yn, prem, obr);
                peli.setDura(dura);
                peli.setCalif(cali);
                peli.setYear(yr);
                peli.setEstudio(estd);
                peli.setTipo(tipo);
                miColeccionPA[numPeliculasAnim] = peli;
                numPeliculasAnim++;

            } else if (opcionp == 2) {
                string nom;
                string gen;
                string nomd;
                int yn;
                string prem;
                string obr;
                float dura;
                float cali;
                int yr;
                string tem;
                string narr;
                Documental peli;
                cout << "Ingresa el nombre:" << endl;
                cin.ignore();
                getline(cin, nom);
                cout << "Ingresa el genero:" << endl;
                getline(cin, gen);
                cout << "Ingresa los siguentes datos del director@:" << endl;
                cout << "Nombre:" << endl;
                getline(cin, nomd);
                cout << "Año de nacimiento:" << endl;
                cin >> yn;
                cout << "Premios que tiene:" << endl;
                cin.ignore();
                getline(cin, prem);
                cout << "Otras Obras:" << endl;
                getline(cin, obr);
                cout << "Ingresa duracion en minutos:" << endl;
                cin >> dura;
                cout << "Ingresa tu calificacion del 1 - 10:" << endl;
                cin >> cali;
                cout << "Ingresa el año de lanzamiento:" << endl;
                cin >> yr;
                cout << "Ingresa la tematica del documenal:" << endl;
                cin.ignore();
                getline(cin, tem);
                cout << "Ingresa el narrador del documental:" << endl;
                getline(cin, narr);
                peli.setNombre(nom);
                peli.setGenero(gen);
                peli.setDirec(nomd, yn, prem, obr);
                peli.setDura(dura);
                peli.setCalif(cali);
                peli.setYear(yr);
                peli.setTematica(tem);
                peli.setNarrador(narr);
                miColeccionDoc[numDocumentales] = peli;
                numDocumentales++;

            } else if (opcionp == 3) {
                string nom;
                string gen;
                string nomd;
                int yn;
                string prem;
                string obr;
                float dura;
                float cali;
                int yr;
                string actor;
                string dirfot;
                PeliculaFiccion peli;
                cout << "Ingresa el nombre:" << endl;
                cin.ignore();
                getline(cin, nom);
                cout << "Ingresa el genero:" << endl;
                getline(cin, gen);
                cout << "Ingresa los siguentes datos del director@:" << endl;
                cout << "Nombre:" << endl;
                getline(cin, nomd);
                cout << "Año de nacimiento:" << endl;
                cin >> yn;
                cout << "Premios que tiene:" << endl;
                cin.ignore();
                getline(cin, prem);
                cout << "Otras Obras:" << endl;
                getline(cin, obr);
                cout << "Ingresa duracion en minutos:" << endl;
                cin >> dura;
                cout << "Ingresa tu calificacion del 1 - 10:" << endl;
                cin >> cali;
                cout << "Ingresa el año de lanzamiento:" << endl;
                cin >> yr;
                cout << "Ingresa el actor principal de la pelicula:" << endl;
                cin.ignore();
                getline(cin, actor);
                cout << "Ingresa el director de fotografia de la pelicula:" << endl;
                getline(cin, dirfot);
                peli.setNombre(nom);
                peli.setGenero(gen);
                peli.setDirec(nomd, yn, prem, obr);
                peli.setDura(dura);
                peli.setCalif(cali);
                peli.setYear(yr);
                peli.setActor(actor);
                peli.setDirFotografia(dirfot);
                miColeccionPF[numPeliculasFicc] = peli;
                numPeliculasFicc++;

            } else {
                cout << "Esa opcion no es valida" << endl;
            }

        } else if(opcion == 3) {
            int opcions;
            cout << "Que tipo de serie es: En emision(1), De plataforma(2) / Ingresa el numero" << endl;
            cin >> opcions;
            if (opcions == 1) {
                string nom;
                string gen;
                string nomS;
                int yn;
                int gui;
                string obr;
                string sa;
                string est;
                int caps;
                float cali;
                int yr;
                string can;
                string fEm;
                SerieEmision serie;
                cout << "Ingresa el nombre:" << endl;
                cin.ignore();
                getline(cin, nom);
                cout << "Ingresa el genero:" << endl;
                getline(cin, gen);
                cout << "Ingresa los siguentes datos del Showrunner:" << endl;
                cout << "Nombre:" << endl;
                getline(cin, nomS);
                cout << "Año de nacimiento:" << endl;
                cin >> yn;
                cout << "Numero de guiones que ha escrito:" << endl;
                cin >> gui;
                cout << "Series anteriores:" << endl;
                cin.ignore();
                getline(cin, sa);
                cout << "Ingresa el estado actual de la serie: Emision/Cancelada/Terminada..." << endl;
                getline(cin, est);
                cout << "Ingresa numero de capitulos:" << endl;
                cin >> caps;
                cout << "Ingresa tu calificacion del 1 - 10:" << endl;
                cin >> cali;
                cout << "Ingresa el año de lanzamiento:" << endl;
                cin >> yr;
                cout << "Ingresa en que canal lo emiten:" << endl;
                cin.ignore();
                getline(cin, can);
                cout << "Ingresa la frecuencia de emision:" << endl;
                getline(cin, fEm);
                serie.setNombre(nom);
                serie.setGenero(gen);
                serie.setShowR(nomS, yn, gui, sa);
                serie.setEstado(est);
                serie.setCaps(caps);
                serie.setCalif(cali);
                serie.setYear(yr);
                serie.setCanalTv(can);
                serie.setFrecuenciaEm(fEm);
                miColeccionSE[numSeriesE] = serie;
                numSeriesE++;

            } else if (opcions == 2) {
                string nom;
                string gen;
                string nomS;
                int yn;
                int gui;
                string obr;
                string sa;
                string est;
                int caps;
                float cali;
                int yr;
                string pla;
                SeriePlataforma serie;
                cout << "Ingresa el nombre:" << endl;
                cin.ignore();
                getline(cin, nom);
                cout << "Ingresa el genero:" << endl;
                getline(cin, gen);
                cout << "Ingresa los siguentes datos del Showrunner:" << endl;
                cout << "Nombre:" << endl;
                getline(cin, nomS);
                cout << "Año de nacimiento:" << endl;
                cin >> yn;
                cout << "Numero de guiones que ha escrito:" << endl;
                cin >> gui;
                cout << "Series anteriores:" << endl;
                cin.ignore();
                getline(cin, sa);
                cout << "Ingresa el estado actual de la serie: Emision/Cancelada/Terminada..." << endl;
                getline(cin, est);
                cout << "Ingresa numero de capitulos:" << endl;
                cin >> caps;
                cout << "Ingresa tu calificacion del 1 - 10:" << endl;
                cin >> cali;
                cout << "Ingresa el año de lanzamiento:" << endl;
                cin >> yr;
                cout << "Ingresa la plataforma en donde se encuentra:" << endl;
                cin.ignore();
                getline(cin, pla);
                serie.setNombre(nom);
                serie.setGenero(gen);
                serie.setShowR(nomS, yn, gui, sa);
                serie.setEstado(est);
                serie.setCaps(caps);
                serie.setCalif(cali);
                serie.setYear(yr);
                serie.setPlataforma(pla);
                miColeccionSP[numSerieSP] = serie;
                numSerieSP++;

            } else {
                cout << "Esa opcion no es valida" << endl;
            }

        } else if (opcion == 4) {
            string tit;
            string gen;
            string nom;
            int yn;
            int numlb;
            string bio;
            string edi;
            int pag;
            float cali;
            int yr;
            Libro libr;
            cout << "Ingresa el titulo:" << endl;
            cin.ignore();
            getline(cin, tit);
            cout << "Ingresa el genero:" << endl;
            getline(cin, gen);
            cout << "Ingresa los siguentes datos del Autor; " << endl;
            cout << "Nombre:" << endl;
            getline(cin, nom);
            cout << "Año de nacimiento:" << endl;
            cin >> yn;
            cout << "Numero de libros que ha escrito:" << endl;
            cin >> numlb;
            cout << "Mini biografia:" << endl;
            cin.ignore();
            getline(cin, bio);
            cout << "Ingresa la editorial del libro: " << endl;
            getline(cin, edi);
            cout << "Ingresa numero de paginas:" << endl;
            cin >> pag;
            cout << "Ingresa tu calificacion del 1 - 10" << endl;
            cin >> cali;
            cout << "Ingresa el año de lanzamiento" << endl;
            cin >> yr;
            libr.setTitulo(tit);
            libr.setGenero(gen);
            libr.setAutor(nom, yn, numlb, bio);
            libr.setEditorial(edi);
            libr.setPaginas(pag);
            libr.setCalificacion(cali);
            libr.setYear(yr);
            miColeccionL[numLibros] = libr;
            numLibros++;

        } else if (opcion == 5) {
            int opcionp;
            cout << "De que tipo de pelicula quieres ver informacion? " << endl;
            cout << "Animadas(1), Documentales(2), Ficcion/Comunes(3) / Ingresa el numero" << endl;
            cin >> opcionp;
            if(opcionp == 1) {
                int peli;
                cout << "Ingresa el numero de pelicula animada (Si no lo sabes, consulta la lista):" << endl;
                cin >> peli;
                peli--;
                cout << miColeccionPA[peli].getNombre() << ", " << miColeccionPA[peli].getGenero() << ", "
                << miColeccionPA[peli].getDura() << ", " << miColeccionPA[peli].getCalif() << ", " << miColeccionPA[peli].getYear() <<  ", "
                << miColeccionPA[peli].getEstudio() << ", " << miColeccionPA[peli].getTipo() << endl;
                cout << "Informacion del director:" << endl;
                cout << miColeccionPA[peli].getDirec().getNombre() << ", "  << miColeccionPA[peli].getDirec().getYearNacimiento() << ", "
                << miColeccionPA[peli].getDirec().getPremios() << ", " << miColeccionPA[peli].getDirec().getObras() << endl;

            } else if(opcionp == 2) {
                int peli;
                cout << "Ingresa el numero de documental (Si no lo sabes, consulta la lista):" << endl;
                cin >> peli;
                peli--;
                cout << miColeccionDoc[peli].getNombre() << ", " << miColeccionDoc[peli].getGenero() << ", "
                << miColeccionDoc[peli].getDura() << ", " << miColeccionDoc[peli].getCalif() << ", " << miColeccionDoc[peli].getYear() << ", "
                << miColeccionDoc[peli].getNarrador() << ", " << miColeccionDoc[peli].getTematica() << endl;
                cout << "Informacion del director:" << endl;
                cout << miColeccionDoc[peli].getDirec().getNombre() << ", "  << miColeccionDoc[peli].getDirec().getYearNacimiento() << ", "
                << miColeccionDoc[peli].getDirec().getPremios() << ", " << miColeccionDoc[peli].getDirec().getObras() << endl;

            } else if (opcionp == 3) {
                int peli;
                cout << "Ingresa el numero de pelicula de ficcion / comun (Si no lo sabes, consulta la lista):" << endl;
                cin >> peli;
                peli--;
                cout << miColeccionPF[peli].getNombre() << ", " << miColeccionPF[peli].getGenero() << ", "
                << miColeccionPF[peli].getDura() << ", " << miColeccionPF[peli].getCalif() << ", " << miColeccionPF[peli].getYear() << ", "
                << miColeccionPF[peli].getActor() << ", " << miColeccionPF[peli].getDirFotografia() << endl;
                cout << "Informacion del director:" << endl;
                cout << miColeccionPF[peli].getDirec().getNombre() << ", "  << miColeccionPF[peli].getDirec().getYearNacimiento() << ", "
                << miColeccionPF[peli].getDirec().getPremios() << ", " << miColeccionPF[peli].getDirec().getObras() << endl;

            } else {
                cout << "Esa opcion no es valida" << endl;
            }

        } else if (opcion == 6) {
            int opcions;
            cout << "De que tipo de serie quieres ver informacion? " << endl;
            cout << "En emision (1), De Plataforma(2)/ Ingresa el numero" << endl;
            cin >> opcions;
            if(opcions == 1) {
                int serie;
                cout << "Ingresa el numero de serie en emision (Si no lo sabes, consulta la lista):" << endl;
                cin >> serie;
                serie--;
                cout << miColeccionSE[serie].getNombre() << ", " << miColeccionSE[serie].getGenero() << ", "
                << miColeccionSE[serie].getEstado() << ", " << miColeccionSE[serie].getCaps() << ", " << miColeccionSE[serie].getCalif() << ", "
                << miColeccionSE[serie].getYear() << ", "<< miColeccionSE[serie].getCanalTv() << ", " << miColeccionSE[serie].getFrecuenciaEm() << endl;
                cout << "Informacion del Showrunner:" << endl;
                cout << miColeccionSE[serie].getShowR().getNombre() << ", "  << miColeccionSE[serie].getShowR().getYearNacimiento() << ", "
                << miColeccionSE[serie].getShowR().getGuiones() << ", " << miColeccionSE[serie].getShowR().getSeries() << endl;

            } else if(opcions == 2) {
                int serie;
                cout << "Ingresa el numero de serie de plataforma (Si no lo sabes, consulta la lista):" << endl;
                cin >> serie;
                serie--;
                cout << miColeccionSP[serie].getNombre() << ", " << miColeccionSP[serie].getGenero() << ", "
                << miColeccionSP[serie].getEstado() << ", " << miColeccionSP[serie].getCaps() << ", " << miColeccionSP[serie].getCalif() << ", "
                << miColeccionSP[serie].getYear() << ", "<< miColeccionSP[serie].getPlataforma() << endl;
                cout << "Informacion del Showrunner:" << endl;
                cout << miColeccionSP[serie].getShowR().getNombre() << ", "  << miColeccionSP[serie].getShowR().getYearNacimiento() << ", "
                << miColeccionSP[serie].getShowR().getGuiones() << ", " << miColeccionSP[serie].getShowR().getSeries() << endl;
            } else {
                cout << "Esa opcion no es valida" << endl;
            }

        } else if (opcion == 7) {
            int libr;
            cout << "Ingresa el numero de libro (Si no lo sabes, consulta la lista):" << endl;
            cin >> libr;
            libr--;
            cout << miColeccionL[libr].getTitulo() << ", " << miColeccionL[libr].getGenero() << ", " << miColeccionL[libr].getEditorial()
            << ", " <<  miColeccionL[libr].getPaginas() << ", " << miColeccionL[libr].getCalif() << ", " << miColeccionL[libr].getYear() << endl;
            cout << "Informacion del autor:" << endl;
            cout << miColeccionL[libr].getAutor().getNombre() << ", " << miColeccionL[libr].getAutor().getYearNacimiento() << ", " <<
            miColeccionL[libr].getAutor().getLibros() << ", " << miColeccionL[libr].getAutor().getBiografia() << endl;

        } else {
            cout << "Esa opcion no es valida" << endl;
        }
        cout << "Quieres salir del programa?, Si/No (1 = Si, 2 = No)" << endl;
        cin >> salirprogra;
        if(salirprogra == 1){
            correrprogra = false;
        }
    }
}
