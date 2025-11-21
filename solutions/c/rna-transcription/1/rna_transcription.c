#include "rna_transcription.h"

#include <stdlib.h>
#include <string.h>

char *to_rna(const char *dna)
{
  char *rna = malloc((strlen(dna) + 1));
  if (!rna)
  {
    return NULL;
  }
  char *rna_start = rna;

  while (*dna)
  {
    switch (*dna)
    {
    case 'G':
      *rna = 'C';
      break;
    case 'C':
      *rna = 'G';
      break;
    case 'T':
      *rna = 'A';
      break;
    case 'A':
      *rna = 'U';
      break;
    default:
      free(rna_start);
      return NULL;
      break;
    }

    dna++;
    rna++;
  }
  *rna = '\0';

  return rna_start;
}
