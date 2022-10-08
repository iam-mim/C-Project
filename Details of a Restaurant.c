#include<stdio.h>
#include<string.h>
#include<time.h>

int main()
{
    puts("\t\t\t\t\t****Welcome to Delicious****");


    printf("1.About Us\n");
    printf("2.Seat Reservation Process\n");
    printf("3.Menu Book\n");
    printf("4.Order and Bill\n");
    printf("5.Customer's History\n");
    printf("6.Quit\n");
    int project,p;
    for(p=1; p<=6; p++)
    {
        printf("Enter Your Choice:\n");
        scanf("%d",&project);
        if(project==1)
        {
            puts("Delicious Restaurant:");
            puts("Established on 1st January,2010.");
            puts("We are uncompromising about hygiene,quality and taste");
            puts("Our motto,We believe on customer's satisfaction.");
            puts("Location: 29,Central Road,1st Floor,New Market,Dhaka-1205.");
            puts("Contact number:01996361969,01315158259,029635060");
            puts("For Seat Reserve,Contact:029635060");
            puts("Email:delicious123@gmail.com");

        }
        if(project==2)
        {
            int x;
            char num[20];
            char cus[100];
            char num1[100];
            char num2[100];
            for(x=1;; x++)
            {


                scanf("%s",&num);
                if(!strcmp(num,"029635060"))
                {
                    puts("Restaurant Manager to customer:");
                    puts("-Hello!!");
                    puts("-How can I help you??");
                }
                else
                {
                    break;
                }
                puts("Customer:");
                fflush(stdin);
                gets(cus);
                puts("Restaurant Manager to Customer:");
                puts("-Wait a minute please!!");
                puts("-Will you please tell me the time of your arrival??");
                puts("Customer:");
                fflush(stdin);
                gets(cus);
                puts("Restaurant Manager to Customer:");
                puts("-Okay.I am checking the vaccancies");
                puts("Authority to Restaurant Manager:");
                fflush(stdin);
                gets(num1);
                if(!strcmp(num1,"Found"))
                {
                    puts("Restaurant Manager to Customer:");
                    puts("-Yes.It is possible.");
                    puts("-I have set a booking on the fixed time by your name.Thank you for choosing our restaurant.");

                }
                else if(!strcmp(num1,"Not Found"))
                {
                    puts("Restaurant Manager to Customer:");
                    puts("-Sorry.We are full.");
                    break;
                }
            }

        }
        if(project==3)
        {
            int n=4,i,i1,i2,i3;
            puts("1.Main Food");
            puts("2.Dessert");
            puts("3.Drinks");
            puts("4.Close Book");


            for(i=1; i<=n; i++)
            { printf("Enter Menu Book Page Number:");
                scanf("%d",&i);
                if(i==1)
                {
                    printf("Main Food:\n");
                    for(i1=1; i1<=1; i1++)
                    {
                        puts("1.Chicken Pizza(12 inches) 550/=");
                        puts("2.Chicken Burger 350/=");
                        puts("3.Chicken Fry(Per Piece) 100/=");
                        puts("4.Fried Rice 200/=");
                        puts("5.Chicken Pasta 200/=");
                        puts("6.Momos 40/=");
                        puts("7.Chicken Grill 100/=");
                        puts("8.Beef Steak(250 gm) 900/=");
                        puts("9.French Fry 100/=");
                        puts("10.Beef Sandwich 100/=");
                    }
                }
                else if(i==2)
                {
                    printf("Dessert:\n");
                    for(i2=1; i2<=1; i2++)
                    {
                        puts("11.Custard 120/=");
                        puts("12.Faluda 60/=");
                        puts("13.Pudding 80/=");
                        puts("14.Ice Cream 50/=");

                    }

                }
                else if(i==3)
                {
                    printf("Drinks:\n");
                    for(i3=1; i3<=1; i3++)
                    {
                        puts("15.Cocacola 20/=");
                        puts("16.Pepsi 20/=");
                        puts("17.Sprite 20/=");
                        puts("18.Fanta 25/=");
                        puts("19.Freash Water(1 litre) 18/=");
                    }
                }
                else if(i==4)
                {
                    puts("Close");
                    break;
                }

            }

        }
        if(project==4)
        {
            int k,j,j1,j2,j3,m,quantity1=0;
            FILE *fp;
            float sum=0;
            fp=fopen("1st.txt","w");
            int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0,Sum=0;
            int cost1=0,cost2=0,cost3=0,cost4=0,cost5=0,cost6=0,cost7=0,cost8=0,cost9=0,cost10=0;
            float total;
            int order;
            int a1,a3;
            int cost11=0,cost12=0,cost13=0,cost14=0,cost15=0,cost16=0,cost17=0,cost18=0,cost19=0;
            int sum11=0,sum12=0,sum13=0,sum14=0,sum15=0,sum16=0,sum17=0,sum18=0,sum19=0;
            int count1=0;
            char name[40];
            puts("Enter how many customers are there? ");
            scanf("%d",&a1);
            for(j=1; j<=a1; j++)
            {
                fprintf(fp,"Serial No:" );
                fprintf(fp,"%d.\n",j);
                printf("Enter Customer's Name:\n");
                fflush(stdin);
                gets(name);
                fprintf(fp,"             Name:%s\n",name);
                puts("Enter number of items:");
                scanf("%d",&a3);

                for(j1=1; j1<=a3; j1++)
                {



                    puts("Enter item serial number & quantity:");
                    scanf("%d",&order);

                    if(order==1)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Chicken Pizza  ",order);
                    }
                    if(order==2)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Chicken Burger  ",order);
                    }
                    if(order==3)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Chicken Fry     ",order);
                    }
                    if(order==4)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Fried Rice   ",order);
                    }
                    if(order==5)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Chicken Pasta  ",order);
                    }
                    if(order==6)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Momos          ",order);
                    }
                    if(order==7)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Chicken Grill  ",order);
                    }
                    if(order==8)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Beef Steak      ",order);
                    }
                    if(order==9)
                    {
                        fprintf(fp,"            Order no. & Item: %d.French Fry     ",order);
                    }
                    if(order==10)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Beef Sandwich  ",order);
                    }
                    if(order==11)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Custard       ",order);
                    }
                    if(order==12)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Faluda        ",order);
                    }
                    if(order==13)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Pudding       ",order);
                    }
                    if(order==14)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Ice Cream     ",order);
                    }
                    if(order==15)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Cocacola      ",order);
                    }
                    if(order==16)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Pepsi         ",order);
                    }
                    if(order==17)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Sprite         ",order);
                    }
                    if(order==18)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Fanta          ",order);
                    }
                    if(order==19)
                    {
                        fprintf(fp,"            Order no. & Item: %d.Fresh Water      ",order);
                    }
                    scanf("%d",&quantity1);
                    fprintf(fp,"        Quantity:%d \n",quantity1);




                    if(order==1)
                    {
                        cost1=550;/*12 inch*/
                        sum1=(quantity1*cost1);
                    }
                    if(order==2)
                    {
                        cost2=350;
                        sum2=(quantity1*cost2);
                    }
                    if(order==3)
                    {
                        cost3=100;
                        sum3=(quantity1*cost3);
                    }
                    if(order==4)
                    {
                        cost4=200;
                        sum4=(quantity1*cost4);
                    }
                    if(order==5)
                    {
                        cost5=300;
                        sum5=(quantity1*cost5);
                    }
                    if(order==6)
                    {
                        cost6=40;
                        sum6=sum6+(quantity1*cost6);
                    }
                    if(order==7)
                    {
                        cost7=100;
                        sum7=(quantity1*cost7);
                    }
                    if(order==8)
                    {
                        cost8=900;/*250 gm*/
                        sum8=(quantity1*cost8);
                    }
                    if(order==9)
                    {
                        cost9=100;
                        sum9=(quantity1*cost9);
                    }
                    if(order==10)
                    {
                        cost10=100;
                        sum10=(quantity1*cost10);
                    }
                    if(order==11)
                    {
                        cost11=120;
                        sum11=(quantity1*cost11);
                    }
                    if(order==12)
                    {
                        cost12=60;
                        sum12=(quantity1*cost12);
                    }
                    if(order==13)
                    {
                        cost13=80;
                        sum13=(quantity1*cost13);
                    }
                    if(order==14)
                    {
                        cost14=50;
                        sum14=(quantity1*cost14);
                    }

                    if(order==15)
                    {
                        cost15=20;
                        sum15=(quantity1*cost15);
                    }
                    if(order==16)
                    {
                        cost16=20;
                        sum16=(quantity1*cost16);
                    }
                    if(order==17)
                    {
                        cost17=20;
                        sum17=(quantity1*cost17);
                    }
                    if(order==18)
                    {
                        cost18=25;
                        sum18=(quantity1*cost18);
                    }
                    if(order==19)
                    {
                        cost19=18;
                        sum19=(quantity1*cost19);
                    }
                    sum=sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10+sum11+sum12+sum13+sum14+sum15+sum16+sum17+sum18+sum19;
