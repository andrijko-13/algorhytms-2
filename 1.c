#include <stdio.h>
int main()
{
  int n;
  int c;
  int d;
  int a[100];
  int b[100];
  
  printf("Кількість чисел у масиві\n");
  scanf("%d", &n);
  
  while (n < 101 && n>0)
  {
  printf("Введіть масив елементів\n");
  for (c = 0; c < n ; c++)
  scanf("%d", &a[c]);
  // Перенесення елеменів в масив b, з кінця масиву a

  for (c = n - 1, d = 0; c >= 0; c--, d++)
  b[d] = a[c];
  // Перенесення оберненого масиву, замінюючи введений масив

  for (c = 0; c < n; c++)
  a[c] = b[c];

  printf("Оберненний масив:\n");
  for (c = 0; c < n; c++)
  printf("%d ", a[c]);
  
  return 0;
  }
}
