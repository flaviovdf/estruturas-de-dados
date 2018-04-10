#include <stdio.h>
#include <stdlib.h>

#include "transacao.h"

transacao_t *inverte(transacao_t *transacao) {
  transacao_t *nova_operacao = malloc(sizeof(transacao_t));
  if (nova_operacao == NULL) {
    abort();
  }
  (*nova_operacao).da_conta = (*transacao).para_conta;
  (*nova_operacao).para_conta = (*transacao).da_conta;
  (*nova_operacao).valor = -(*transacao).valor;
  return nova_operacao;
}

void imprime_transacao(transacao_t *transacao) {
  printf("De: %d\n", (*transacao).da_conta);
  printf("Para: %d\n", (*transacao).para_conta);
  printf("Valor: %.2f\n", (*transacao).valor);
}
