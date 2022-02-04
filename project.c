#include<stdio.h>
int main()
{
    printf("--------------------------------------------------\n");
    printf(" .. \n");
    printf(" || \n");
    printf(":-----:\n");
    printf("|=====|\n");
    printf("|oo8oo|\n");
    printf("|o8o8o|   Welcome to\n");
    printf("'-----'   Bubble Tea Cafe : )\n");
    printf("--------------------------------------------------\n");
    printf("\nMenu                     M     L\n\n");
    printf("0:Black tea               30    40\n");
    printf("1:Green tea               30    40\n");
    printf("2:Thai tea                30    40\n");
    printf("3:Passion fruit green tea 45    55\n");
    printf("4:Taro smoothie tea       40    50\n");
    printf("5:Peach tea               35    45\n");
    printf("\nFlavors\n\n");
    printf("0:Normal                  +0\n");
    printf("1:Milk                    +5\n");
    printf("2:Honey                   +5\n");
    printf("3:Brown sugar             +10\n");
    printf("\nToppings\n");
    printf("0:Boba                    +5    (2 units left)\n");
    printf("1:Popping boba            +15   (0 units left)\n");
    printf("2:Jelly                   +10   (0 units left)\n");
    printf("3:Pudding                 +10   (0 units left)\n");
    
char *basetea[6]={"Black tea","Green tea","Thai tea","Passion fruit green tea","Taro smoothie tea","Peach tea"};
int price_basetea[6]={30,30,30,45,40,35};
char *flavor[4]={"Normal","Milk","Honey","Brown sugar"};
int price_flavor[4]={0,5,5,10};
char *topping[4]={"Boba","Popping boba","Jelly","Pudding"};
int price_topping[4]={5,15,10,10};
int stock_topping[4]={2,0,0,0};

int allstock,i;
char bt,size,fv,con_top,add,how_top,top_1,top_2;

int machine_cash[5]={100,50,20,10,5};
int money_machine_cash[5]={3,6,5,11,4};
char user_input_cash[5]={0,0,0,0,0};
int user_input_cash_more[5]={0,0,0,0,0};
int cash[5]={0,0,0,0,0};
int change[5]={0,0,0,0,0};

// //basetea
do{
printf("Please select you base tea (enter 'q' to exit): ");
scanf("%c", &bt);
int ch;
    while((ch = getchar()) != '\n' && ch != EOF);
if(bt=='q')
    break;
if(bt>='0' && bt<='5')
    break;
else
    printf("Sorry, the selected item is not available.\n");
}while(bt<'0' || bt>'5');
if(bt=='q'){
    printf("Thank you ,See you again\n");   
}

//size
do{
    printf("Please select the size meduim (m) or large (l)? (enter 'q' to exit): ");
    scanf("%c", &size);
    int ch;
    while((ch = getchar()) != '\n' && ch != EOF);
    if(size=='q')
        break;
    if(size=='m' || size=='l')
        break;
    printf("Sorry, the selected item is not available.\n");
}while(size!='m' || size!='l');
if(size=='q'){
    printf("Thank you ,see you again\n");
}

//flavor
do{
    printf("Please select your flavors (enter 'q' to exit): ");
    scanf("%c", &fv);
    int ch;
    while((ch = getchar()) != '\n' && ch != EOF);
    if(fv=='q')
        break;
    if(fv>='0' || fv<='3')
        break;
    else
    printf("Sorry, the selected item is not available.\n");
}while(fv<='0' || fv>='3');
if(fv=='q'){
    printf("Thank you ,see you again\n");
}

// stock topping
allstock=stock_topping[0]+stock_topping[1]+stock_topping[2]+stock_topping[3];
if(allstock==0){
    printf("Sorry, topping is out of stock!\n");
    do{
        printf("Do you want to continue? (y/n) : \n")
        scanf("%c", &con_top);
        int ch;
        while((ch = getchar()) != '\n' && ch != EOF);
        if(con_top=='y' || con_top=='n')
            break;
        else
            printf("Sorry, the selected item is not available.\n");
    }while(con_top!='y' || con_top!='n');
        if(con_top=='n'){
            printf("Thank you, see you again\n");
        }
}else if(allstock==1){
    for(i=0;i<4;i++){
        if(stock_topping[i]==1){
            printf("Sorry, we have only %c.\n", topping[i]);
            do{
            printf("Do you want to add? (y/n): \n");
            scanf("%c", &add);
            int ch;
            while((ch = getchar()) != '\n' && ch != EOF);
            if(add=='y' || add=='n')
            break;
            printf("please select (y/n).\n");
            }while(add!='y' || add!='n');
}else{
//how much topping
    do{
    printf("How many toppings do you like (maximum 2) (enter 'q' to exit): ");
    scanf("%c", &how_top);
    int ch;
    while((ch = getchar()) != '\n' && ch != EOF);
    if(how_top=='q'){
        break;
    }
    if(how_top>='0' && how_top<='2'){
        break;
    }
    printf("Sorry, the selected item is not available.\n");
    }while(how_top<'0' || how_top>'2');
        if(how_top=='q'){
        printf("Thank you ,see you again\n");
}if(how_top=='1' || how_top=='2'){
    //topping1
    do{
    printf("Please select your topping1 (enter 'q' to exit): ");
    scanf("%c", &top_1);
    int ch;
    while((ch = getchar()) != '\n' && ch != EOF);
    if(top_1=='q')
        break;
    if(top_1<'0' || top_1>'3'){
        printf("Sorry, the selected item is not available.\n");
    }else{
    // printf("is invalid!\n");
    // }while(top_1<='0' || top_1>='3');
    // if(top_1=='q'){
    //     printf("Thank you ,see you again\n");
    // }
}


        }
    }
}    





// //topping1


// //topping2
// do{
//     printf("Please select your topping2 (enter 'q' to exit): ");
//     scanf("%c", &top_2);
//     int ch;
//     while((ch = getchar()) != '\n' && ch != EOF);
//     if(top_2=='q')
//         break;
//     if(top_2='0' || top_2<='3')
//         break;
//     printf("is invalid!\n");
// }while(top_2<='0' || top_2>='3');
// if(top_2=='q'){
//     printf("Thank you ,see you again\n");
// }


return 0;
}