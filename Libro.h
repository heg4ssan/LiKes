#include <string>
#include "AutorLibro.h"
using namespace std;

class Libro {
  private:
    string titulo;
    string genero;
    AutorLibro autor;
    string editorial;
    int paginas;
    float calificacion;
    int year;
  public:
    Libro(): titulo(""), genero(""), autor(), editorial(""), paginas(0), calificacion(0.0), year(0){};
    Libro(string t, string g, string n, int yn, int lb, string bi, string e, int p, float c, int y) :
        titulo(t), genero(g), autor(n, yn, lb, bi), editorial(e), paginas(p), calificacion(c), year(y){};
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

string Libro :: getTitulo(){
    return titulo;
}

string Libro :: getGenero(){
    return genero;
}

AutorLibro Libro :: getAutor(){
    return autor;
}

string Libro :: getEditorial(){
    return editorial;
}

int Libro :: getPaginas(){
    return paginas;
}

float Libro :: getCalif(){
    return calificacion;
}

int Libro :: getYear(){
    return year;
}

void Libro :: setTitulo(string t) {
    titulo = t;
}

void Libro :: setGenero(string g) {
    genero = g;
}

void Libro :: setAutor(string n, int yn, int lb, string bi) {
    autor = AutorLibro(n, yn, lb, bi);
}

void Libro :: setEditorial(string e) {
    editorial = e;
}

void Libro :: setPaginas(int p) {
    paginas = p;
}

void Libro :: setCalificacion(float c) {
    calificacion = c;
}

void Libro :: setYear(int y) {
    year = y;
}
