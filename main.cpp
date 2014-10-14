#include "Evaluador.cpp"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a + b; // suma los dos enteros
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b; // resta los dos enteros
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b; // multiplica los dos enteros
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b; //divide los dos enteros
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
	if(a>b) // retorna el valor de a si es mayor que b
    return a;
    else// de lo contrario retorna b
    return b;
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
   	if(a<b) // si a es menor retorna su valor
    return a;
    else // de lo contrario retorna b
    return b;
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if(a>b && a>c) // compara el elemento a con el b y c y si es mayor retorna el valor
    return a;
    else if(b>a && b>c) //de lo contrario compara el elemento b con el a y el c, y si b es mayor retorna el valor de b
    return b;
    else // de lo contrario c seria el elemento mayor
    return c;
}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
	arreglo[posicion]= valor; //almacena el valor en la posicion indicada
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion]; //retorna el valor que se encuentra en dicha posicion
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
	int temp = 0;
  for(int i=0; i<tamano-1; i++)// For para hacer el recorrido, se le resta 1 porque no necesita hacer el ultimo recorrido
       {
          for(int j=0; j < tamano-i-1; j++)//for que compara un elemento con el elemento de la posición adyacente, se le resta los recorridos realizddos y
            // 1 porque el ultimo elemento no se compara con otro.
          {
            if(arreglo[j] > arreglo[j+1])//compara el elemento de la posicion j con el de la siguiente posicion
            {  
                temp= arreglo[j+1]; //Si el elemento j es mayor, el elemento adyacente se almacena en una variable temporal
                arreglo[j+1]= arreglo[j];// la siguiente posicion almacena el elemento de la posicion anterior
                arreglo[j]=temp; // el elemento j almacena el valor de la variable temporal tomado de la siguiente posicion
                
            }
            
          }
    }  
        return arreglo[tamano-1];// retorna el valor mayor que esta en la ultima posicion pues se ordeno el arreglo de forma ascendente
    }


//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
	int menor=0;
	int temp = 0;
  for(int i=0; i<tamano-1; i++)// For para hacer el recorrido, se le resta 1 porque no necesita hacer el ultimo recorrido 
       {
          for(int j=0; j < tamano-i-1; j++)//for que compara un elemento con el elemento de la posición adyacente, se le resta los recorridos realizddos y
            // 1 porque el ultimo elemento no se compara con otro.
          {
            if(arreglo[j] > arreglo[j+1])//compara el elemento de la posicion j con el de la siguiente posicion
            {  
                temp= arreglo[j+1]; //Si el elemento j es mayor, el elemento adyacente se almacena en una variable temporal
                arreglo[j+1]= arreglo[j];// la siguiente posicion almacena el elemento de la posicion anterior
                arreglo[j]=temp; // el elemento j almacena el valor de la variable temporal tomado de la siguiente posicion
                
            }
            
          }
    }  
        return arreglo[0];// retorna el valor menor que esta en la primera posicion pues se ordeno el arreglo de forma ascendente
    }

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
	int suma = 0;
	int promedio = 0;
	for(int i = 0; i < tamano; i++)
	{
	suma = suma + arreglo[i]; //suma todos los elementos del arreglo
	promedio= suma/tamano;	//divide la suma entre la cantidad de elementos
	}
    return promedio;
}

int main ()
{
    //Funcion evaluadora
	evaluar();
    return 0;
}
