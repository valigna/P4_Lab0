#include <../include/Publicacion.hh>
#include <set>
#include <string>

//Getters
std::string Publicacion::getDOI(){
    return this->DOI;
}
std::string Publicacion::gettitulo(){
    return this->titulo;
}
DTFecha Publicacion::getfecha(){
    return this->fecha;
}
std::set<Investigador*> getautores(){
    return this->autores;
}
DTRefer Publicacion::getDT(){
    DTRefer* DT = new DTRefer;
    DT->DOI=getDOI();
    DT->titulo=gettitulo();
    DT->fecha=getfecha();
    DT->autores=getautores();
    return DT;
}
//Setters
    void setDOI(std::string DOI){
        this->DOI=DOI;
        return;
    }
    void settitulo(std::string titulo){
        this->titulo=titulo;
        return;
    }
    void setfecha(DTFecha fecha){
        this->fecha=fecha;
        return;
    }
    void setautores(std::set<Investigador*> autores){
        this->autores=autores;
        return;
    }

