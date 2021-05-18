//
// Created by felip on 17-05-2021.
//

#include <iostream>
#include <fstream>
#include <sstream>
#define NOMBRE_ARCHIVO "archivoCovid.csv"
using namespace std;

/*class Persona {
protected:
    string rut,nombre,fechaNac,enfermedad,dosis,fPrimera,fSegunda,city,region;
    bool is;
    bool is2;

public:
    Persona(const char* rut, const string Name, const string city, const int region,const string fechaNac) {
        this->nombre = Name ;
        this->city = city;
        this->region = region;
        this->rut = rut;
        this->fechaNac = fechaNac;

    }
    string getNombre(){
        return nombre;
    }
    bool setFechaPrimer(string f){

        if (this->fPrimera != ""){
            this->is = false;
            return is;
        }else{
            this->fechaNac = f;
            this->is = true;
            return is;
        }
    }
    string getInfoVaccine(){
        if(this->is && this->is2 ){
            cout<<"la dosis recibida es . "<< this->dosis << endl;
        }
    }
    string getInfo(){
        cout<<this->nombre<<" Rut: "<<this->rut<<" Ciudad "<<this->city<<endl;
        cout<<"Perteneciente a la region = "<< this->region<<endl;
    }
~Persona(){
        cout<<"Destruyendo al objeto Persona"<<endl;
    }


};*/

int main (){
    ifstream arch(NOMBRE_ARCHIVO);
    string line;
    char delimitador = ',';

    getline(arch,line);

    string rut,name,fnac,dis,vaccine,fech1,fech2,city,reg;
    while(getline(arch,line)){

        stringstream stream (line);

        getline(stream,rut, delimitador);
        getline(stream,name, delimitador);
        getline(stream,fnac,delimitador);
        getline(stream,dis,delimitador);
        getline(stream,vaccine,delimitador);
        getline(stream,fech1,delimitador);
        getline(stream,fech2,delimitador);
        getline(stream,city,delimitador);
        getline(stream,reg,delimitador);

        cout << "==================" << endl;
        cout << "Rut: " << rut << endl;
        cout << "Nombre: " << name << endl;
        cout << "fnac: " << fnac << endl;
        cout << "disease: " << dis << endl;
        cout << "Vaccine: " << vaccine << endl;
        cout << "fech1: " << fech1 << endl;
        cout << "fech3: " << fech2 << endl;
        cout << "city: " << city << endl;
        cout << "region: " << reg << endl;
    }

    arch.close();

}

