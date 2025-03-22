#ifndef LIBRO_HH
#define LIBRO_HH

#include <string>
#include <set>
#include "Publicacion.hh"

class Libro : public Publicacion {
    private:
        std::string editorial;
        std::set<std::string> palabrasDestacadas;
    public:
        //Constructor
        Libro(std::string DOI, std::string titulo, DTFecha fecha, std::string editorial, std::set<std::string> palabrasDestacadas);
        //Destructor
        ~Libro();
        //Getters
        std::string getEditorial();
        std::set<std::string> getPalabrasDestacadas();
        //Setters
        void setEditorial(std::string editorial);
        void setPalabrasDestacadas(std::set<std::string> palabrasDestacadas);
        //Metodos
        bool contienePalabra(std::string palabra);
};

#endif  