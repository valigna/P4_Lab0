#include <string>
#include <set>
#include "../include/ArticuloRevista.hh"
using namespace std;


ArticuloRevista::ArticuloRevista(string d, string t, DTFecha f, string r, string e)
    : Publicacion(d, t, f) {
        revista = r;
        extracto = e;
    }
    ~ArticuloRevista() {};

bool ArticuloRevista::contienePalabra(string palabra) {
    return this->palabrasDestacadas.find(palabra) != this->palabrasDestacadas.end();
}

string ArticuloRevista::getRevista()  {
    return revista;
}

string ArticuloRevista::getExtracto() {
    return extracto;
}