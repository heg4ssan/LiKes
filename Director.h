#include<string>
using namespace std;
class Director {
  private:
  string nombre;
  int yearNacimiento;
  string premios;
  string otrasObras;

  public:
  Director() : nombre(""), yearNacimiento(0), premios(""), otrasObras(""){};
  Director(string n, int yn, string p, string ob) : nombre(n), yearNacimiento(yn), premios(p), otrasObras(ob){};
  string getNombre();
  int getYearNacimiento();
  string getPremios();
  string getObras();

  void setNombre(string n);
  void setYearNacimiento(int yn);
  void setPremios(string p);
  void setObras(string ob);

};

string Director :: getNombre(){
    return nombre;
}

int Director :: getYearNacimiento(){
    return yearNacimiento;
}

string Director :: getPremios(){
    return premios;
}

string Director :: getObras(){
    return otrasObras;
}

void Director :: setNombre(string n){
    nombre = n;
}

void Director :: setYearNacimiento(int yn){
    yearNacimiento = yn;
}

void Director :: setPremios(string p){
    premios = p;
}

void Director :: setObras(string ob){
    otrasObras = ob;
}
