#include <stdio.h>
int main(void){ 
    int area_code;
    printf("Enter area code: ");
    scanf("%d", &area_code);

    switch(area_code){
      case 404 : case 470: case 678: case 770:
      printf("Major city is Atlanta\n"); break;
      case 706: case 762:
      printf("Major city is Columbus\n"); break;
      case 229: printf("Major city is Albany"); break;
      case 478: printf("Major city is Macon\n"); break;
      case 912: printf("Major city is Savannah\n"); break;
      default: printf("Area code not recognised\n"); break;
    }
    return 0;
}