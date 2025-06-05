# Toolbox Mister Death

Toolbox simples para técnicos de TI com várias funções úteis como ver IP público, ping, scan de portas, whois, monitoramento de rede, geração de senhas etc.

## Funcionalidades

- Ver IP público
- Ping e Traceroute
- Scan de portas com Nmap
- Whois e consulta DNS
- Monitor de rede (conexões ativas)
- Informações do sistema
- Gerador de senha aleatória
- Ver espaço em disco
- Visualizar processos ativos
- Testar velocidade de internet
- Ver portas locais abertas

## Instalação

Requer compilador C++ (ex: `g++`) e algumas ferramentas instaladas no sistema (Linux/WSL):

- `curl`
- `ping`
- `traceroute`
- `nmap`
- `whois`
- `dig`
- `ss`
- `neofetch` (opcional)
- `openssl`
- `df`
- `top`
- `speedtest-cli`

### Compilar

```bash
g++ toolbox.cpp -o toolbox
