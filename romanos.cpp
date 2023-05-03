/* Copyright 2023 Gabriel Roberto - O robertonto.
===========================================*/

#include "./romanos.hpp"

int roman_value(char num_romano) {
  switch (num_romano) {
    case 'I':
      return 1;
    case 'V':
      return 5;
    case 'X':
      return 10;
    case 'L':
      return 50;
    case 'C':
      return 100;
    case 'D':
      return 500;
    case 'M':
      return 1000;
  }

  return -1;
}

int romanos_para_decimal(const char* num_romano) {
  int decimal = 0;
  int input_size = 0;

  while (num_romano[input_size] != '\0') {
    input_size++;
  }

  for (int i = 0; i < input_size; i++) {
    int current_value = roman_value(num_romano[i]);

    
    decimal += current_value;
  }

  return decimal;
}
