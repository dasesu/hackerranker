#include<stdio.h>


#include<stdlib.h>

struct abc {
  int value;
  int * ptr;
};

void Nullify_Min(int ** a, int ** b) {
      // YOUR CODE HERE
    if(**a < **b ){
      *a = NULL;
    }else{
      *b = NULL;
    }
}

int find_Maximum(int a, int b) {
      // YOUR CODE HERE
    if( a >= b ){
      return a;
    }else{
      return b;
    }
}


void swap(int * a, int * b) {
      // YOUR CODE HERE
      int aux;
      aux = *a;
      *a = *b;
      *b = aux;
}

int main() {
  struct abc obj1;
  struct abc obj2;
  obj1.ptr = & obj1.value;
  obj2.ptr = & obj2.value;

  scanf("%d", & obj1.value);
  scanf("%d", & obj2.value);

  swap(obj1.ptr, obj2.ptr);

  int check = find_Maximum(obj1.value, obj2.value);
  if (check == obj1.value) {
    printf("OBJ1 : %d", check);
  } else {
    printf("OBJ2 : %d", check);
  }

  Nullify_Min( & obj1.ptr, & obj2.ptr);
  printf("\n");
  if (obj1.ptr == NULL && * obj2.ptr == check) {
    printf("NULL");
  } else if (obj2.ptr == NULL && * obj1.ptr == check) {
    printf("NULL");
  } else {
    printf("NOT NULL");
  }

}