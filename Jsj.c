#include  <stdio.h>
int Fun(int* a, int* b) {
    *a = 10;
    *b = 20;
    return 0;
}
int main (){
    int* ptr;
int a;
int b;
Fun(&a, &b);

}
