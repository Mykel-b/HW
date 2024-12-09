#include<stdio.h>
int main(){
float newtotal=0,subtotal=0,total_wt,total,pizza_p,tacos_p,salad_p;
int choice,checkout;
int size;
int ingredient;
int discount;


printf("Welcome to the fast food's ordering system!\n");
do{
printf("What do you want to order?\n");
printf("1=Pizza 2=Tacos 3=Salad\n");
scanf("%d",&choice);
switch(choice){
    case 1 : printf("Pizza\n");
    break;
    case 2 : printf("Tacos\n");
    break;
    case 3 : printf("Salad\n");
    break;
    default : printf("that's not on the menu\n");
    break;
}
if((choice==1) || (choice==2)){
printf("Choose the Size:\n");
printf("1=M 2=L 3=Xl\n");
scanf("%d",&size);
switch(size){
    case 1 : printf("M\n");
    break;
    case 2 : printf("L\n");
    break;
    case 3 : printf("Xl\n");
    break;
    default: printf("Sorry we don't have that:");
    break;
}
printf("Choose the ingredients:\n");
printf("1=3 Cheese 2=Chicken 3=Beef 4=Tuna\n");
scanf("%d",&ingredient);
switch(ingredient){
    case 1 : printf("3 Cheese\n");
    break;
    case 2 : printf("Chicken\n");
    break;
    case 3 : printf("Beef\n");
    break;
    case 4 : printf("Tuna\n");
    break;
    default: printf("Sorry we don't have that:");
    break;
}
}
printf("Are you a Senior or Student?\n");
printf("Senior=1  Student=2 None=3\n");
scanf("%d",&discount);
switch(discount){
    case 1 : printf("discount applied \n");
    break;
    case 2 : printf("discount applied\n");
    break;
    case 3 : printf("No discount applied\n");
    break;
    default: printf("Please choose the choices you were given!\n");
    break;
}
if(choice==1){
   total=pizza_p=10;
}
else if(choice==2){
    total=tacos_p=8;
}
else{
    total=salad_p=5;
}
if(size==1){
total=total+0;
}
else if(size==2){
    total=total+3;
}
else{ 
    total=total+6;

}
if(ingredient==1){
   total=total+5;
}    
else if(ingredient==2){
   total=total+7;
} 
else if(ingredient==3){
   total=total+9;
} 
else{
   total=total+6;
}
if(discount==1){
    total=total-(total*0.25);
}
else if(discount==2){
    total=total-(total*0.3);
}
printf("Are you still ordering?\n");
printf("YES=1 NO=0\n");
scanf("%d",&checkout);
subtotal=total+newtotal;
total=newtotal;
newtotal=subtotal;
}while(checkout==1);
total_wt=subtotal+(subtotal*0.19);
printf("Original price:$%.2f\n",subtotal);
printf("With TAX price:$%.2f\n",total_wt);
printf("Thanks for ordering!\n");
}