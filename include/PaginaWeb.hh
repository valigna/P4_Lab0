#ifndef PAGINAWEB_HH
#define PAGINAWEB_HH

#include "Publicacion.hh"
#include <string>

class PaginaWeb : public Publicacion {
    private:
        std::string url;
        std::string contenidoExtraido;
    public:
        //Constructor
        PaginaWeb(std::string DOI, std::string titulo, DTFecha fecha, std::string url, std::string contenidoExtraido);
        //Destructor
        ~PaginaWeb();
        //Getters
        std::string getURL();
        std::string getContenidoExtraido();
        //Setters
        void setURL(std::string url);
        void setContenidoExtraido(std::string contenidoExtraido);
        //Metodos
        bool contienePalabra(std::string palabra);
};

#endif