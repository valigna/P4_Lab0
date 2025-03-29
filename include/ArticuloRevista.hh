#ifndef ARTICULOREVISTA_HH
#define ARTICULOREVISTA_HH
#include <string>
#include <set>
#include "Publicacion.hh"
using namespace std;
class ArticuloRevista : public Publicacion {
    private:
        std::string revista;
        std::string extracto;
    public:
        ArticuloRevista(std::string DOI, std::string titulo, DTFecha fecha, std::string revista, std::string extracto);
        ~ArticuloRevista();
        std::string getRevista();
        std::string getExtracto();
        void setRevista(std::string revista);
        void setExtracto(std::string extracto);
        bool contienePalabra(std::string palabra);
};
#endif