Sum=sum-(sum15+sum16+sum17+sum18+sum19);
total=sum+((Sum*15.00)/100.00);

                }
                Sum=0;
                sum=0;
                sum1=0;
                sum2=0;
                sum3=0;
                sum4=0;
                sum5=0;
                sum6=0;
                sum7=0;
                sum8=0;
                sum9=0;
                sum10=0;
                sum11=0;
                sum12=0;
                sum13=0;
                sum14=0;
                sum15=0;
                sum16=0;
                sum17=0;
                sum18=0;
                sum19=0;
                cost1=0;
                cost2=0;
                cost3=0;
                cost4=0;
                cost5=0;
                cost6=0;
                cost7=0;
                cost8=0;
                cost9=0;
                cost10=0;
                cost11=0;
                cost12=0;
                cost13=0;
                cost14=0;
                cost15=0;
                cost16=0;
                cost17=0;
                cost18=0;
                cost19=0;
                puts(name);
                printf("Your Bill is:%.2f(With 15%% Vat)\n",total);

                fprintf(fp,"             Bill:%.2f\n",total);
                time_t t;
                time(&t);
                fprintf(fp,"Day,Date,Time & Year:%s\n",ctime(&t));
                printf("Thank You!!\n");
                printf("Enjoy your meal!!\n");



            }
fclose(fp);
        }
        if(project==5)
        {
            char ch;
            FILE *fp;

            if((fp = fopen("1st.txt","r"))==NULL)
            {
                printf("Cannot open file.\n");
            }
            for(;;)
            {
                ch=fgetc(fp);
                if(ch==EOF)break;
                putchar(ch);
            }
            fclose(fp);

        }

        if(project==6)
        {
            printf("Thank You!!\n");
            break;
        }
    }
    return 0;
}
