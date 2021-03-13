#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int Homem, Mulher; //Variáveis de homens e mulheres em sala de aula.
	float Total, PHomem, PMulher; //Total + Variáveis para percentagens de homens e mulheres.

	cout << "Porcentagem de alunos por genero:\n\n";

	cout << "Por favor, insira o numero de mulheres na classe: ";
	cin >> Mulher;
	cout << "Por favor, insira o numero de homens na classe: ";
	cin >> Homem;

	Total = Mulher + Homem;

	PMulher = float(Mulher / Total) * 100; //Cálculos para a porcentagem de mulheres na classe.
	PHomem = float(Homem / Total) * 100; //Cálculos para a porcentagem de homens na classe.

	cout << endl << fixed << setprecision(2); //decimais de dois dígitos para cout.
	cout << "A porcentagem de mulheres na classe e " << PMulher << "%";

	cout << endl << fixed << setprecision(2);
	cout << "A porcentagem de homens na classe e " << PHomem << "%\n";

	return 0;
}
