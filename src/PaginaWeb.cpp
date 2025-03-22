#include "../include/PaginaWeb.hh"
#include <string>

//Constructor
PaginaWeb::PaginaWeb(std::string DOI, std::string titulo, DTFecha fecha, std::string url, std::string contenidoExtraido)
    : Publicacion(DOI, titulo, fecha),
      url(url),
      contenidoExtraido(contenidoExtraido) {}
//Destructor
PaginaWeb::~PaginaWeb() {}
//Getters
std::string PaginaWeb::getURL() {
    return this->url;
}
std::string PaginaWeb::getContenidoExtraido() {
    return this->contenidoExtraido;
}
//Setters
void PaginaWeb::setURL(std::string url) {
    this->url = url;
}
void PaginaWeb::setContenidoExtraido(std::string contenidoExtraido) {
    this->contenidoExtraido = contenidoExtraido;
}
//Metodos
bool PaginaWeb::contienePalabra(std::string palabra) {
    return this->contenidoExtraido.find(palabra) != std::string::npos;
}