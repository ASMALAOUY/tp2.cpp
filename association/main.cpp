#include <iostream>
#include <string>
using namespace std;

class Etudiant {
private:
    string nom;
    string cin;
    float note;

public:
    void setNom(string n) { nom = n; }
    string getNom() { return nom; }

    void setCin(string c) { cin = c; }
    string getCin() { return cin; }

    void setNote(float n) { note = n; }
    float getNote() { return note; }

    void afficher() {
        cout << "Étudiant : " << nom << " (CIN: " << cin << ") - Note : " << note << endl;
    }
};

class Filiere {
private:
    string nomFiliere;
    Etudiant etudiant;

public:
    void setNomFiliere(string nom) { nomFiliere = nom; }
    string getNomFiliere() { return nomFiliere; }

    void setEtudiant(Etudiant e) { etudiant = e; }

    void afficher() {
        cout << "Filière : " << nomFiliere << endl;
        etudiant.afficher();
    }
};

int main() {
    Etudiant e;
    e.setNom("Yassine");
    e.setCin("C78912");
    e.setNote(15.5);

    Filiere f;
    f.setNomFiliere("Genie Informatique");
    f.setEtudiant(e);

    f.afficher();
    return 0;
}
