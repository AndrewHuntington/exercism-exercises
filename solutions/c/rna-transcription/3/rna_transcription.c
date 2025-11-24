#include "rna_transcription.h"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *to_rna(const char *dna)
{
  size_t n = strlen(dna);
  char *rna = malloc(n + 1);

  if (!rna)
  {
    fprintf(stderr, "Error: Memory allocation failure.\n");
    exit(EXIT_FAILURE);
  }

  for (size_t i = 0; i < n; i++)
  {
    switch (dna[i])
    {
    case 'G':
      rna[i] = 'C';
      break;
    case 'C':
      rna[i] = 'G';
      break;
    case 'T':
      rna[i] = 'A';
      break;
    case 'A':
      rna[i] = 'U';
      break;
    default:
      free(rna);
      fprintf(stderr, "Error: Invalid character.\n");
      exit(EXIT_FAILURE);
    }
  }
  rna[n] = '\0';

  return rna;
}
