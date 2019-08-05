#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
  if (phrase == NULL)
  {
    return false;
  }
  char used_chars[] = "";
  int len = (int)strlen(phrase);
  for( int i = 0; i < len; i++){
     for (int j=0; j<i; j++){
			if (tolower(phrase[i]) == tolower(used_chars[j]))
      {
				return false;
			}
		}
     used_chars[i] = tolower(phrase[i]);
  };
  return true;
}
