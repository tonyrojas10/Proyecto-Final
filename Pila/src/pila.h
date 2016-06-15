

#ifndef PILA_SRC_PILA_H_
#define PILA_SRC_PILA_H_
#include <iostream>
using namespace std;


struct pila{
	char valor;
	struct pila *siguiente; //NODOS

	struct pila *inicio=NULL;
	struct pila *fin;
		void push(char p){  //push
         fin = new (struct pila);
			 fin->valor= p;
	if (inicio==NULL){
			inicio=fin;
			fin->siguiente=NULL;

		}else{
               fin->siguiente=inicio;
               inicio=fin;

		}
	}
	void pop(){   //pop

		if(inicio!=NULL){
			fin=inicio;
					inicio=fin->siguiente;
					delete (fin);
	}else{
		cout <<"No hay datos"<<endl;
	}

	}


	void top(){
		if(inicio!=NULL){
		cout <<"la cima de la pila:  \n"<<inicio->valor<<endl;
		}else {
			cout <<"\n pila vacia  \n"<<endl;
			while(fin !=NULL){
				cout << fin->valor;
				fin =fin->siguiente;
			}
		}
		}

void mostrar(){
			fin=inicio;
            int nombres=0;
            int totaldememoria=sizeof(pila);
            if(inicio!=NULL){
				cout <<"imprimiendo pila"<<endl;
                while(inicio!=NULL)
                {
					cout <<inicio->valor<<endl;
					inicio=inicio->siguiente;
					nombres++;
				}
				cout <<"\n memoria de la pila: "<<totaldememoria*nombres<<endl;
            }else{
            	    cout <<"pila vacia \n"<<endl;
            	    cout <<"\n memoria de pila: "<<totaldememoria<<endl;
            	}
            }
void vacio(){
              if (inicio!=NULL){
            	  while (inicio!=NULL){
            		  fin =inicio;
            		  inicio=fin->siguiente;
            		  delete(fin);
            	  }
            	  cout <<"la pila ha sido vaciada\n"<<endl;
              }else{
            	  cout <<"equivocacion no se encuentra ningun elemento en la pila"<<endl;
              }
}
};
#endif /* PILA_SRC_PILA_H_ */
