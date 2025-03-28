#ifndef PUBLICACION_HH
#define PUBLICACION_HH

#include <string>
#include <set>

class Publicacion {
    private:
        std::string DOI;
        std::string titulo;
        DTFecha fecha;
        std::set<Investigador*> autores;
    public:
    //Getters
    std::string getDOI();
    std::string gettitulo();
    DTFecha getfecha();
    std::set<Investigador*> getautores();
    DTRefer getDT();
    //Setters
    void setDOI(std::string DOI);
    void settitulo(std::string titulo);
    void setfecha(DTFecha fecha);
    void setautores(std::set<Investigador*> autores);
    //Metodos
    virtual bool contienePalabra(std::string palabra);
};
