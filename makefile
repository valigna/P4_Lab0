CXX=g++
IDIR=include
CDIR=src
ODIR=obj

main: main.o DTFecha.o DTRefer.o Publicacion.o ArticuloRevista.o Libro.o PaginaWeb.o Investigador.o
	$(CXX) main.o DTFecha.o DTRefer.o Publicacion.o ArticuloRevista.o Libro.o PaginaWeb.o Investigador.o -o main
	./main

main.o: main.cpp
	$(CXX) -I$(IDIR) -c main.cpp

DTFecha.o: $(CDIR)/DTFecha.cpp $(IDIR)/DTFecha.hh
	$(CXX) -I$(IDIR) -c $(CDIR)/DTFecha.cpp

DTRefer.o: $(CDIR)/DTRefer.cpp $(IDIR)/DTRefer.hh
	$(CXX) -I$(IDIR) -c $(CDIR)/DTRefer.cpp

Publicacion.o: $(CDIR)/Publicacion.cpp $(IDIR)/Publicacion.hh
	$(CXX) -I$(IDIR) -c $(CDIR)/Publicacion.cpp

ArticuloRevista.o: $(CDIR)/ArticuloRevista.cpp $(IDIR)/ArticuloRevista.hh
	$(CXX) -I$(IDIR) -c $(CDIR)/ArticuloRevista.cpp

Libro.o: $(CDIR)/Libro.cpp $(IDIR)/Libro.hh
	$(CXX) -I$(IDIR) -c $(CDIR)/Libro.cpp

PaginaWeb.o: $(CDIR)/PaginaWeb.cpp $(IDIR)/PaginaWeb.hh
	$(CXX) -I$(IDIR) -c $(CDIR)/PaginaWeb.cpp

Investigador.o: $(CDIR)/Investigador.cpp $(IDIR)/Investigador.hh
	$(CXX) -I$(IDIR) -c $(CDIR)/Investigador.cpp

clean:
	rm -f *.o main
