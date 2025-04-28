#include <iostream>
#include <string>
using namespace std;

class Data {
private:
    int dia, mes, ano;
public:
    Data() {
        dia = mes = ano = 0;
    }
    Data(int d, int m, int a) {
        dia = d;
        mes = m;
        ano = a;
    }
    int getDia() {
        return dia;
    }
    int getMes() {
        return mes;
    }
    int getAno() {
        return ano;
    }
    void setDia(int d) {
        dia = d;
    }
    void setMes(int m) {
        mes = m;
    }
    void setAno(int a) {
        ano = a;
    }
};

class Contato {
private:
    string email, nome, telefone;
    Data dtnasc;
public:
    Contato() {}

    Contato(string e, string n, string t, Data d) {
        email = e;
        nome = n;
        telefone = t;
        dtnasc = d;
    }

    string getEmail() {
        return email;
    }

    string getNome() {
        return nome;
    }

    string getTelefone() {
        return telefone;
    }

    Data getDataNasc() {
        return dtnasc;
    }

    void setEmail(string e) {
        email = e;
    }

    void setNome(string n) {
        nome = n;
    }

    void setTelefone(string t) {
        telefone = t;
    }

    void setDataNasc(Data d) {
        dtnasc = d;
    }

    int idade() {
        return 2025 - dtnasc.getAno();
    }
};

int main() {
    Contato contatos[5];

    for (int i = 0; i < 5; i++) {
        string nome, email, telefone;
        int dia, mes, ano;

        cout << "Digite o nome do contato " << i + 1 << ": ";
        getline(cin, nome);
        cout << "Digite o email: ";
        getline(cin, email);
        cout << "Digite o telefone: ";
        getline(cin, telefone);
        cout << "Digite o dia de nascimento: ";
        cin >> dia;
        cout << "Digite o mes de nascimento: ";
        cin >> mes;
        cout << "Digite o ano de nascimento: ";
        cin >> ano;
        cin.ignore(); // Limpar o '\n' que ficou no buffer

        Data dataNasc(dia, mes, ano);
        contatos[i] = Contato(email, nome, telefone, dataNasc);
    }

    cout << "\n=== CONTATOS CADASTRADOS ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "Contato " << i + 1 << ":\n";
        cout << "Nome: " << contatos[i].getNome() << endl;
        cout << "Email: " << contatos[i].getEmail() << endl;
        cout << "Telefone: " << contatos[i].getTelefone() << endl;
        cout << "Idade (em 2025): " << contatos[i].idade() << " anos\n";
        cout << "----------------------------\n";
    }

    return 0;
}
