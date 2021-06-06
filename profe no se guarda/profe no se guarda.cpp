#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
const int n = 3;


int main()//puto el que lea
{
	int t = 0;//trimestre actual
	int nota;//nota
	float pro =0;
	float pro2[4];
	int z = 0, w = 0;
	for (int i = 0; i < 4; i = i + 1) {
		pro2[i] = 0;
	}
	int f = 0;//contador legajo
	while (f < n) {
		t = 0;
		while (t < 3) {
			cout << "Legajo: " << f + 1 << "\n";
			cout << "trimestre: " << t + 1 << "\n";
			cout << "pulse 1 para ingresar notas \n";
			cout << "pulse 2 para ver notas y sacar el promedio \n";
			cout << "pulse 3 para pasar al siguiente trimestre \n";
			cout << "pulse 4 para pasar al siguiente alumno \n";
			cin >> w;
			system("cls");
			switch (w) {

			case 1:
				cout << "Legajo: " << f + 1 << "\n";
				cout << "trimestre: " << t + 1 << "\n";
				cout << "ingrese nota: ";
				cin >> nota;
				z = z + 1;
				pro = pro + nota;
				system("cls");
				break;
			case 2:
				if (pro != 0) {
					pro2[t] = pro / z;
				}
				if (t == 3) {
					pro2[3] = (pro2[0] + pro2[1] + pro2[2]) / 3;
				}
				cout << "      | t1 | t2 | t3 | promedio | \n";
				cout << "notas | " << pro2[0] << "  | " << pro2[1] << "  | " << pro2[2] << "  | " << pro2[3] << "	| ";
				system("pause");
				system("cls");
				break;
			case 3:
				t = t + 1;
				pro = 0;
				z = 0;
				break;
			case 4:
				for (int i = 0; i < n; i = i + 1) {
					pro2[i] = 0;
				}
				pro = 0;
				t = 2;
				z = 0;
				break;
			}
		
		}
		f += 1;
	}
}


