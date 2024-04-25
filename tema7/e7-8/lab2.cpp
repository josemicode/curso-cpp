/*
José Miguel Ojeda Gutiérrez
Fecha: 2-26-2024
Docente: Manuel E. Gentive
Descripción: [Tarea de laboratorio - Tema memoria]
Ejercicios realizados: 2/2
*/

#include<iostream>
#include<stdlib.h>
#include"lab2.h"

using namespace std;

bool ingresarAlClub(int edad){ // Recibe un entero y devuelve un boolean
	
	bool entra = false; // Esta es la variable que luego retornaremos, inicializada a false por defecto
	static int aforo = 0; // Esta variable estática se encarga de mantener un registro del aforo actual del club, inicialmente es 0
	
	if(edad>=21){ // Este if comprueba si la edad de la persona que quiere entrar cumple el requisito mínimo (21 años)
		if(aforo<4){ // Además, el aforo total no deberá de sobrepasar el máximo (4 personas). Si ambas condiciones se dan, la variable booleana pasará a ser true y se incrementará el aforo
			entra = true;
			aforo++;
		}
	}
	
	return entra;
}

bool juegoAdivinar(bool juegoNuevo, int prediccion){ // Recibe un booleano y un entero, devuelve un boolean
	
	bool acierta = false; // Variable boolean a retornar, inicializada a false
	static int numero_a_adivinar = 0; // Este es el número a adivinar, es un entero estático para permitir múltiples intentos sin que se actualize (depende del boolean pasado como parámetro)
	
	if(juegoNuevo){ // De darse el caso en el que se quiera jugar otra partida, se modificará el número a adivinar
		numero_a_adivinar = rand()%10+1; // El método que utilizamos para asignarle un valor aleatorio se trata de una función (rand()) de la librería stdlib, módulo de 10 se utiliza para establecer un límite en la generación aleatoria, el +1 es simplemente para que el menor número posible no sea 0
	}
	
	if(prediccion==numero_a_adivinar){ // Esta estructura de condicionales anidados se utilizará para, en base a si el jugador acertó, cambiar la variable que retornaremos a true (si acierta) o por lo contrario indicarle por pantalla si se ha pasado o se quedó corto
		acierta = true;
	}else if(prediccion>numero_a_adivinar){
		cout << "Tu numero es mayor" << endl;
	}else{
		cout << "Tu numero es menor" << endl;
	}
	
	return acierta;
}