#include<stdio.h>
#include<stdlib.h>
int rec_gcd(int num1, int num2){
    if(num1 > num2)
        rec_gcd(num1-num2, num2);
    else if(num2 > num1)
        rec_gcd(num1, num2-num1);
    else
    return num1;
}

int ite_gcd(int num1, int num2){
    while (num1!=num2){
        if (num1 > num2)
            num1 = num1 - num2;
        else
            num2 = num2 - num1;
    }
    return num1;
}

int main(){
    int ch,num1, num2, gcd;
    printf("\nEnter two numbers to find GCD: \n");
    scanf("%d %d", &num1, &num2);
    while(1==1){
      printf("\nEnter your choice: ");
      printf("\n1.Recurive GCD\n2.Iterative GCD\n3.Exit\n");
      scanf("%d",&ch);
      switch(ch){
        case 1: gcd = rec_gcd(num1, num2);
                printf("\tGCD of %d and %d is %d\n", num1, num2, gcd);
                break;
        case 2: gcd = ite_gcd(num1,num2);
                printf("\tGCD of %d and %d is %d\n", num1,num2,gcd);
                break;
        case 3: exit(0);

      }
    }
    return 0;
}
