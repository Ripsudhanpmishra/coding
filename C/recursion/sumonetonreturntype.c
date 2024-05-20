 #include<stdio.h>
 int sum(int a){
    if(a==1 || a==0) return a; 
    int recAns = a + sum(a-1);
    return recAns; 
 }
 int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int add = sum(n);
    printf("The sum of %d digits is: %d",n,add);
    return 0;
 }