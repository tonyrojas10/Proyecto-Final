#ifndef COLA_SRC_COLA_H_
#define COLA_SRC_COLA_H_
#include <iostream>
using namespace std;

  struct cola{
     	char factor;
     	struct cola *siguiente;
     	cola *inicio=NULL;
     	cola		*aux;
     	cola		*fin=NULL;
  void push (char q){ //insertar datos
     	             	aux=new(struct cola);
     	             	aux->factor=q;
     	             	if(inicio==NULL){
     	             		inicio=fin=aux;
     	             		aux->siguiente=NULL;
     	             	}else{
     	             		aux->siguiente=NULL;
     	             		fin->siguiente=aux;
     	             		fin=aux;
     	             	}
     				 }
     	void pop(){  //remover datos
     	  if(inicio!=NULL){
     		  fin=inicio;
     		  inicio=fin->siguiente;
     		  delete(fin);
     	  }else{
     		  cout <<"\n error cola vacia"<<endl;
     	  }
     	}
     	void top(){ //mostrar
    if(inicio!=NULL){
     	cout <<"ultimo valor ingresado es: \n"<<inicio->factor<<endl;

     	}
     	else{
     		cout<<"\n cola vacia     \n"<<endl;

     		}
     	}


     	void mostrar(){ //imprimir
     	     fin=inicio;
            int nombres=0;
     	     int totaldememoria=sizeof(cola);
     	     if (inicio!=NULL){
     	    	 cout <<"\nimprimir cola\n"<<endl;
     	    	 while (fin!=NULL)
     	    	 {
     	    		 cout << fin->factor;
     	    		 fin = fin->siguiente;
                   nombres ++;
     	    	 }
     	    	 cout <<"\n memoria de la cola \n"<<nombres*totaldememoria<<endl;
     	     }else{
     	    	 cout <<"\n cola vacia \n"<<endl;
     	    	 cout <<"\n memoria de la cola \n "<<totaldememoria<<endl;
     	     }
     	}
     	void vacio(){ //vaciar
     		if(inicio!=NULL){
     			while(inicio!=NULL)
     			{
     				fin=inicio;
     				inicio=fin->siguiente;
     				delete(fin);
     			}
     			cout <<"cola vaciada"<<endl;
     		}else{
     			cout <<"error cola vacia"<<endl;
     		}
     	}
	 };
#endif /* COLA_SRC_COLA_H_ */
