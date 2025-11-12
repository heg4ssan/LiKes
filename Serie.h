#include <string>

class Serie {
  private:
    std::string nombre;
    std::string genero;
    std::string showrunner;
    std::string estado;
    int capitulos;
    float calificacion;
    int year;
  public:
    Serie(): nombre(""), genero(""), showrunner(""), estado(""), capitulos(0), calificacion(0.0), year(0){};
    Serie(std::string n, std::string g, std::string sh, std:: string e, int cp, float ca, int y):
        nombre(n), genero(g), showrunner(sh), estado(e), capitulos(cp), calificacion(ca), year(y){};
    std::string getNombre();
    std::string getGenero();
    std::string getShowR();
    std::string getEstado();
    int getCaps();
    float getCalif();
    int getYear();

    void setNombre(std::string n);
    void setGenero(std::string g);
    void setShowR(std::string sh);
    void setEstado(std::string e);
    void setCaps(int cp);
    void setCalif(float ca);
    void setYear(int y);

};

std::string Serie :: getNombre(){
    return nombre;
}

std::string Serie :: getGenero(){
    return genero;
}

std::string Serie :: getShowR(){
    return showrunner;
}

std::string Serie :: getEstado(){
    return estado;
}

int Serie :: getCaps(){
    return capitulos;
}

float Serie :: getCalif(){
    return calificacion;
}

int Serie :: getYear(){
    return year;
}


void Serie :: setNombre(std::string n){
    nombre = n;
}

void Serie :: setGenero(std::string g){
    genero = g;
}

void Serie :: setShowR(std::string sh){
    showrunner = sh;
}

void Serie :: setEstado(std::string e){
    estado = e;
}

void Serie :: setCaps(int cp){
    capitulos = cp;
}

void Serie :: setCalif(float ca){
    calificacion = ca;
}

void Serie :: setYear(int y){
    year = y;
}
