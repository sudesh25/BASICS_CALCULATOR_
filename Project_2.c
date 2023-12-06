// Basic Calculator 

#include<stdio.h>  // The library is for basic input output function.
int main() 
{
    int option,num1,num2,i=1; 
    float num_1,num_2; 
    while(i)          
     {
    printf("\n!****BASIC CALCULATOR****!\n\n"); 
    printf("Enter The Choice:\n1.Addtion\n2.Substraction\n3.Multiplication\n4.Division\n5.Exit\n");
    scanf("%d",&option);  // It will take input of the option 
     
    switch(option)       //With respect to input it will switch the case 
    { 
        case 1:          //it will perform the addtion code on the input operand 
        {   
            printf("Enter The First Number:\n"); 
            scanf("%d",&num1); 
            printf("Enter The Second Number:\n");  
            scanf("%d",&num2); 
            printf("The Addition Of %d and %d is %d\n",num1,num2,num1+num2);
            break;
        } 
        case 2:      //it will perform the Substraction code on the input operand 
        {    
            printf("Enter The First Number:\n"); 
            scanf("%d",&num1); 
            printf("Enter The Second Number:\n");  
            scanf("%d",&num2); 
            printf("The Substraction  Of %d and %d is %d\n",num1,num2,num1-num2);
            break;
            
        } 
        case 3:       //it will perform the Multiplication code on the input operand 
        {  
            printf("Enter The First Number:\n"); 
            scanf("%d",&num1); 
            printf("Enter The Second Number:\n");  
            scanf("%d",&num2); 
            printf("The Multiplication  Of %d and %d is %d\n",num1,num2,num1*num2);
            break;
        } 
        case 4:       //it will perform the Division code on the input operand 
        {
            printf("Enter The First Number:\n"); 
            scanf("%f",&num_1); 
            printf("Enter The Second Number:\n");  
            scanf("%f",&num_2); 
            printf("The Division Of %f and %fis %f\n",num_1,num_2,num_1/num_2);
            break;
        } 
        case 5:      
        {
            printf("!****Thank You****!"); 
            i=0; 
            break;
        } 
        default:
        {
          printf("Plese Enter The Valid Input");
        }
    
    } 
    }
}