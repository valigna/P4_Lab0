#include <string>
#include <set>
#include "../include/ArticuloRevista.hh"
using namespace std;

ArticuloRevista::ArticuloRevista(std::string DOI, std::string titulo, DTFecha fecha, std::string revista, std::string extracto)
    : Publicacion(DOI, titulo, fecha) {
        this->revista = revista;
        this->extracto = extracto;
}

ArticuloRevista::~ArticuloRevista() {};

bool ArticuloRevista::contienePalabra(std::string palabra) {
    return (this->extracto.find(palabra) != this->extracto.end());
}

string ArticuloRevista::getRevista()  {
    return this->revista;
}

string ArticuloRevista::getExtracto() {
    return this->extracto;
}

void ArticuloRevista::setRevista(std::string revista) {
    this->revista = revista;
}

void ArticuloRevista::setExtracto(std::string extracto) {
    this->extracto = extracto;
}
