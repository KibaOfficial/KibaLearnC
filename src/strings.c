#include <stdio.h>
#include <string.h>

int main() {
  // TODO: definiere first_name
  char *first_name = "John";

  // TODO: definiere last_name 
  char last_name[4] = {'D', 'o', 'e', '\0'};  // Initialisiere last_name mit "Doe"

  char name[100];

  /* Testcode */
  // printf("first_name: %s\n", first_name);
  if (strncmp(first_name, "John", strlen(first_name)) != 0) {
    printf("Test 1 failed!\n");
    return 1;
  }

  if (strncmp(last_name, "Doe", 3) != 0) {
    printf("Test 2 failed!\n");
    return 1;
  }

  last_name[0] = 'B';
  last_name[1] = 'o';
  last_name[2] = 'e';
  last_name[3] = '\0';  // Füge das Nullzeichen hinzu, um einen gültigen C-String zu haben

  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Boe", 100) == 0) {
    printf("Erledigt!\n");
    return 0;
  } else {
    printf("Test 3 failed!\n");
    return 1;
  }
}
