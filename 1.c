/**
 * @file 1.c
 *
 * @version 1.0
 * @date 2022-02-28
 *
 * Copyright (C) 1995-2022 by Beijing Siemens Cerberus Electronics Ltd.
 * niu bi plus
 */
#include "stdio.h"

/**
 * @brief main
 * @return int
 */
int main() {
  int i = 0;
  for (i = 0; i < 10; ++i) {
    printf("iteration is %d\n", i);
  }
  printf("\nabc");
  printf("\t def");
  printf("\n Copyright (C) 1995-2022 by Beijing Siemens Cerberus Electronics Ltd.");
  return 0;
}
