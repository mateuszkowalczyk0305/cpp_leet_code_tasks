#include <stdio.h>
#include <stdlib.h>

int **generate(int numRows, int *returnSize, int **returnColumnSizes) {
  if (numRows <= 0) {
    *returnSize = 0;
    *returnColumnSizes = NULL;
    return NULL;
  }

  *returnSize = numRows;
  *returnColumnSizes = (int *)malloc(numRows * sizeof(int));
  int **res = (int **)malloc(numRows * sizeof(int *));

  for (int i = 0; i < numRows; i++) {
    int cols = i + 1;
    (*returnColumnSizes)[i] = cols;

    res[i] = (int *)malloc(cols * sizeof(int));
    res[i][0] = 1;
    res[i][cols - 1] = 1;

    for (int j = 1; j < cols - 1; j++) {
      res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
    }
  }
  return res;
}

int main() {

  /* Wywołanie */
  int rows;
  int *colSizes;
  int **result = generate(3, &rows, &colSizes);

  /* Printowanie */
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < colSizes[i]; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  /* Zwolnienie pamięci */
  for (int i = 0; i < rows; i++) {
    free(result[i]);
  }
  free(result);
  free(colSizes);

  return 0;
}
