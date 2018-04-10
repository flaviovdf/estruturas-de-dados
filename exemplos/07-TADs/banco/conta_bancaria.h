#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include "transacao.h"

#define TAMANHO_INICIAL 30
typedef transacao_t extrato_t[TAMANHO_INICIAL];

typedef struct {
    int numero;
    double saldo;
    extrato_t extrato;
} conta_bancaria_t;

/*
 * Cria uma nova conta bancaria com o devido número de conta e valor de
 * saldo.
 */
conta_bancaria_t *nova_conta(int numero, double saldo);

/*
 * Faz um deposito e retorna a operação que identifica este deposito
 */
transacao_t *deposito(conta_bancaria_t *conta, double valor);

/*
 * Realiza um saque da conta corrente e retorna a operação que identifica o
 * saque.
 */
transacao_t *saque(conta_bancaria_t * conta, double valor);

/*
 * Realiza uma transferencia entre duas contas bancarias retornando a operação
 * onde o deConta é a primeira conta e o paraConta é a segunda.
 */
transacao_t *transferencia(conta_bancaria_t *de_conta,
                           conta_bancaria_t *para_conta, double valor);

/*
 * Imprime a conta bancária.
 */
void imprime_conta(conta_bancaria_t *conta);

#endif
