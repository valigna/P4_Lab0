#ifndef ARTICULOREVISTA_HH
#define ARTiCULOREVISTA_HH
#include <string>
#include <set>
#include "Publicacion.hh"
using namespace std;
class ArticuloRevista : public Publicacion {
    private:
        string revista, extracto;
    
    public:
        ArticuloRevista(string, string, DTFecha, string, string);
        ~ArticuloRevista();
        bool contienePalabra(string);
           getRevista();
           getExtracto();
};
#endif