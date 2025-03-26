#include <string>
#include <set>
#include "../include/Investigador.hh"
using namespace std;
//Constructor
Investigador::Investigador(string orcid,string nombre,string institucion){
    this->ORCID = orcid;
    this->nombre = nombre;
    this->institucion = institucion;}
 //Destructor
	Investigador::~Investigador() {}
    // Getters
    string Investigador::getNombre(){
        return this->nombre;}
    string Investigador::getORCID(){
        return this->ORCID;}
    string Investigador::getInstitucion(){
        return this->institucion;
    }
     //Metodos
void Investigador::agregarPublicacion(Publicacion * p) {
    this->publicaciones.insert(p);
}
string Investigador::toString(){
    return ORCID + "->" + nombre + "/" + institucion;}

set<string> Investigador::listarPublicaciones(DTFecha desde, string palabra) {
    //todavia no funca pero si compila
    set<string> resultado;
return resultado;}
    
   