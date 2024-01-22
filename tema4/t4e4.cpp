#include<iostream>

using namespace std;

	int main(){
		bool continuar = true, lleno = true;
		int eleccion, n, divisores=0, posAx;
		
		cout << "Introduzca la capacidad del vector: ";
		cin >> n;
		
		int v[n] = {0};
		
		do{
			cout << "\nElige entre: \n1. Nuevo elemento \n2. Eliminar elemento \n3. Mostrar vector \n4. Contar los multiplos de 5 \n5. Finalizar" << endl;
			cin >> eleccion;
			
			switch(eleccion){
				case 1:
					lleno = true;
					for(int i = 0; i<n; i++){
						if(lleno){
							if(v[i]==0){
								lleno = false;
								cout << "Introduzca un elemento: " << endl;
								cin >> v[i];
							}
						}
					}
					if(lleno){
						cout << "El vector esta completo" << endl;
					}
					break;
				case 2: //En el planteamionto, el vector no actualizara su tamanio
					cout << "Introduce la posicion a eliminar: " << endl;
					cin >> posAx;
					
					if((posAx<n)&&(v[posAx]!=0)){
						for(int i = posAx; i<n; i++){
							v[i] = v[i+1];
						}
						v[n-1]=0;
						
						cout << "Elemento borrado";
					}else{
						cout << "No se ha podido borrar el elemento" << endl;
					}
					/*lleno = true;
					for(int i = (n-1); i>=0; i--){
						if(lleno){
							if(v[i]!=0){
								lleno = false;
								v[i] = 0;
							}
						}
					}
					if(lleno){
						cout << "No se ha encontrado ningun elemento que eliminar" << endl;
					}else{
						cout << "El elemento ha sido eliminado" << endl;
					}
					*/
					break;
				case 3:
					cout << "\nVector: [ ";
					for(int i = 0; i<n; i++){
						cout << v[i] << " ";
					}
					cout << "]" << endl;
					break;
				case 4:
					for(int i = 0; i<n; i++){
						if((v[i]!=0)&&((v[i]%5)==0)){
							divisores++;
						}
					}
					cout << "El numero de multiplos de 5 contenidos actualmente en el vector es: " << divisores << endl;
					divisores = 0;
					break;
				case 5:
					continuar = false;
					break;
				default:
					cout << "Opcion invalida" << endl;
			}
		}while(continuar);
	}