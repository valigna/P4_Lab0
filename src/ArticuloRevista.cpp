#include <string>
#include <set>
#include "../include/ArticuloRevista.hh"
using namespace std;

ArticuloRevista::ArticuloRevista(string d, string t, DTFecha f, string r, string e)
    : Publicacion(d, t, f) {
        this->revista = r;
        this->extracto = e;
}

ArticuloRevista::~ArticuloRevista() {};

bool ArticuloRevista::contienePalabra(string palabra) {
    return (this->extracto.find(palabra) != this->extracto.end());
}

string ArticuloRevista::getRevista()  {
    return revista;
}

string ArticuloRevista::getExtracto() {
    return extracto;
}
