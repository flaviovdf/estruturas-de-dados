#include <stdlib.h>
#include "complexo.h"

 complexo_t add(complexo_t x, complexo_t y) {
  complexo_t resultado = {.real=0.0, .imaginario=0.0};
  resultado.real = x.real + y.real;
  resultado.real = x.imaginario + y.imaginario;
  return resultado;
}

 complexo_t mult(complexo_t x, complexo_t y) {
  complexo_t resultado;
  //... código aqui
  return resultado;
}
