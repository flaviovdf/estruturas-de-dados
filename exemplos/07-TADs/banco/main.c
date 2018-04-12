#include <stdio.h>

#include "conta_bancaria.h"
#include "transacao.h"

int main(void) {
  conta_bancaria_t *cc = nova_conta(0, 10.2);
  deposito(cc, 20);
}
