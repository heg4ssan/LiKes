#include <string>

class Pelicula {
  private:
    std::string nombre;
    std::string genero;
    std::string director;
    float duracion;
    float calificacion;
    int year;
  public:
    Pelicula(): nombre(""), genero(""), director(""), duracion(0.0), calificacion(0.0), year(0){};
    Pelicula(std::string n, std::string g, std::string di, float du, float ca, int y):
        nombre(n), genero(g), director(di), duracion(du), calificacion(ca), year(y){};
    std::string getNombre();
    std::string getGenero();
    std::string getDirec();
    float getDura();
    float getCalif();
    int getYear();

    void setNombre(std::string n);
    void setGenero(std::string g);
    void setDirec(std::string di);
    void setDura(float du);
    void setCalif(float ca);
    void setYear(int y);

};

std::string Pelicula :: getNombre(){
    return nombre;
}

std::string Pelicula :: getGenero(){
    return genero;
}

std::string Pelicula :: getDirec(){
    return director;
}

float Pelicula :: getDura(){
    return duracion;
}

float Pelicula :: getCalif(){
    return calificacion;
}

int Pelicula :: getYear(){
    return year;
}


void Pelicula :: setNombre(std::string n){
    nombre = n;
}

void Pelicula :: setGenero(std::string g){
    genero = g;
}

void Pelicula :: setDirec(std::string di){
    director = di;
}

void Pelicula :: setDura(float du){
    duracion = du;
}

void Pelicula :: setCalif(float ca){
    calificacion = ca;
}

void Pelicula :: setYear(int y){
    year = y;
}
