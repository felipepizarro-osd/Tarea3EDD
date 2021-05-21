//
// Created by felip on 17-05-2021.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 

#define NOMBRE_ARCHIVO "archivoCovid.csv"

using namespace std;

class Persona {
protected:
    string rut,nombre,fechaNac,enfermedad,dosis,fPrimera,fSegunda,city,region;
    bool is;
    bool is2;

public:
    Persona(const string rut, const string Name,const string fechaNac,const string dis,const string vac,const string f1,const string f2, const string city, const string region) {
        this->rut = rut;
        this->nombre = Name ;
        this->fechaNac = fechaNac;
        this->enfermedad = dis;
        this->dosis = vac;
        this->fPrimera = f1;
        this->fSegunda = f2;
        this->city = city;
        this->region = region;
    }
    string getNombre(){
        return nombre;}
    string getRut(){
        return rut;}
    string getFechaN(){
        return fechaNac;
    }string getDis(){
        return enfermedad;
    }string getdosis(){
        return dosis;
    }string getF1(){
        return fPrimera;
    }string getF2(){
        return fSegunda;
    }string getCity(){
        return city;
    }string getRegion(){
        return region;
    }
    int edad(){
      string a;
      for(int i=0;i<4;i++){
        a+=this->fechaNac[6+i];
      }
      int d = atoi(a.c_str());;
      return 2021 - d ;

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
    /*
    string getInfoVaccine(){
        if(this->is && this->is2 ){
            cout<<"la dosis recibida es . "<< this->dosis << endl;
        }
    }
    
    string getInfo(){
        cout<<this->nombre<<" Rut: "<<this->rut<<" Ciudad "<<this->city<<endl;
        cout<<"Perteneciente a la region = "<< this->region<<endl;
    }*/
~Persona(){
        cout<<"Destruyendo al objeto Persona"<<endl;
    }
};
//Nodos con objetos personas

class Node {
  public :
  Persona *elements;
  Node *next;

  Node (Persona *p){
    this->elements = p;
    this->next = NULL ;
  }

  void show(){
    cout<<this->elements->getNombre()<<endl;
    cout<<this->elements->getRut()<<endl;
    cout<<this->elements->getdosis()<<endl;
    cout<<this->elements->edad()<<endl;
    //cout<<"------------------------------------------------------"<<endl;

  }
  ~Node(){
    delete elements;
  }
  
};

//Pila en lista enlazada con objetos tipo Persona
class LinkedStackList{
  Node * first ;
  int Size ;
  public:
  LinkedStackList(){
    first = NULL;
    
  }
  bool Empty(){
    return first == NULL;
  }
  int size(){
    return Size;
  }
  void push(Persona *p){
    Node *node = new Node(p);
    Node *oldfirst = first; 
    first = node;
    first->next = oldfirst;
    Size ++;
  }
  Persona* pop(){
    Persona *p;
    if (Empty()){
      p = first->elements;
      first= first->next;
      Size--;
      
    }
    return p;
  }
  void show(){
    Node *aux = first ;
    while (aux != NULL ){
      aux->show();
      aux = aux->next;
      //cout<< "--------------------------------------------------------------------------"<<endl;
    } 
  }

  //TODO : destruir los nodos de las personas y la lista
  void destroy(){
    cout<< "destruyendo"<< endl;
    Node *n = first;
    while (n != NULL){
      Node * old = n;
      n = n->next;
      delete old;
    }
  }
};
//Nodo de edades con listas de personas
class NodoA{
  public :
  LinkedStackList *elementos;
  NodoA *next;
  string nombre;

