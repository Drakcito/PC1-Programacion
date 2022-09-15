#include <iostream>
using namespace std;

float calculo_precio(float pmodelo, char juego) {
	float precio;
	((modelo = 5) && (color == 'B')) && (precio = 300.00);
	((modelo = 5) && (color == 'M')) && (precio = 360.50);
	((modelo = 5) && (color == 'O')) && (precio = 330.00);
	((modelo = 4) && (color == 'B')) && (precio = 240.50);
	((modelo = 4) && (color == 'M')) && (precio = 330.00);
	((modelo = 4) && (color == 'O')) && (precio = 270.50);
	return precio;
}
float calculo_incremento(char pjuego) {
	float incremento;
	(pjuego=='M')&&(incremento=0.25);
	(pjuego=='F')&&(incremento=0);
	(pjuego=='C')&&(incremento=0.1);
	return incremento
}

int main() {
	int modelo;
	float precio, incremento_precio, precio_final;
	char juego, color;
	cout << "Ingrese el modelo: ";
	cin >> modelo;
	cout << "Color (B: blanco; M: metalizado; O: otros): ";
	cin >> color;
	cout << "Juego [Minecraft(M), Fortnite(F),CallofDuty(C)]: ";
	cin >> juego;
	juego = toupper(juego);
	color = toupper(color);
	
	precio= calculo_precio(modelo,color);
	incremento_precio=calculo_incrememento(juego)*precio;
	precio_final=precio+incremento_precio;
	
	cout << "Precio del equipo en $: " << precio_final;

	return 0;
}
