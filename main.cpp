//
// Created by felip on 17-05-2021.
//

#include <iostream>

using namespace std;

class Persona {
protected:
    string rut;
    string nombre;
    string fechaNac;
    string enfermedad;
    string dosis;
    string fPrimera;
    string fSegunda;
    string city;
    int region;
    bool is;
    bool is2;

public:
    Persona(const string rut, const string Name, const string city, const int region,const string fechaNac) {
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
    string getInfo();
~Persona(){
        cout<<"Destruyendo al objeto Persona"<<endl;

    }


};

string Persona::getInfo() {
    cout<<this->nombre<<" Rut: "<<this->rut<<" Ciudad "<<this->city<<endl;
    cout<<"Perteneciente a la region = "<< this->region<<endl;

}

int main (){
    Persona *p = new Persona("198252026","Felipe","Ovalle",4);
    Persona *p1 = new Persona("208746793","Marcos","Ovalle",4);

    p->getInfo();
    p1->getInfo();
    p->setFechaPrimer("12 de marzo de 2020");

    //cout<<"EL nombre de la persona es:"<<p->getNombre()<<endl;
    delete p;
}

