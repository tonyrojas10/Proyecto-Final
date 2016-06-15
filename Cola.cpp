//============================================================================
// Name        : 1.cpp
// Author      : Tony
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "cola.h"

int main() {
	cola cl;


    cl.push('A');
	cl.push('B');
	cl.push('C');
  cl.mostrar();
  cl.pop();
  cl.top();
  cl.vacio();




	return 0;
}
