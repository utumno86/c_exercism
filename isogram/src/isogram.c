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
  char used_chars[26];
  int len = (int)strlen(phrase);
  for( int i = 0; i < len; i++){
    if( (phrase[i]>='a' && phrase[i]<='z') || (phrase[i]>='A' && phrase[i]<='Z')){
      used_chars[i] = tolower(phrase[i]);
      for (int j=0; j<i; j++){
        if (tolower(phrase[i]) == tolower(used_chars[j]))
        {
          return false;
        }
      }
    }
  };
  return true;
}
