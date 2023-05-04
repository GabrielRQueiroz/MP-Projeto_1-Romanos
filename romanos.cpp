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

bool exceeded_consecutive(char num_romano, int consecutive) {
  if (num_romano == 'I' || num_romano == 'X' || num_romano == 'C') {
    return consecutive > 3;
  }

  if (num_romano == 'V' || num_romano == 'L' || num_romano == 'D') {
    return consecutive > 1;
  }

  return false;
}

bool valid_successor(char num_romano, char successor) {
  if (num_romano == 'I') {
    return successor == 'V' || successor == 'X';
  }

  if (num_romano == 'X') {
    return successor == 'L' || successor == 'C';
  }

  if (num_romano == 'C') {
    return successor == 'D' || successor == 'M';
  }

  return false;
}

int romanos_para_decimal(const char* num_romano) {
  int decimal = 0;
  int input_size = 0;
  int consecutive = 1;

  while (num_romano[input_size] != '\0') {
    input_size++;
  }

  for (int i = 0; i < input_size; i++) {
    int current_value = roman_value(num_romano[i]);

    if (i > 0 && num_romano[i] == num_romano[i - 1]) {
      consecutive++;
    } else {
      consecutive = 1;
    }

    if (exceeded_consecutive(num_romano[i], consecutive)) {
      return -1;
    }

    if (i > 0 && current_value > roman_value(num_romano[i - 1])) {
      decimal +=
        current_value - roman_value(num_romano[i - 1]);
    } else if (current_value < roman_value(num_romano[i + 1])) {
      // Se o caractere atual for menor que o próximo, ele será subtraído
      // na subtraído próxima iteração
      continue;
    } else {
      decimal += current_value;
    }
  }

  return decimal;
}
