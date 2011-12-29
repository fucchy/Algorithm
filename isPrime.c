#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isPrime(int x);

int main(int argc,char *argv[]){
  int i;
  int N=10;
  for(i=1;i<=N;i++){
    printf("%2d:%d\n",i,isPrime(i));
  }
  return EXIT_SUCCESS;
}

// isPrime()関数
// 仮引数xに対して、xが素数ならtrue、合成数ならfalseを返す
bool isPrime(int x){
  if(x<2){
    return false;
  }else if(x==2){
    return true;
  }else if(2<x){
    int i;
	if(x%2==0){
	  return false;
	}
	for(i=3;i*i<=x;i+=2){
	  if(x%i==0){
	    return false;
      }
    }
  }
  return true;
}

