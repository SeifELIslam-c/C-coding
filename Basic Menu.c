#include stdio.h

int isPerfect(int n){
    int s=0;
    for(int i=1; i = n2; i++){
        s += i;
        if(s == n){
            return s;
        }
    }
    return s;
}

int areAmicable(int a, int b){
    int s1=0,s2=0;
    for(int i=1; ia;i++){
        if (s1 == b){
            break;
        }
        if(a % i == 0){
            s1 += i;
        }
    }
    for(int i=1; ib;i++){
        if (s2 == a){
            break;
        }
        if(b % i == 0){
            s2 += i;
        }
    }
    if(s1 == b && s2== a ){
        return 1;
    }
    return 0;
}

void interval(int n, int switcher){
    int A,B,k=0,arr[50];
    if(switcher == 1){
    printf(Enter A ); scanf(%d, &A);
    printf(Enter B ); scanf(%d, &B);
    for(int i=A; i=B; i++){
        if(isPerfect(i) == i){
            arr[k] = i;
            k++;
        }
    }
    printf(Perfect Numbers in your Interval is );
    for(int i=0; ik; i++){
        printf(%d , arr[i]);
    } printf(n);
  } else{
    printf(enter a ); scanf(%d, &A);
    printf(enter b ); scanf(%d, &B);
    for(int i=A;i=B;i++){
        for(int j=i+1;j=B;j++){
            if(areAmicable(i,j) == 1){
                printf(The pair is %d and %dn, i,j);
            }
        }
    }
  }
}

int main(){
    int choice,n;
    printf(   Welcome to EXO 3...n);
    while(1){
    printf(1-Check if Number is Perfectn);
   printf(2-Find Perfect Number in an intervaln);
   printf(3-Find Amicable pairs in an intervaln);
   printf(4-exit the programn);
   printf(enter your choice ); scanf(%d, &choice);
   switch(choice){
    case 1
    printf(enter a number ); scanf(%d, &n);
    if (n == isPerfect(n)){
        printf(your number %d is Perfectn, n); printf(n);
    } else{
        printf(your number %d is not Perfectn, n); printf(n);
    }
    break;

    case 2
    interval(n,1);
    break;

    case 3
    interval(n,0);
    break;

    case 4
    return 1;
    break;
    default
    printf(only between 1 & 4n);
   }
    }
}