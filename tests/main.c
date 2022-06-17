#include <stdlib.h>
#include <stdio.h>
#include "fitsheader.h"

int main(){
  char mock_buffer[] = 
// 0000000000111111111122222222223333333333
// 0123456789012345678901234567890123456789
  "STRING  = 'FITS IO HEADER'              " \
  "                                        " \
  "NUMBER  =4                              " \
  "                                        " \
  "END                                     " \
  "                                        ";
  int number;
  char string[71];
  hgets(mock_buffer, "STRING", sizeof(string), &string);
  hgeti4(mock_buffer, "NUMBER", &number);
  printf("STRING: %s\n", string);
  printf("NUMBER: %d\n", number);

  hputs(mock_buffer, "STRING", "FITSIO HEADER LIBRARY");
  hputi4(mock_buffer, "NUMBER", number/2);

  hgets(mock_buffer, "STRING", sizeof(string), &string);
  hgeti4(mock_buffer, "NUMBER", &number);
  printf("STRING: %s\n", string);
  printf("NUMBER: %d\n", number);

  printf("buffer:\n`%s`\n", mock_buffer);
  return 0;
}