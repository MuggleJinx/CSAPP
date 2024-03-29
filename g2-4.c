#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, int len) {
  int i;
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}

void show_int(int x) {
  show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
  show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
  show_bytes((byte_pointer) &x, sizeof(void *));
}

// test
void test_show_bytes(int val) {
  int ival = val;
  float fval = (float) val;
  int *pval = &val;
  show_int(ival);
  show_float(fval);
  show_pointer(pval);
}

int main(int argc, char const *argv[]) {
  /* code */
  int a = 12345;
  test_show_bytes(a);
  return 0;
}
