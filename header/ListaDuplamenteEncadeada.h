//
//  ListaDuplamenteEncadeada.h
//
//  Criado por Eiji Adachi Medeiros Barbosa
//

#ifndef __ListaDuplamenteEncadeada__
#define __ListaDuplamenteEncadeada__

#include "No.h"
#include <string>

typedef enum {
    OK ,
    CABECA_NULA,
    CAUDA_NULA,
    CABECA_ANTERIOR,
    CABECA_PROXIMO_NULO,
    CAUDA_PROXIMO,
    CAUDA_ANTERIOR_NULO,
    CABECA_CAUDA,
    ENCADEAMENTO_INCORRETO
} StatusDaLista ;

class ListaDuplamenteEncadeada {
private:
    No<std::string>* cabeca;
    No<std::string>* cauda;
    int quantidade;
    
public:
    ListaDuplamenteEncadeada(void);
    ~ListaDuplamenteEncadeada(void);

    std::string recuperar(int);
    int buscar(std::string);
    
    bool inserirNaCabeca(std::string);
    bool inserirNaCauda(std::string);
    bool inserir(int, std::string);

    std::string removerDaCabeca(void);
    std::string removerDaCauda(void);
    std::string remover(int);

    No<std::string>* getCabeca(void);
    No<std::string>* getCauda(void);
    
    StatusDaLista checarConsistencia(void);
    
    void imprimir(void);
    
    bool vazia(void);
    int tamanho(void);
};

#endif 
