#include <iostream>
#include <vector>

// Estrutura para representar os dados de uma lixeira
struct LixeiraData {
    int id;
    double nivelEnchimento;
    std::string localizacao;
};

// Banco de dados simples para armazenar dados das lixeiras
std::vector<LixeiraData> database;

// Função para adicionar dados de uma lixeira ao banco de dados
void AdicionarLixeira(int id, double nivelEnchimento, const std::string& localizacao) {
    LixeiraData lixeira;
    lixeira.id = id;
    lixeira.nivelEnchimento = nivelEnchimento;
    lixeira.localizacao = localizacao;
    database.push_back(lixeira);
}

int main() {
    // Simulação de dados das lixeiras
    AdicionarLixeira(1, 70.5, "Rua A");
    AdicionarLixeira(2, 45.2, "Rua B");
    AdicionarLixeira(3, 88.0, "Rua C");

    // Exibição dos dados armazenados no banco de dados
    std::cout << "Dados das Lixeiras:\n";
    for (const auto& lixeira : database) {
        std::cout << "ID: " << lixeira.id << ", Nível de Enchimento: " << lixeira.nivelEnchimento << ", Localização: " << lixeira.localizacao << "\n";
    }

    return 0;
}
