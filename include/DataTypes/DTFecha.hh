#ifndef DTFecha_hh
#define DTFecha_hh

class DTFecha {
	private:
		int dia;
		int mes;
		int ano;

	public:
		// Constructores
		DTFecha(int dia, int mes, int ano);

		// Destructor
		~DTFecha();

		// Getters
		int getDia() const;
		int getMes() const;
		int getAno() const;

		// Operadores
		bool operator>(const DTFecha &) const;

};

#endif
