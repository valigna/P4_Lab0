#include "../include/Libro.hh"
#include <string>
#include <set>

//Constructor
Libro::Libro(std::string DOI, std::string titulo, DTFecha fecha, std::string editorial, std::set<std::string> palabrasDestacadas)
    : Publicacion(DOI, titulo, fecha),
      editorial(editorial),
      palabrasDestacadas(palabrasDestacadas) {}
//Destructor
Libro::~Libro() {}
//Getters
std::string Libro::getEditorial() {
    return this->editorial;
}
std::set<std::string> Libro::getPalabrasDestacadas() {
    return this->palabrasDestacadas;
}
//Setters
void Libro::setEditorial(std::string editorial) {
    this->editorial = editorial;
}
void Libro::setPalabrasDestacadas(std::set<std::string> palabrasDestacadas) {
    this->palabrasDestacadas = palabrasDestacadas;
}
//Metodos
bool Libro::contienePalabra(std::string palabra) {
    return this->palabrasDestacadas.find(palabra) != this->palabrasDestacadas.end();
}