  NodoA (LinkedStackList *lista){
    this->elementos = lista;
    next = NULL;
  }
  void show(){
    elementos->show();
  }

};
class linkedList{
  NodoA *first;
  public:
  linkedList(){
    first = NULL;
  }
  void push (LinkedStackList *l){
    NodoA * nuevo = new NodoA (l);
    if (first == NULL){
      this->first = nuevo;
    }
    else{
      NodoA *aux = this->first;
      while(aux->next != NULL){
        aux = aux->next;
      }
      aux->next = nuevo;
    }
  }
  void show(){
    NodoA *aux = first;
    while (aux != NULL){
      aux->show();
      aux = aux -> next;
      cout<<"-------------------------------------------------"<<endl;
    }
  }
  void destroy(){
    cout<< "destruyendo"<< endl;
    NodoA *n = first;
    while (n != NULL){
      NodoA * old = n;
      n = n->next;
      delete old;
    }
  }
};


//Lectura de archivoCovid

void lectura(linkedList *l ){

    ifstream arch (NOMBRE_ARCHIVO);
    string line;
    char delimitador = ',';

    LinkedStackList *listasPer  = new LinkedStackList();
    LinkedStackList *listasPer1  = new LinkedStackList();
    LinkedStackList *listasPer2  = new LinkedStackList();
    LinkedStackList *listasPer3  = new LinkedStackList();
    LinkedStackList *listasPer4  = new LinkedStackList();
    LinkedStackList *listasPer5  = new LinkedStackList();
    LinkedStackList *listasPer6  = new LinkedStackList();
    LinkedStackList *listasPer7  = new LinkedStackList();
    LinkedStackList *listasPer8  = new LinkedStackList();
    LinkedStackList *listasPer9  = new LinkedStackList();
    LinkedStackList *listasPer10  = new LinkedStackList();
    LinkedStackList *listasPer11  = new LinkedStackList();
    LinkedStackList *listasPer12  = new LinkedStackList();
    LinkedStackList *listasPer13  = new LinkedStackList();
    LinkedStackList *listasPer14  = new LinkedStackList();
    LinkedStackList *listasPer15  = new LinkedStackList(); 
    LinkedStackList *listasPer16  = new LinkedStackList();
    LinkedStackList *listasPer17  = new LinkedStackList();

    
    getline(arch,line);


    while(getline(arch,line)){

        stringstream stream (line);
        string rut,name,fnac,dis,vaccine,fech1,fech2,city,reg;

        getline(stream,rut, delimitador);
        getline(stream,name, delimitador);
        getline(stream,fnac,delimitador);
        getline(stream,dis,delimitador);
        getline(stream,vaccine,delimitador);
        getline(stream,fech1,delimitador);
        getline(stream,fech2,delimitador);
        getline(stream,city,delimitador);
        getline(stream,reg,delimitador);
        
        Persona *p = new Persona(rut,name,fnac,dis,vaccine,fech1,fech2,city,reg);

        //cout<<p->getNombre()<<endl;

        int pos = p->edad() / 5;
        //cout << pos << endl;
        if (pos > 18){
          pos = 17;
        }
        switch(pos){
          case 0:
            listasPer->push(p);
            break;
          case 1:
            listasPer1->push(p);
            break;
          case 2:
            listasPer2->push(p);
            break;
          case 3:
            listasPer3->push(p);
            break;
          case 4:
            listasPer4->push(p);
            break;
          case 5:
            listasPer5->push(p);
            break;
          case 6:
            listasPer6->push(p);
            break;
          case 7:
            listasPer7->push(p);
            break;
          case 8:
            listasPer8->push(p);
            break;
          case 9:
            listasPer9->push(p);
            break;
          case 10:
            listasPer10->push(p);
            break;
          case 11:
            listasPer11->push(p);
            break;
          case 12:
            listasPer12->push(p);
            break;
          case 13:
            listasPer3->push(p);
            break;
          case 14:
            listasPer14->push(p);
            break;
          case 15:
            listasPer15->push(p);           
            break; 
          case 16:
            listasPer16->push(p);
            break;
          case 17:
            listasPer17->push(p); 
            break;              
        }
    }
    arch.close();
    l->push(listasPer17);
    l->push(listasPer16);
    l->push(listasPer15);
    l->push(listasPer14);
    l->push(listasPer13);
    l->push(listasPer12);
    l->push(listasPer11);
    l->push(listasPer10);
    l->push(listasPer9);
    l->push(listasPer8);
    l->push(listasPer7);
    l->push(listasPer6);
    l->push(listasPer5);
    l->push(listasPer4);
    l->push(listasPer3);
    l->push(listasPer2);
    l->push(listasPer1);
    l->push(listasPer);
    

}


int main (){
  linkedList *l = new linkedList();
  LinkedStackList *listasPer  = new LinkedStackList();
  lectura(l);
  l->show();
 
}
