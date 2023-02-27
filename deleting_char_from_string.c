#include <stdio.h>
#include <string.h> 
void main() {
  char first[100], second[20];
  int i, j, fsl, ssl, temp, check = 0;
  printf("Enter the String: ");
  gets(first);
  printf("Enter n characters from the above string: ");
  gets(second);
  fsl = strlen(first);
  ssl = strlen(second);
  for (i = 0; i < fsl; i++) {
    temp = i;
    for (j = 0; j < ssl; j++) {
      if (first[i] == second[j])
        i++;
    }
    check = i - temp;
    if (check == ssl) {
      i = temp;
      for (j = i; j < (fsl - ssl); j++)
        first[j] = first[j + ssl];
      fsl = fsl - ssl;
      first[j] = '\0';
    }
  }
  printf("\nNew String = %s", first);
}
----------------------------------------------
output:-
Enter the String: welcome to pps lab
Enter n characters from the above string: pps

New String = welcome to  lab
