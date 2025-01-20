#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operatie;

    // Vraag de gebruiker om de invoer
    cout << "Voer het eerste getal in: ";
    cin >> num1;
    cout << "Voer het tweede getal in: ";
    cin >> num2;
    cout << "Voer de bewerking in (+, -, *, /): ";
    cin >> operatie;

    double resultaat;

    // Voer de bewerking uit op basis van de invoer
    switch (operatie) {
        case '+':
            resultaat = num1 + num2;
            cout << "Resultaat: " << num1 << " + " << num2 << " = " << resultaat << endl;
            break;
        case '-':
            resultaat = num1 - num2;
            cout << "Resultaat: " << num1 << " - " << num2 << " = " << resultaat << endl;
            break;
        case '*':
            resultaat = num1 * num2;
            cout << "Resultaat: " << num1 << " * " << num2 << " = " << resultaat << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultaat = num1 / num2;
                cout << "Resultaat: " << num1 << " / " << num2 << " = " << resultaat << endl;
            } else {
                cout << "Fout: Delen door nul is niet toegestaan." << endl;
            }
            break;
        default:
            cout << "Ongeldige bewerking. Gebruik +, -, * of /." << endl;
            break;
    }

    return 0;
}