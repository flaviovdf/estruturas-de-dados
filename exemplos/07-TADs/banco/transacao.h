#ifndef OPERACAO_H
#define OPERACAO_H

#define CONTA_VAZIA -1

typedef struct {
  int da_conta;   //conta que originou a operação
  int para_conta; //conta receptora da operação
  double valor;
} transacao_t;

/*
 * Função auxiliar para casos de transferências.
 * Inverte do da_conta com o para_conta
 */
transacao_t* inverte(transacao_t *);

void imprime_transacao(transacao_t *);

#endif
