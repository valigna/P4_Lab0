#include "../include/Publicacion.hh"
#include "../include/Investigador.hh"
#include <set>
#include <string>

//Getters
std::string Publicacion::getDOI(){
    return this->DOI;
}
std::string Publicacion::getTitulo(){
    return this->titulo;
}
DTFecha Publicacion::getFecha(){
    return this->fecha;
}
std::set<Investigador*> Publicacion::getAutores(){
    return this->autores;
}
DTRefer Publicacion::getDT(){
    // Crea un set de strings con los nombres de los autores
    std::set<std::string> nombresAutores;
    for (std::set<Investigador*>::iterator it = this->autores.begin(); it != this->autores.end(); ++it) {
        Investigador* investigador = *it;
        nombresAutores.insert(investigador->getNombre());
    }
    
    DTRefer DT(getDOI(), getTitulo(), getFecha(), nombresAutores);
    return DT;
}
//Setters
    void Publicacion::setDOI(std::string DOI){
        this->DOI=DOI;
        return;
    }
    void Publicacion::setTitulo(std::string titulo){
        this->titulo=titulo;
        return;
    }
    void Publicacion::setFecha(DTFecha fecha){
        this->fecha=fecha;
        return;
    }
    void Publicacion::setAutores(std::set<Investigador*> autores){
        this->autores=autores;
        return;
    }

