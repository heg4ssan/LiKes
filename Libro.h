#include <string>

class Libro {
  private:
    std::string titulo;
    std::string genero;
    std::string autor;
    std::string editorial;
    int paginas;
    float calificacion;
    int year;
  public:
    Libro(): titulo(""), genero(""), autor(""), editorial(""), paginas(0), calificacion(0.0), year(0){};
    Libro(std::string t, std::string g, std::string a, std::string e, int p, float c, int y) :
        titulo(t), genero(g), autor(a), editorial(e), paginas(p), calificacion(c), year(y){};
    std::string getTitulo();
    std::string getGenero();
    std::string getAutor();
    std::string getEditorial();
    int getPaginas();
    float getCalif();
    int getYear();

    void setTitulo(std::string t);
    void setGenero(std::string g);
    void setAutor(std::string a);
    void setEditorial(std::string e);
    void setPaginas(int p);
    void setCalificacion(float c);
    void setYear(int y);
};

std::string Libro :: getTitulo(){
    return titulo;
}

std::string Libro :: getGenero(){
    return genero;
}

std::string Libro :: getAutor(){
    return autor;
}

std::string Libro :: getEditorial(){
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

void Libro :: setTitulo(std::string t) {
    titulo = t;
}

void Libro :: setGenero(std::string g) {
    genero = g;
}

void Libro :: setAutor(std::string a) {
    autor = a;
}

void Libro :: setEditorial(std::string e) {
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
