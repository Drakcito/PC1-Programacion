#include <iostream>
using namespace std;

float incremento(float precio, char juego) {
	float incremento=0;
	(juego == 'M') && (incremento = 0.25 * precio);
	(juego == 'F') && (incremento = 0 * precio);
	(juego == 'C') && (incremento = 0.1 * precio);
	return incremento;
}
float calculo_precio(float precio,char juego) {
	return (incremento(precio, juego) + precio);
}

int main() {
	int modelo;
	float precio;
	char juego, color;
	cout << "Ingrese el modelo: ";
	cin >> modelo;
	cout << "Color (B: blanco; M: metalizado; O: otros): ";
	cin >> color;
	cout << "Juego [Minecraft(M), Fortnite(F),CallofDuty(C)]: ";
	cin >> juego;
	juego = toupper(juego);
	color = toupper(color);

	(modelo = 5) && (color == 'B') && (precio = 300.00);
	(modelo = 5) && (color == 'M') && (precio = 360.50);
	(modelo = 5) && (color == 'O') && (precio = 330.00);
	(modelo = 4) && (color == 'B') && (precio = 240.50);
	(modelo = 4) && (color == 'M') && (precio = 330.00);
	(modelo = 4) && (color == 'O') && (precio = 270.50);
	
	cout << "Precio del equipo en $: " << calculo_precio(precio, juego);

	return 0;
}