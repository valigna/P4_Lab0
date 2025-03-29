#ifndef DTFecha_hh
#define DTFecha_hh

class DTFecha {
	private:
		int dia;
		int mes;
		int anio;

	public:
		// Constructores
		DTFecha(int dia, int mes, int anio);

		// Destructor
		~DTFecha();

		// Getters
		int getDia() const;
		int getMes() const;
		int getAnio() const;

		// Operadores
		bool operator>(const DTFecha &) const;

};

#endif
