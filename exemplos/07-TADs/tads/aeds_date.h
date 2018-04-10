#ifndef AEDS_DATE_H
#define AEDS_DATE_H

/*
 * Representa uma data com dia mês ano...
 */
typedef struct {
  int ano;
  int mes;
  int dia;
  int hora;
  int minutos;
  double segundos;
  char TZ[3];
} data_t;

/*
 * Intervalo de tempo em segundos entre 2 datas
 */
typedef double time_delta_t;


/*
 * Valida a data passada verificando se os campos tem valores corretos.
 * Por exemplo, 31 de Fevereiro é uma data errada.
 */
int valida_data(data_t *data);

/*
 * Adiciona um delta a uma data. 20 de Março de 2017 + 8640 segundos de delta
 * equivale a 21 de março
 */
data_t *soma_data_com_delta(data_t *data, time_delta_t td);

#endif
