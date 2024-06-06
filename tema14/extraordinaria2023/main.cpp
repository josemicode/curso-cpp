#include <fstream>
#include <iomanip>
#include <vector>

#include "Coche.h"
#include "Conductor.h"

using namespace std;

void mostrarMenu();

ifstream f_coches = ifstream("coches.txt", ios::in);
ifstream f_conductores = ifstream("conductores.txt", ios::in);
ofstream f_resumen = ofstream("Resumen_Conductores.txt", ios::out);
ofstream f_coches_asig = ofstream("conductores_coches.txt", ios::out);

ostream &operator<<(ostream &os, Coche &coche)
{
	if (&os == &cout)
	{
		os << right << setw(7) << coche.getMarca() << " - " << coche.getModelo() << " " << left << setw(5) << coche.getAnho() << " " << coche.getMatricula();
	}
	else
	{
		os << coche.getMatricula() << "," << coche.getMarca() << "," << coche.getModelo();
	}
	return os;
}
istream &operator>>(istream &is, Coche &coche)
{
	is >> coche.matricula >> coche.marca >> coche.modelo >> coche.anho;
	return is;
}
ostream &operator<<(ostream &os, Conductor &conductor)
{
	// se recomienda verificar si el conductor tiene un coche asociado verificando si es diferente que nullptr
	if (&os == &cout)
	{
		os << right << setw(15) << conductor.getDNI() << " " << left << setw(5) << conductor.getNumViajes() << " " << right << setw(10) << setprecision(3) << conductor.getPuntuacion();
	}
	else
	{
		if (&os == &f_resumen)
		{
			if(conductor.getCoche() != nullptr){
				os << left << setw(25) << quoted(conductor.getNombreCompleto()) << " " << right << setw(16) << "Si" << " " << setw(12) << conductor.getPuntuacion() << " " << setw(17) << conductor.getNumViajes();
			}else{
				os << left << setw(25) << quoted(conductor.getNombreCompleto()) << " " << right << setw(16) << "No" << " " << setw(12) << "-" << " " << setw(17) << "-";
			}
		}
		else if (&os == &f_coches_asig)
		{
			if(conductor.getCoche() != nullptr){
				os << conductor.getDNI() << "," << conductor.getPuntuacion() << "," << conductor.getNumViajes() << "," << *conductor.getCoche();
			}else{
				os << conductor.getDNI() << "," << conductor.getPuntuacion() << "," << conductor.getNumViajes() << ",-,-,-";
			}
		}
	}
	return os;
}
istream &operator>>(istream &is, Conductor &conductor)
{
	is >> conductor.DNI >> quoted(conductor.nombre_completo) >> conductor.num_viajes >> conductor.puntuacion;
	return is;
}

int main()
{
	// Variables necesarias
	vector<Coche> coches;
	vector<Conductor> conductores;
	/* Contenedor Vector
	 * Agregar un elemento a un vector
	 * 1. nombre_vector.push_back(Clase(...));
	 * 2. Clase clase;
	 *    nombre_vector.push_back(clase);
	 * Acceder a un elemento de un array
	 *    nombre_vector.at(indice)
	 * Obtener el tama�o de un vector
	 *    nombre_vector.size()
	 */
	int opcion = 0;

	// Variables opcionales
	int cantidad_conductores_asignados = 0;

	cout << "Bienvenido a la empresa Coches VTC!" << endl
		<< "Seleccione una opcion numerica:" << endl;
	while (opcion != 8)
	{
		mostrarMenu();

		cin >> opcion;
		switch (opcion)
		{
		case 1:
		{
			// Cargar conductores desde un archivo
			cout << "Cargando todos los conductores de conductores.txt" << endl;
			if (f_conductores)
			{
				Conductor aux_conductor;
				while (f_conductores >> aux_conductor)
				{
					conductores.push_back(aux_conductor);
				}
			}

			cout << endl
				<< "-------------------------------------------------" << endl;
			break;
		}
		case 2:
		{
			// Cargar coches desde un archivo
			cout << "Cargando todos los coches de coches.txt" << endl;
			if (f_coches)
			{
				Coche aux_coche;
				string cabecera;
				f_coches >> cabecera >> cabecera >> cabecera >> cabecera;
				while (f_coches >> aux_coche)
				{
					coches.push_back(aux_coche);
				}
			}

			cout << endl
				<< "-------------------------------------------------" << endl;
			break;
		}
		case 3:
		{
			// Asignar coches a los conductores
			cout << "Se asignaran " << coches.size() << " coches entre " << conductores.size() << " diferentes conductores." << endl;

			for (int i = 0; i < coches.size(); i++)
			{
				conductores.at(i).setCoche(&coches.at(i));
			}

			cout << endl
				<< "-------------------------------------------------" << endl;
			break;
		}
		case 4:
		{
			// Mostrar los datos de todos los coches
			cout << "Existen " << coches.size() << " coches, mostrados a continuacion: " << endl;

			for (int i = 0; i < coches.size(); i++)
			{
				cout << coches.at(i) << endl;
			}

			cout << endl
				<< "-------------------------------------------------" << endl;
			break;
		}
		case 5:
		{
			// Mostrar los datos de todos los conductores
			cout << "Existen " << conductores.size() << " conductores, mostrados a continuacion: " << endl;

			for (int i = 0; i < conductores.size(); i++)
			{
				cout << conductores.at(i) << endl;
			}

			cout << endl
				<< "-------------------------------------------------" << endl;
			break;
		}
		case 6:
		{
			// Crear un archivo con los datos de todos los conductores
			cout << "A continuacion se creara un archivo con todos los conductores, mostrando si/no tiene un coche." << endl;
			
			if(f_resumen){
				f_resumen << left << setw(25) << "Nombre" << " " << right << setw(16) << "Tiene Coche" << " " << setw(12) << "Puntuacion" << " " << setw(17) << "Num. de Viajes" << endl;

				for(int i = 0; i < conductores.size(); i++){
					f_resumen << conductores.at(i) << endl;
				}
			}

			cout << endl
				<< "-------------------------------------------------" << endl;
			break;
		}
		case 7:
		{
			// Crear un archivo con los datos de todos los conductores y sus coches asignados
			cout << "A continuacion se creara un archivo con todos los conductores, informando de su coche asignado si lo hubiere." << endl;

			//? Structure identical to case 6, accessing f_coches_asig instead
			if(f_resumen){
				for(int i = 0; i < conductores.size(); i++){
					f_coches_asig << conductores.at(i) << endl;
				}
			}
			cout << endl
				<< "-------------------------------------------------" << endl;
			break;
		}
		case 8:
		{
			// Salir
			break;
		}
		default:
		{
			cout << endl
				<< "-------------------------------------------------" << endl;
			cout << "Opcion no valida" << endl;
			cout << endl
				<< "-------------------------------------------------" << endl;
			break;
		}
		}
	}

	cout << "Adios!" << endl;

	return 0;
}

void mostrarMenu()
{
	cout << "1. Cargar conductores desde un archivo" << endl;
	cout << "2. Cargar coches desde un archivo" << endl;
	cout << "3. Asignar coches a los conductores" << endl;
	cout << "4. Mostrar los datos de todos los coches" << endl;
	cout << "5. Mostrar los datos de todos los conductores" << endl;
	cout << "6. Crear un archivo con los datos de todos los conductores" << endl;
	cout << "7. Crear un archivo con los datos de todos los conductores y sus coches asignados" << endl;
	cout << "8. Salir" << endl;
}