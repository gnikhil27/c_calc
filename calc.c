#include<stdio.h>
int comput(int val,int com){return (val<com+2)? val:comput(val-1,com)*val;}
int npow(int a,int b){return (b<2)?1:a*npow(a,b-1);}
int main(){
/***/int a,b;char op;
/***/while(1){
/********/scanf("%d %c %d",&a,&op,&b);
/********/switch(op){
/*************/case '+':printf("%d\n",a+b);break;
/*************/case '-':printf("%d\n",a-b);break;
/*************/case '*':printf("%d\n",a*b);break;
/*************/case '/':printf("%d\n",a/b);break;
/*************/case '%':printf("%d\n",a%b);break;
/*************/case '^':printf("%d\n",npow(a,b));break;
/*************/case '!':printf("%d\n",comput(a,1));break;
/*************/case 'c':case 'C':printf("%d\n",comput(a,b));break;
/*************/default:printf("Got %c Exiting\n",op);return 0;
}/***/}/***/}