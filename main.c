#include <stdio.h>
#include <stdlib.h>
  void menu(){




            printf("::MENU::\n");
            printf("Sr.no  List    Rupees\n");
            printf("01. Samosa    Rs:25\n");
            printf("02. Dosa      Rs:40\n");
            printf("03. Tea       Rs:10\n");
            printf("04. coffee    Rs:15\n");
            printf("05. Pizza     Rs:40\n");
            printf("06. Sandwich  Rs:35\n");
            printf("07. Hamburger Rs:30\n");
            printf("08. Ice Cream Rs:25\n");
            printf("09. Pav Bhaji Rs:45\n");
            printf("10. Pulav     Rs:40\n");
            printf("0. Exit\n"              );
            }
  void ordered(){
            printf("OK...Thank you, your ordered is placed.\n");
            printf("Anything else:\n\n");
           }
int main()
  {
          int a,b,c,p,pls=0,pld=0,cupt=0,cupf=0,total,piz=0,sad=0,ham=0,ice=0,pav=0,pulav=0,amount;
          int note2000,note1000,note500,note200,note100,note50,note20,note10,note5;
           printf("-----------------------------------------\n");
          printf("***Hello Dear!! Welcome to Apna Cafe***\n");
          printf("What would you like to have???\n");
          printf("-----------------------------------------\n");
          menu();
  choice: printf("Enter your choice:");
          scanf("%d",&a);

          switch(a)
      {

          case 1:{
              printf("**************************\n");
          printf("you have selected samosa:\n");
          printf("How many plates samosas do you want?:\n");
          scanf("%d",&pls);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                 }
            break;
          case 2:{
         printf("**************************\n");
          printf("you have selected dosa\n");
          printf("How many plates dosa do you want?:\n");
          scanf("%d",&pld);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                 }
            break;
          case 3:{
          printf("**************************\n");
          printf("you have selected 'Tea'\n");
          printf("How many cups do you want?:\n");
          scanf("%d",&cupt);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                 }
            break;
            case 4:{
                printf("**************************\n");
          printf("you have selected 'Coffee'\n");
          printf("How many cups do you want?:\n");
          scanf("%d",&cupf);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                 }
            break;
             case 5:{
                 printf("**************************\n");
          printf("you have selected 'Pizza'\n");
          printf("How many pizzas do you want?:\n");
          scanf("%d",&piz);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                 }
            break;
             case 6:{
                 printf("**************************\n");
          printf("you have selected 'Sandwich'\n");
          printf("How many sandwich do you want?:\n");
          scanf("%d",&sad);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                    }
            break;
              case 7:{
                  printf("**************************\n");
          printf("you have selected 'Hamburger'\n");
          printf("How many Hamburger do you want?:\n");
          scanf("%d",&ham);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                    }
            break;
             case 8:{
                 printf("**************************\n");
          printf("you have selected 'Ice Cream'\n");
          printf("How many Ice Creams do you want have?:\n");
          scanf("%d",&ice);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                    }
            break;
             case 9:{
                 printf("**************************\n");
          printf("you have selected 'PavBhaji'\n");
          printf("How many plates of pavbhaji do you want to have?:\n");
          scanf("%d",&pav);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                    }
            break;
             case 10:{
                 printf("**************************\n");
          printf("you have selected 'Pulav'\n");
          printf("How many plate of pulav do you want?:\n");
          scanf("%d",&pulav);
          printf("**************************\n");
          ordered();
          menu();
          goto choice;
                    }
            break;
            case 0:{ goto bill;}
        }

          bill: printf("Bill\n");
         total=((25*pls)+(40*pld) +(10*cupt)+(15*cupf)+(40*piz)+(35*sad)+(30*ham)+(25*ice)+(45*pav)+(40*pulav));
         printf("total rs=%d\n",total);
         printf("Enter amount:");
         scanf("%d",&amount);
          if(amount>total)
           {
             b=amount-total;
             printf("return %d Rs\n\n",b);
           }
        for(p=1;p>=1;p++)
          {total=total-amount;

               if(total==0){break;}
            printf("Please return Rs %d more:\n",total);
            scanf("%d",&amount);
          }


          printf("\n\n\nI hope You Loved it!!!\n");
          printf("THANK YOU:\n");
          printf("*****VISIT AGAIN APNA CAFE*****\n\n\n");

    return 0;
}
