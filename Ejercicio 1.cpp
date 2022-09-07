#include <iostream>
using namespace std;
int main() {
	long long code;
	int merca_id, merca_ved, hora, minuto, segundo;

	cout << "Ingrese el codigo de barras: ";//HHMMSSTTTTTE
	cin >> code;

	hora = (code / 10000000000);
	code = (code % 10000000000);

	minuto = (code / 100000000);
	code = (code % 100000000);

	segundo = (code / 1000000);
	code = (code % 1000000);

	merca_id = (code / 10);
	merca_ved = code % 10;

	cout << "Hora de venta: " << hora << endl;
	cout << "Minuto de venta: " << minuto << endl;
	cout << "Segundos de venta: " << segundo << endl;
	cout << "Mercancia de identificacion: " << merca_id << endl;
	cout << "Mercancia vendida (1 por E-commerce; 0, no venta por E-commerce): " << merca_ved << endl;

	return 0;
}
