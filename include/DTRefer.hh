#ifndef DTRefer_hh
#define DTRefer_hh

#include <string>
#include <set>
#include "DTFecha.hh"

using namespace std;

class DTRefer {
	private:
		string DOI;
		string titulo;
		DTFecha fecha;
		set<string> autores;

	public:
		// Constructores
		DTRefer(string DOI, string titulo, DTFecha fecha, set<string> autores);

		// Destructor
		~DTRefer();

		// Getters
		string getDOI() const;
		string getTitulo() const;
		DTFecha getFecha() const;
		set<string> getAutores() const;

};

// Declaración del operador de inserción de flujo
ostream& operator<<(ostream& os, const DTRefer& refer);

#endif
