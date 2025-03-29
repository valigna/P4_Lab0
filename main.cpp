#include <iostream>
#include <list>
#include <map>
#include "src/Publicacion.cpp"
#include "src/ArticuloRevista.cpp"
#include "src/Libro.cpp"
#include "src/PaginaWeb.cpp"
#include "src/Investigador.cpp"
#include "src/DTFecha.cpp"
#include "src/DTRefer.cpp"

std::list<Publicacion*> publicaciones;
std::map<std::string, Publicacion*> map_publicaciones;

std::list<Investigador*> investigadores;
std::map<std::string, Investigador*> map_investigadores;

void coleccion_guardarPublicacion(Publicacion* pub){
	publicaciones.push_back(pub);
	std::pair<std::string, Publicacion*> entry(pub->getDOI(), pub);
    map_publicaciones.insert(entry);
}
void coleccion_eliminarPublicacion(Publicacion* pub){
	publicaciones.remove(pub);
	map_publicaciones.erase(pub->getDOI());
}

void coleccion_guardarInvestigador(Investigador* inv){
	investigadores.push_back(inv);
	std::pair<std::string, Investigador*> entry(inv->getORCID(), inv);
    map_investigadores.insert(entry);
}

Investigador* coleccion_getInvestigador(std::string ORCID){
	return map_investigadores[ORCID];
}

Publicacion* coleccion_getPublicacion(std::string DOI){
	return map_publicaciones[DOI];
}

void parte_a(ArticuloRevista*& artRev1, ArticuloRevista*& artRev2){
	artRev1 = new ArticuloRevista(
		"10.1234/abc123 ",
		"Fundamentos de POO",
		DTFecha(15, 5, 2023),
		"Programación Avanzada",
		"Introduccion a los principios fundamentales de la programacion \
		orientada a objetos, explicando sus conceptos clave como clases, \
		objetos, herencia y polimorfismo."
	);
	artRev2 = new ArticuloRevista(
		"10.4567/jkl012",
		"Utilidad de diagramas UML",
		DTFecha(10, 2, 2024),
		"Modelado de Software",
		"Ejercicio empirico de como los diagramas UML pueden ayudar en el \
		proceso y documentacion de software, cubriendo los tipos mas \
		importantes utilizados, como clases."
	);
}

void parte_b(Libro*& libro1, Libro*& libro2){
	libro1 = new Libro(
		"10.2345/def456",
		"Patrones de Diseno en c++",
		DTFecha(20, 8, 2022),
		"Software Design",
		{"Diseno", "OOP", "Class"}
	);
	libro2 = new Libro(
		"10.5678/mno345",
		"Guia de UML",
		DTFecha(20, 8, 2022),
		"IEEE",
		{"Diagramas", "UML", "Software", "Modelado"}
	);
}

void parte_c(PaginaWeb*& paginaWeb1){
	paginaWeb1 = new PaginaWeb(
		"10.3456/ghi789",
		"Diagramas para Principiantes",
		DTFecha(20, 10, 2024),
		"www.umlparaprincipiantes.com",
		"En esta pagina web se presenta una gui completa sobre los \
		diagramas UML, abordando los diagramas de casos de uso, \
		de clases, de secuencia y de actividades."
	);
}

void parte_d(){
	std::cout << "Imprimiendo todas las publicaciones:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    
    for (auto pub : publicaciones) {
        DTRefer dt = pub->getDT();
        
        std::cout << dt << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
}

void parte_e(Investigador*& inv1, Investigador*& inv2){
	inv1 = new Investigador(
		"0000-0003-1234-5678",
		"Carla Oliveri",
		"Universidad de la Republica"
	);
	inv2 = new Investigador(
		"0000-0001-8765-4321",
		"Alberto Santos",
		"Instituto Tecnico",
	);
}

void parte_f(){
	std::cout << "Imprimiendo todos los investigadores:" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    
    for (auto inv : investigadores) {
        // Imprimir usando el método toString
        std::cout << inv->toString() << std::endl;
    }
    
    std::cout << "-----------------------------------" << std::endl;
}

void parte_g(){
}

void parte_h(){
}

void parte_i(){
}

void parte_j(){
}

void parte_k(){
}


int main() {
	std::cout << "parte_a" <<  std::endl;
	ArticuloRevista* artRev1;
	ArticuloRevista* artRev2;
	parte_a(artRev1, artRev2);
	coleccion_guardarPublicacion(artRev1);
	coleccion_guardarPublicacion(artRev2);
	std::cout << "parte_b" <<  std::endl;
	Libro* libro1;
	Libro* libro2;
	parte_b(libro1, libro2);
	coleccion_guardarPublicacion(libro1);
	coleccion_guardarPublicacion(libro2);
	std::cout << "parte_c" <<  std::endl;
	PaginaWeb* paginaWeb1;
	parte_c(paginaWeb1);
	coleccion_guardarPublicacion(paginaWeb1);
	std::cout << "parte_d" <<  std::endl;
	parte_d();
	std::cout << "parte_e" <<  std::endl;
	Investigador* inv1;
	Investigador* inv2;
	parte_e();
	coleccion_guardarInvestigador(inv1);
	coleccion_guardarInvestigador(inv2);
	std::cout << "parte_f" <<  std::endl;
	parte_f();
	std::cout << "parte_g" <<  std::endl;
	parte_g();
	std::cout << "parte_h" <<  std::endl;
	parte_h();
	std::cout << "parte_i" <<  std::endl;
	parte_i();
	std::cout << "parte_j" <<  std::endl;
	parte_j();
	std::cout << "parte_k" <<  std::endl;
	parte_k();
	std::cout << "cleanUp" <<  std::endl;
	cleanUp();
	std::cout << "fin" <<  std::endl;

	return 0;
}
