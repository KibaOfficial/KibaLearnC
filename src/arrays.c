/**
 * Copyright (c) 2023 KibaOfficial
 * 
 * This software is released under the MIT License.
 * https://opensource.org/licenses/MIT
 */

#include <stdio.h>

int main() {
  
  int average;
  double grades[3];

  grades[0] = 80;
  // TODO: definiere den fehlenden Grad, sodass der Durchschnitt 85 ergibt.
  grades[1] = 85;
  grades[2] = 90;

  average = (grades[0] + grades[1] + grades[2]) / 3;
  printf("Der Durchschnitt der 3 Grade beträgt: %d", average);
  
  return 0;
}