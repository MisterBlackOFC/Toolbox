#include <iostream>
#include <cstdlib>  
#include <string>

using namespace std;

const string vermelho = "\033[91m";
const string verde = "\033[92m";
const string amarelo = "\033[93m";
const string azul = "\033[94m";
const string magenta = "\033[95m";
const string cyan = "\033[96m";
const string branco = "\033[97m";
const string reset = "\033[0m";

void banner() {
    system("clear");
    cout << cyan <<
R"(___________  ______________________________
      .'           .'                              .'
   .'           .'                              .'  |
.'___________.'______________________________.'     |
|.----------.|.-----___-----.|.-----___-----.|      |
|]          |||_____________|||_____________||      |
||          ||.-----___-----.|.-----___-----.|      |
||          |||_____________|||_____________||      |
||          ||.-----___-----.|.-----___-----.|      |
|]         o|||_____________|||_____________||      |
||          ||.-----___-----.|.-----___-----.|      |
||          |||             |||_____________||      |
||          |||             ||.-----___-----.|     .'
|]          |||             |||             ||  .' o)
||__________|||_____________|||_____________||'
''----------'''-----------------------------''
            (o)LGB                        (o)

" << verde << "Toolbox" << endl;
    cout << magenta << "Software desenvolvido por Mister Death" << reset << endl << endl;
}

void menu() {
    cout << azul;
    cout << "[1] Ver IP Público\n";
    cout << "[2] Ping + Traceroute\n";
    cout << "[3] Scan de Portas\n";
    cout << "[4] Whois + DNS\n";
    cout << "[5] Monitor de Rede\n";
    cout << "[6] Info do Sistema\n";
    cout << "[7] Gerar Senha\n";
    cout << "[8] Ver espaço em disco\n";
    cout << "[9] Ver processos ativos\n";
    cout << "[10] Testar velocidade de internet\n";
    cout << "[11] Ver portas locais abertas\n";
    cout << "[0] Sair\n";
    cout << reset;
}

int main() {
    string escolha;
    string alvo, dom, ip, pasta, nome;

    while (true) {
        banner();
        menu();

        cout << branco << "Escolha uma opção: " << reset;
        getline(cin, escolha);

        if (escolha == "1") {
            system("curl ifconfig.me");
        }
        else if (escolha == "2") {
            cout << "IP ou domínio: ";
            getline(cin, alvo);
            system(("ping -c 4 " + alvo).c_str());
            system(("traceroute " + alvo).c_str());
        }
        else if (escolha == "3") {
            cout << "IP alvo: ";
            getline(cin, ip);
            system(("nmap " + ip).c_str());
        }
        else if (escolha == "4") {
            cout << "Domínio ou IP: ";
            getline(cin, dom);
            system(("whois " + dom).c_str());
            system(("dig " + dom + " any").c_str());
        }
        else if (escolha == "5") {
            system("ss -tunap");
        }
        else if (escolha == "6") {
            system("neofetch || uname -a");
        }
        else if (escolha == "7") {
            system("openssl rand -base64 16");
        }
        else if (escolha == "8") {
            system("df -h");
        }
        else if (escolha == "9") {
            system("top");
        }
        else if (escolha == "10") {
            system("speedtest-cli");
        }
        else if (escolha == "11") {
            system("ss -tuln");
        }
        else if (escolha == "0") {
            cout << vermelho << "Saindo..." << reset << endl;
            break;
        }
        else {
            cout << vermelho << "Opção inválida." << reset << endl;
        }

        cout << "\nPressione ENTER para continuar...";
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
      }
