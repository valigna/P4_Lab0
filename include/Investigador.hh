#ifndef INVESTIGADOR_HH
#define INVESTIGADOR_HH
#include <string>
#include <set>
#include "Publicacion.h"  
#include "DTFecha.h"
using namespace std;
class Investigador {
    private:
    string ORCID;
    string nombre;
    string institucion;
   set<Publicacion*> publicaciones;
    public:
 //Constructor
    Investigador(string,string,string);
   //Destructor
	 ~Investigador();
     // Getters
    string getNombre();
    string getORCID();
    string getInstitucion();
    //Metodos
  void agregarPublicacion(Publicacion* p);
    string toString()const;
    set<string> listarPublicaciones(DTFecha desde, string palabra) const;
    };
#endif 