#include <iostream>
#include <string>
using namespace std;

class Etudiant {
private:
    string nom;
    string cin;
    float note1;
    float note2;
    float note3;

public:
    void setNom(string n) { nom = n; }
    string getNom() { return nom; }

    void setCin(string c) { cin = c; }
    string getCin() { return cin; }

    void setNote1(float n) { note1 = n; }
    float getNote1() { return note1; }

    void setNote2(float n) { note2 = n; }
    float getNote2() { return note2; }

    void setNote3(float n) { note3 = n; }
    float getNote3() { return note3; }

    float calculMoyenne() {
        return (note1 + note2 + note3) / 3;
    }

    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "CIN : " << cin << endl;
        cout << "Notes : " << note1 << " | " << note2 << " | " << note3 << endl;
        cout << "Moyenne : " << calculMoyenne() << endl;
    }
};

int main() {
    Etudiant e;
    e.setNom("Lamia");
    e.setCin("AB123456");
    e.setNote1(14);
    e.setNote2(16);
    e.setNote3(18);

    e.afficher();
    return 0;
}
