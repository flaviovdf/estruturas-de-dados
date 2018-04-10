#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct {
  double real;
  double imaginario;
} complexo_t;

/*
 * Adiciona 2 números complexos.
 * Definido como a soma do real e a soma do imag.
 */
complexo_t add(complexo_t x, complexo_t y);

/*
 * Multiplicação 2 números complexos
 * usando: (rx + ix) * (ry + iy) =
 *          rx * ry + rx * ix + ix * ry + ix * iy
 */
complexo_t mult(complexo_t x, complexo_t y);

#endif
