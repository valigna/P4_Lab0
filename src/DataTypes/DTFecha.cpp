#ifndef DTFecha.cpp
#define DTFecha.cpp

#include "../../include/DataTypes/DTFecha.hh"

// Constructor
DTFecha::DTFecha(int dia, int mes, int ano) {
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}

// Destructor
DTFecha::~DTFecha(){};

// Getteres
int DTFecha::getDia() const {
	return this->dia;
}

int DTFecha::getMes() const {
	return this->mes;
}

int DTFecha::getAno() const {
	return this->ano;
}

// Operadores
bool DTFecha::operator>(const DTFecha &fecha) const {
	return (
		this->dia > fecha.dia ||
		this->mes > fecha.mes ||
		this->ano > fecha.ano
	);
}

#endif
