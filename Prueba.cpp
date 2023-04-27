#include<iostream> //Biblioteca donde se encuentra la función cout
#include "Vector3.h"
#include "Matrix3x3.h"
#include "Quaternion.h"
#include "RigidBody.h"
using namespace std;  //uso del espacio de nombre std

int main(){           //inicio de la función main
    Quaternion q=Quaternion();
	std::cout << q.GetVector().x << "\n";   //Imprimir en la consola
	return 1;                     //Al terminar, retornar 1.
}
