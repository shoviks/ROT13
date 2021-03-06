/*
        Filename: rot13lib.c
        Description: rot13 implementation
*/

#include "rot13lib.h"

// rot13 cipher
void rot13(char * _input)
{
  if (*_input == 0)
    return;

  int i;
  for (i = 0; _input[i]; i++) {
    if (_input[i] >= 'a' && _input[i] <= 'm')
      {
	_input[i] += 13; continue;
      }
    if (_input[i] >= 'A' && _input[i] <= 'M')
      {
	_input[i] += 13; continue;
      }
    if (_input[i] >= 'n' && _input[i] <= 'z')
      {
	_input[i] -= 13; continue;
      }
    if (_input[i] >= 'N' && _input[i] <= 'Z')
      {
	_input[i] -= 13; continue;
      }
  }
}

