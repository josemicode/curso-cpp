#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "Persona.h"
#include "Tarjeta.h"

using namespace std;

template<typename container> int encontrarIndice(container personas, string dni_a_buscar);

/*
Aquí se inicializan flujos de lectura para los ficheros ["personas.txt", "tarjetas.txt"]
y el flujo de escritura para el fichero "resumen.txt"
*/

ifstream f_personas = ifstream("personas.txt", ios::in);
ifstream f_tarjetas = ifstream("tarjetas.txt", ios::in);
ofstream f_resumen = ofstream("resumen.txt", ios::out);

/*
Los bloques a continuación son las implementaciones de los métodos de operadores de flujo tanto para la entrada como la salida
correspondientes a sus declaraciones (como amigas) en las clases Persona y Tarjeta
Dichos métodos tienen en cuenta el formato que precisamos como resultante para el fichero resumen, así como el formato requerido para leer los ficheros
de los cuales vamos a tomar los datos (importante que corresponda, de otra manera no podremos obtener los objetos)
*/

istream& operator>>(istream& is, Persona& persona) {
	is >> persona.DNI >> quoted(persona.nombre);
	return  is;
}

istream& operator>>(istream& is, Tarjeta& tarjeta) {
	is >> tarjeta.ID >> tarjeta.nivel_acceso;
	return  is;
}

ostream& operator<<(ostream& os, Tarjeta& tarjeta) {
	os << right << setw(3) << tarjeta.getID() << " " << setw(3) << tarjeta.getNivelAcceso();
	return  os;
}

ostream& operator<<(ostream& os, Persona& persona) {
	os << left << setw(10) << persona.getDNI() << " " << setw(25) << persona.getNombre();
	return  os;
}

int main() {

	/*
	Instanciamos los contenedores de acceso aleatorio y almacenamiento eficiente
	(obviamente se tratan de vectores) para cada tipo de memoria que queremos almacenar
	*/

	vector<Persona> personas;
	vector<Tarjeta> tarjetas;
	vector<string> dnis;

	//Problema 1

	/*
	Habiendo comprobado que el fichero de personas es accesible, procederemos a, con la ayuda
	de un auxiliar de Persona otro para los strings de cabecera (un solo comando para expulsarlos del flujo),
	rellenar el vector de personas de forma iterada (índice indeterminado -> bucle indefinido while) con el método propio
	del contenedor push_back()
	*/

	if(f_personas){
		Persona aux_persona;
		string cabecera;

		f_personas >> cabecera >> cabecera;

		while(f_personas >> aux_persona){
			personas.push_back(aux_persona);
		}

	}

	//Problema 2

	/*
	Sigue las mismas pautas que el procedimiento anterior, a excepción de que es necesario obtener los dnis simultáneamente
	en el bucle. Además de la ausencia de cabecera
	*/

	if(f_tarjetas){
		Tarjeta aux_tarjeta;
		string aux_DNI;

		while(f_tarjetas >> aux_tarjeta){
			tarjetas.push_back(aux_tarjeta);
			f_tarjetas >> aux_DNI;
			dnis.push_back(aux_DNI);
		}
	}

	//Problema 3

	/*
	Simplemente hacemos uso de la función predefinida en el programa llamada encontrarIndice(), la cual toma un contenedor
	del tipo Persona y un string que buscará en este, devolviendo el índice en el cual se encuentra la coincidencia.
	Así, de ser dicho índice distinto de -1 (nulo y causante a errores a la hora del acceso a posiciones), añadiremos la tarjeta de la iteración
	dada a la posición en la que se encontraría realmente dicha tarjeta
	*/

	for(int i = 0; i < tarjetas.size(); i++){
		int index = encontrarIndice(personas, dnis.at(i));
		if(index!=(-1)){
			personas.at(index).setTarjeta(tarjetas.at(i));
		}
	}

	//Problema 4

	/*
	Finalmente, le pasamos al flujo de salida las personas y tarjetas de forma iterativa (necesitamos usar una tarjeta auxiliar por motivos de constantes)
	*/

	if(f_resumen){
		for(int i = 0; i < personas.size(); i++){
			Tarjeta tarjeta_aux = personas.at(i).getTarjeta();
			f_resumen << personas.at(i) << tarjeta_aux << endl;
		}
	}

	return 0;
}

template<typename container> int encontrarIndice(container personas, string dni_a_buscar) {
	int indice = -1, busqueda = 0;
	for (const auto& c : personas)
	{
		if (c == dni_a_buscar) {
			indice = busqueda;
			break;
		}
		busqueda++;
	}
	return indice;
}