#ifndef DTRefer_cpp
#define DTRefer_cpp

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

#endif
