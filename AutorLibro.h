#include<string>
using namespace std;
class AutorLibro{
  private:
  string nombre;
  int yearNacimiento;
  int librosPublicados;
  string biografia;

  public:
  AutorLibro() : nombre(""), yearNacimiento(0), librosPublicados(0), biografia(""){};
  AutorLibro(string n, int yn, int lb, string bi) : nombre(n), yearNacimiento(yn), librosPublicados(lb), biografia(bi){};
  string getNombre();
  int getYearNacimiento();
  int getLibros();
  string getBiografia();

  void setNombre(string n);
  void setYearNacimiento(int yn);
  void setLibros(int lb);
  void setBiografia(string bi);

};

string AutorLibro :: getNombre(){
    return nombre;
}

int AutorLibro :: getYearNacimiento(){
    return yearNacimiento;
}

int AutorLibro :: getLibros(){
    return librosPublicados;
}

string AutorLibro :: getBiografia(){
    return biografia;
}

void AutorLibro :: setNombre(string n){
    nombre = n;
}

void AutorLibro :: setYearNacimiento(int yn){
    yearNacimiento = yn;
}

void AutorLibro :: setLibros(int lb){
    librosPublicados = lb;
}

void AutorLibro :: setBiografia(string bi){
    biografia = bi;
}
