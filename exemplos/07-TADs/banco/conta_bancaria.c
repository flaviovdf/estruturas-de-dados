#include <stdio.h>
#include <stdlib.h>

#include "conta_bancaria.h"
#include "transacao.h"

double transacao_de_maior_valor(int n, extrato_t extrato) {
  double maior_valor = extrato[0].valor;
  for (int i = 1; i < n; i++) {
      if (extrato[i].valor > maior_valor) {
          maior_valor = extrato[i].valor;
      }
  }
  return maior_valor;
}

conta_bancaria_t *nova_conta(int num, double saldo) {
  conta_bancaria_t *conta = malloc(sizeof(conta_bancaria_t));
  if (conta == NULL) {
    abort();
  }
  conta->numero = num;
  conta->saldo = saldo;
  return conta;
}

transacao_t *deposito(conta_bancaria_t *conta, double valor) {
  conta->saldo += valor;
  return NULL;
}

transacao_t *saque(conta_bancaria_t *conta, double valor) {
  conta->saldo -= valor;
  return NULL;
}

void imprime_conta(conta_bancaria_t *conta) {
  printf("Numero: %d\n", conta->numero);
  printf("Saldo: %f\n", conta->saldo);
}
