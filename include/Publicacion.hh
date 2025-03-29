#ifndef PUBLICACION_HH
#define PUBLICACION_HH

#include "DTFecha.hh"
#include "DTRefer.hh"

#include <string>
#include <set>

class Investigador;

class Publicacion {
    private:
        std::string DOI;
        std::string titulo;
        DTFecha fecha;
        std::set<Investigador*> autores;
    public:
    //Getters
    std::string getDOI();
    std::string getTitulo();
    DTFecha getFecha();
    std::set<Investigador*> getAutores();
    DTRefer getDT();
    //Setters
    void setDOI(std::string DOI);
    void setTitulo(std::string titulo);
    void setFecha(DTFecha fecha);
    void setAutores(std::set<Investigador*> autores);
    //Metodos
    virtual bool contienePalabra(std::string palabra);
};

#endif