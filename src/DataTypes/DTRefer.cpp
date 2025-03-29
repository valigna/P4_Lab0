#ifndef DTRefer_cpp
#define DTRefer_cpp

#include <iostream>
#include <iterator>
#include "../../include/DataTypes/DTRefer.hh"

// constructor
DTRefer::DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores) {
	this->DOI = DOI;
	this->titulo = titulo;
	this->fecha = fecha;
	this->autores = autores; // no se si hay que hacer algo mas por ser sun set
}

// Destructor
DTRefer::~DTRefer(){}

// Getters
string DTRefer::getDOI() const {
	return this->DOI;
}

string DTRefer::getTitulo() const {
	return this->titulo;
}

DTFecha DTRefer::getFecha() const {
	return this->fecha;
}

set<string> DTRefer::getAutores() const {
	return this->autores;
}

// Implementación del operador de inserción de flujo
ostream& operator<<(ostream& os, const DTRefer& refer) {
    // Imprimir DOI->titulo
    os << refer.getDOI() << "->" << refer.getTitulo();
    
    // Obtener el objeto fecha
    DTFecha fecha = refer.getFecha();
    
    // Imprimir (fecha) en formato DD/MM/AAAA
    os << "(" << fecha.getDia() << "/" << fecha.getMes() << "/" << fecha.getAnio() << ")";
    
    // Imprimir /autor1,autor2,...,autorN
    os << "/";
    
    set<string> autores = refer.getAutores();
    if (!autores.empty()) {
        // Imprimir todos los autores separados por comas
        set<string>::iterator it = autores.begin();
        os << *it; // Primer autor sin coma al principio
        ++it;
        
        // Resto de autores con comas
        while (it != autores.end()) {
            os << "," << *it;
            ++it;
        }
    }
    
    return os;
}

#endif
