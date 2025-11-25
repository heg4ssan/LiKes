#include<string>
using namespace std;
class Showrunner{
  private:
  string nombre;
  int yearNacimiento;
  int guionesEscritos;
  string seriesAnteriores;

  public:
  Showrunner() : nombre(""), yearNacimiento(0), guionesEscritos(0), seriesAnteriores(""){};
  Showrunner(string n, int yn, int g, string sa) : nombre(n), yearNacimiento(yn), guionesEscritos(g), seriesAnteriores(sa){};
  string getNombre();
  int getYearNacimiento();
  int getGuiones();
  string getSeries();

  void setNombre(string n);
  void setYearNacimiento(int yn);
  void setGuiones(int g);
  void setSeries(string sa);

};

string Showrunner :: getNombre(){
    return nombre;
}

int Showrunner :: getYearNacimiento(){
    return yearNacimiento;
}

int Showrunner :: getGuiones(){
    return guionesEscritos;
}

string Showrunner :: getSeries(){
    return seriesAnteriores;
}

void Showrunner :: setNombre(string n){
    nombre = n;
}

void Showrunner :: setYearNacimiento(int yn){
    yearNacimiento = yn;
}

void Showrunner :: setGuiones(int g){
    guionesEscritos = g;
}

void Showrunner :: setSeries(string sa){
    seriesAnteriores = sa;
}
