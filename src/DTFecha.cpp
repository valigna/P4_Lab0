#ifndef DTFecha_cpp
#define DTFecha_cpp

#include "../include/DTFecha.hh"

// Constructor
DTFecha::DTFecha(int dia, int mes, int anio) {
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

// Destructor
DTFecha::~DTFecha(){}

// Getteres
int DTFecha::getDia() const {
	return this->dia;
}

int DTFecha::getMes() const {
	return this->mes;
}

int DTFecha::getAnio() const {
	return this->anio;
}

// Operadores
bool DTFecha::operator>(const DTFecha &fecha) const {
	return (
		this->dia > fecha.dia ||
		this->mes > fecha.mes ||
		this->anio > fecha.anio
	);
}

#endif
