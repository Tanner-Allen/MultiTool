#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char user[50], pass[50];
} login;

void LoginPage(login a1) {
   printf("Welcome %s!", a1.user);
}

int main() {
  login a1;
  
  printf("Enter Your Username: ");
  scanf("%s", a1.user);
  printf("Enter Your Password: ");
  scanf("%s", a1.pass);

  if(strcmp(a1.user, "flagged") == 0 && strcmp(a1.pass, "uujj@CRq3gwi") == 0) {
    LoginPage(a1);
  }
  else {
    printf("Login Failed. Try Again!");
  }
}
