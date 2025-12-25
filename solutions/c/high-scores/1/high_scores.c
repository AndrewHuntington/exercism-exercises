#include "high_scores.h"
#include <stdlib.h>

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len)
{
  return scores[scores_len - 1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len)
{
  int32_t largest = scores[0];

  for (size_t i = 1; i < scores_len; i++)
  {
    if (scores[i] > largest)
      largest = scores[i];
  }

  return largest;
}

int32_t compare(const void *a, const void *b)
{
  int32_t arg1 = *(const int32_t *)a;
  int32_t arg2 = *(const int32_t *)b;

  return (arg1 < arg2) - (arg1 > arg2);
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len,
                          int32_t *output)
{
  int32_t *scores_copy = malloc(scores_len * sizeof(int32_t));
  for (size_t i = 0; i < scores_len; i++)
    scores_copy[i] = scores[i];

  qsort(scores_copy, scores_len, sizeof(int32_t), compare);

  size_t count = scores_len < 3 ? scores_len : 3;
  for (size_t i = 0; i < count; i++)
    output[i] = scores_copy[i];

  free(scores_copy);
  return count;
}
