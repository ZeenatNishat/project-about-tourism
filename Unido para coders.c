#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int hridoy;

void ccon();
void hridoyvaia();
void login1();
void visa();
void europe();
void sarrc();
void Hotel();
void Dhaka();
void Gazipur();
void Kishoreganj();
void Manikganj();
void Munshiganj();
void Narayanganj();
void Narsingdi();
void Tangail();
void Faridpur();
void Gopalgonj();
void Madaripur();
void Rajbari();
void Shariatpur();
void hi();
void dhaka();
void rangpur();
void rhotel();
void rbanks();
void rtourist();
void rajshahi();
void banks();
void hotel();
void touristspot();
void sylhet();
void molovibazar();
void sunamgonj();
void habiganj();
void Hotel1();
void hi2();
void hi3();
void Hotel2();
void Khagrachari();
void Feni();
void Bandarban();
void Coxs_Bazar();
void Brahmanbaria();
void Comilla();
void Chandpur();
void Noakhali();
void Lakshmipur();
void Rangamati();
void Chittagong();
void chattogram();
void health();
void Dhaka_Hospitals();
void Chittagong_Hospitals();
void Khulna_Hospitals();
void Rajshahi_Hospitals();
void Rangpur_Hospitals();
void Barishal_Hospitals();
void Mymensingh_Hospitals();
void Sylhet_Hospitals();
void help();
void about();
void Barishal();
void Barguna();
void Bhola();
void Jhalokati();
void Patuakhali();
void Pirojpur();
void hi4();
void Barisal1();
void districts();
void banksl();
void hotels();
void khulna1();
void districtsm();
void banksm();
void hotelsm();
void Mymensingh();
void main()
{

        login1();
        if(hridoy==1)
        {
           hridoyvaia();
        }

}

struct login
{
    char fname[50];
    char lname[20];
    char username[20];
    char password[20];
    char email[20];
    char phone[20];
    char sex[7];
    char marr[10];
    char country[20];
};
registe()
{
    FILE *log;
    log=fopen("login12.txt","w");
    struct login l;
    printf("\n\n  >>>Enter first name: ");
    scanf("%s",l.fname);
    printf("\n\n  >>>Enter last name: ");
    scanf("%s",l.lname);

    printf("\n\n  >>>Enter username: ");
    scanf("%s",l.username);
    printf("\n\n  >>>Enter password: ");
    scanf("%s",l.password);
    printf("\n\n  >>>E-Mail : ");
    scanf("%s",l.email);
    printf("\n\n  >>>Phone : ");
    scanf("%s",l.phone);
    printf("\n\n  >>>Enter your Country : ");
    scanf("%s",l.country);
    printf("\n\n  >>>Sex : ");
    scanf("%s",l.sex);
    printf("\n\n >>>Marital Status : ");
    scanf("%s",l.marr);

    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\n\n-->Your username is UserID\n\n");
    printf("-->Now login with UserID and Password\n\n");
    printf("\n>>>Press any key to continue....");
    getch();
    system("CLS");
    printf("\n\n\n");
    login();
}
void login()
{
    char username[200],password[20];
    FILE *log;
    log = fopen("login12.txt","r");
    struct login l;
    printf("\n\n\n >>>User_Id: ");
    scanf("%s",&username);
    printf(" >>>Password: ");
    scanf("%s",&password);
    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            printf("\n\n\n~~~>Successful login<~~~\n\n\n\n");
            system("CLS");
            printf("\n\n\t>>>NAME : %s %s\n\n",l.fname,l.lname);
            printf("\n\n\t>>>E-MAIL : %s\n\n",l.email);
            printf("\n\n\t>>>PHONE NO : %s\n\n",l.phone);
            printf("\n\n\t>>>COUNTRY : %s\n\n",l.country);
            if(l.sex[0]=='F' || l.sex[0]=='f')
            {
                if(l.marr[0]=='M' || l.marr[0]=='m')
                {
                    printf("\n\n\t\t\t\t\t\t\t<<<THANK YOU Mrs.%s for logging in>>>\n\n",l.lname);
                    hridoy=1;
                }
                else
                {
                    printf("\n\n\t\t\t\t\t\t\t<<<THANK YOU Ms.%s for logging in>>>\n\n",l.lname);
                    hridoy=1;
                }
            }
            else
            {
                 printf("\n\t\t\t\t\t\t\t<<<THANK YOU Mr.%s for logging in>>>\n\n",l.lname);
                 hridoy=1;
            }
            hridoy=1;
            printf("\n\t\t\t\t\t\t\t\t***|Our Project Is Ready To Serve You|***\n");

        }
        else
        {
            printf("\n\n\n\t\t\t\t\t\t\t   Please enter correct UserId and password....\n");
            printf("\t\t\t\t\t\t\t***********************************************\n\n\n");
            printf("\t\t\t\t\t\t\t    >Press '1' And Press ENTER To Get Back to login page<\n\n\n\t\t\t\t\t\t\n");
            printf("\t\t\t\t\t\t\t    >Press '2' And Press ENTER To Get Back to register page<\n\n\n\t\t\t\t\t\n");
            printf("\t\t\t\t\t\t\t    >Press '3' And Press ENTER To Get Back to prevous page<\n\n\n\t\t\t\t\t\n");
            int x;
            scanf("%d",&x);
            if(x==2)
            {
                system("CLS");
                return registe();
            }
            else if(x==1)
            {
                system("CLS");
                return login();
            }
            else if(x==3)
            {
                system("CLS");
                return login1();
            }
        }
        printf("\nPress any key to continue\n");
        getch();
        system("CLS");
    }
    fclose(log);
}

void login1()
{
    printf("\n\n\n\t\t\t\t\t\t-------------------------------------------------------\n");
    printf("\t\t\t\t\t\t|~~~~THE UNIDO PARA CODERS TOURISM BANGLADESH LTD.~~~~|\n");
    printf("\t\t\t\t\t\t-------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t*|We are here to serve you the best|*\n");
    printf("\t\t\t\t\t\t\t\t\t-------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t-------------------------------------\n\n\n\n");
    printf("\n\n\t\t\t\t\t\t    PLEASE REGISTER IF YOU ARE NOT REGISTERED TO GET IN\n");
    printf("\t\t\t\t\t\t  ________________________________________________________\n");
    printf("\t\t\t\t\t\t   _____________________________________________________\n\n\n");
    printf("\t\t\t\t\t\t\tYOU CAN LOG IN IF YOU ARE REGISTERED ALREADY\n");
    printf("\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n");
    int cho;
    printf(">>>Press '1' for register\n~~~~~~~~~~~~~~~~~~~~~~~~~\n\n>>>Press '2' for login\n~~~~~~~~~~~~~~~~~~~~~~\n\n\n>>>\t");
    scanf("%d",&cho);
    if(cho==1)
    {
        system("CLS");
        registe();
    }
    else if(cho==2)
    {
        system("CLS");
        login();
    }

}
void visa()
{
    int n;
    printf("Press 1 to see the country's of  european union\n");
    printf("Press 2 to see the country's of sarrc\n");
    printf("Press 3 to go back to main page\n");
    printf("Press 4 to go back to previous page\n");
    printf("Press the number:");
    scanf("%d",&n);
    if(n==1){
             system("CLS");
    europe();
    }
    else if(n==2){
             system("CLS");
    sarrc();
    }
    else if(n==3){
             system("CLS");
      main();
    }
    else if(n==4){
             system("CLS");
      hridoyvaia();
    }

}
void europe()
{
    char b[1000];
    int len,a1=0,b2=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    printf("Enter the country name:");
    scanf("%s",&b);
    len=strlen(b);
    for(int a=0;a<=len;a++)
    {
        if(b[a]=='a' || b[a]=='A')
        {
            a1++;
        }
        if(b[a]=='b' || b[a]=='B')
        {
            b2++;
        }
        if(b[a]=='c' || b[a]=='C')
        {
            c++;
        }
        if(b[a]=='d' || b[a]=='D')
        {
            d++;
        }
        if(b[a]=='e' || b[a]=='E')
        {
            e++;
        }
        if(b[a]=='f' || b[a]=='F')
        {
            f++;
        }
        if(b[a]=='g' || b[a]=='G')
        {
            g++;
        }
        if(b[a]=='h' || b[a]=='H')
        {
            h++;
        }
        if(b[a]=='i' || b[a]=='I')
        {
            i++;
        }
        if(b[a]=='j' || b[a]=='J')
        {
            j++;
        }
        if(b[a]=='k' || b[a]=='K')
        {
            k++;
        }
        if(b[a]=='L' || b[a]=='l')
        {
            l++;
        }
        if(b[a]=='M' ||b[a]=='m')
        {
            m++;
        }
        if(b[a]=='N' || b[a]=='n')
        {
            n++;
        }
        if(b[a]=='O' || b[a]=='o')
        {
            o++;
        }
        if(b[a]=='P' || b[a]=='p')
        {
            p++;
        }
        if(b[a]=='Q' || b[a]=='q')
        {
            q++;
        }
        if(b[a]=='R' || b[a]=='r')
        {
            r++;
        }
        if(b[a]=='s' || b[a]=='S')
        {
            s++;
        }
        if(b[a]=='T' || b[a]=='t')
        {
            t++;
        }
        if(b[a]=='U' || b[a]=='u')
        {
            u++;
        }
        if(b[a]=='v' || b[a]=='V')
        {
            v++;
        }
        if(b[a]=='W' || b[a]=='w')
        {
            w++;
        }
        if(b[a]=='X' || b[a]=='x')
        {
            x++;
        }
        if(b[a]=='Y' || b[a]=='y')
        {
            y++;
        }
        if(b[a]== 'Z' || b[a]=='z')
        {
            z++;
        }

    }
    if(a1==2 && u==1 && s==1 && t==1 && r==1 && i==1)
    {
        printf("country name:Austria.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(b2==1 && e==1 && g==1 && i==1 && l==1 && m==1)
    {
        printf("Country name:Belgium\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && b2==1 && g==1 && i==1 && l==1 && r==1 && u==1)
    {
        printf("Country name:Bulgaria.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && c==1 && i==1 && o==1 && r==1 && t==1)
    {
        printf("Country name:Croatia.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else  if(c==1 && p==1 && r==1 && s==1 && u==1 && y==1)
    {
        printf("Country name:Cyprus.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && c==2 && e==1 && h==1 && i==1 && z==1)
    {
        printf("Country name:Czechia.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && d==1 && e==1 && k==1 && m==1 && n==1 && r==1)
    {
        printf("Country name:Denmark.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && e==1 && i==1 && n==1 && o==1 && s==1 && t==1)
    {
        printf("Country name:Estonia.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && d==1 && f==1 && i==1 && n==2)
    {
        printf("Country name:Finland.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && c==1 && e==1 && f==1 && n==1 && r==1)
    {
        printf("Country name:France.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && e==1 && g==1 && m==1 && n==1 && r==1 && y==1)
    {
        printf("Country name:Germany.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(c==1 && e==3 && g==1 && r==1)
    {
        printf("Country name:Greece.\n");
        printf("Visa requirement:Yes.\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && g==1 && h==1 && n==1 && r==1 && u==1 && y==1)
    {
       printf("Country name:Hungary.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && d==1 && e==1 && i==1 && l==1 && n==1 && r==1)
    {
       printf("Country name:Ireland.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && i==1 && l==1 && t==1 && y==1)
    {
       printf("Country name:Italy.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && i==1 && l==1 && t==1 && v==1)
    {
       printf("Country name:Latvia.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && h==1 && i==2 && l==1 && n==1 && t==1 && u==1)
    {
       printf("Country name:Lithuania.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(b2==1 && e==1 && g==1 && l==1 && m==1 && o==1 && r==1 && u==2 && x==1)
    {
       printf("Country name:Luxembourg.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && l==1 && m==1 && t==1)
    {
       printf("Country name:Malta.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && d==1 && e==2 && h==1 && l==1 && n==2 && r==1 && s==1 && t==1)
    {
       printf("Country name:Netherlands.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && d==1 && l==1 && n==1 && o==1 && p==1)
    {
       printf("Country name:Poland.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && g==1 && l==1 && o==1 && p==1 && t==1 && r==1 && u==1)
    {
        printf("Country name:Portugal.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && i==1 && m==1 && n==1 && o==1 && r==1)
    {
       printf("Country name:Romania.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && i==1 && k==1 && l==1 && o==1 && s==1 && v==1)
    {
        printf("Country name:Slovakia.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && e==1 && i==1 && l==1 && n==1 && o==1 && s==1 && v==1)
    {
       printf("Country name:Slovenia.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && i==1 && n==1 && p==1 && s==1)
    {
        printf("Country name:Spain.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else if(d==1 && e==2 && n==1 && s==1 && w==1)
    {
        printf("Country name:Sweden.\n");
       printf("Visa requirement:Yes.\n");
       printf("Type of visa:Visa on arrival.\n");
    }
    else
    {
        printf("Sorry! this country is not on the list\n");
    }
    printf("\n");
    int a;
    printf("Press 1 to return to the previous page\n");
    printf("Press 2 to return to the first page\n");
    printf("press any key to exit the program\n\n");
    printf("press the number:");
    scanf("%d",&a);
    if(a==1)
    {
        system("CLS");
        return visa();
    }
    else if(a==2)
    {
        system("CLS");
        return main();
    }

}
void sarrc()
{
    char b[1000];
    int len,a1=0,b2=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    printf("Enter the country name:");
    scanf("%s",b);
    len=strlen(b);
    for(int a=0;a<=len;a++)
    {
        if(b[a]=='a' || b[a]=='A')
        {
            a1++;;
        }
        if(b[a]=='b' || b[a]=='B')
        {
            b2++;
        }
        if(b[a]=='c' || b[a]=='C')
        {
            c++;
        }
        if(b[a]=='d' || b[a]=='D')
        {
            d++;
        }
        if(b[a]=='e' || b[a]=='E')
        {
            e++;
        }
        if(b[a]=='f' || b[a]=='F')
        {
            f++;
        }
        if(b[a]=='g' || b[a]=='G')
        {
            g++;
        }
        if(b[a]=='h' || b[a]=='H')
        {
            h++;
        }
        if(b[a]=='i' || b[a]=='I')
        {
            i++;
        }
        if(b[a]=='j' || b[a]=='J')
        {
            j++;
        }
        if(b[a]=='k' || b[a]=='K')
        {
            k++;
        }
        if(b[a]=='L' || b[a]=='l')
        {
            l++;
        }
        if(b[a]=='M' ||b[a]=='m')
        {
            m++;
        }
        if(b[a]=='N' || b[a]=='n')
        {
            n++;
        }
        if(b[a]=='O' || b[a]=='o')
        {
            o++;
        }
        if(b[a]=='P' || b[a]=='p')
        {
            p++;
        }
        if(b[a]=='Q' || b[a]=='q')
        {
            q++;
        }
        if(b[a]=='R' || b[a]=='r')
        {
            r++;
        }
        if(b[a]=='s' || b[a]=='S')
        {
            s++;
        }
        if(b[a]=='T' || b[a]=='t')
        {
            t++;
        }
        if(b[a]=='U' || b[a]=='u')
        {
            u++;
        }
        if(b[a]=='v' || b[a]=='V')
        {
            v++;
        }
        if(b[a]=='W' || b[a]=='w')
        {
            w++;
        }
        if(b[a]=='X' || b[a]=='x')
        {
            x++;
        }
        if(b[a]=='Y' || b[a]=='y')
        {
            y++;
        }
        if(b[a]== 'Z' || b[a]=='z')
        {
            z++;
        }
    }
    if(a1==3 && f==1 && g==1 && i==1 && n==2 && s==1 && t==1)
    {
        printf("country Name:Afganistan\n");
        printf("visa requirement:Yes\n");
        printf("Type of visa:general\n");
    }
    else if(a1==1 && b2==1 && h==1 && n==1 && t==1 && u==1)
    {
        printf("country Name:Bhutan\n");
        printf("Visa requirement:No\n");
    }
    else if(a1==1 && d==1 && i==2 && n==1)
    {
        printf("Country Name:India\n");
        printf("Visa requirement:Yes\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==1 && d==1 && e==1 && i==1 && l==1 && m==1 && s==1)
    {
        printf("Country Name:Maldives\n");
        printf("visa requirement:No\n");
    }
    else if(a1==1 && e==1 && l==1 && n==1 && p==1)
    {
        printf("Country Name:Nepal\n");
        printf("Visa requirement:Yes\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && i==1 && k==1 && p==1 && s==1 && t==1)
    {
        printf("Country Name:pakistan\n");
        printf("Visa requirement:Yes");
        printf("Type of visa:Visa on arrival.\n");
    }
    else if(a1==2 && i==1 && k==1 && i==1 && n==1 && r==1 && s==1)
    {
        printf("Country Name:Srilanka\n");
        printf("Visa requirement:Yes\n");
        printf("Type of visa:Visa on arrival.\n");
    }
    else
    {
        printf("Sorry! this country is not in the list\n");
    }
    printf("\n");
    int a;
    printf("press 1 to go to the previus page\n");
    printf("press 2 to go to the main page\n");
    printf("press any key to exit the program\n");
    printf("Press the number:");
    scanf("%d",&a);
    if(a==1)
    {
        system("CLS");
    return visa();
    }
    else if(a==2)
    {
        system("CLS");
        return main();
    }

}
void dhaka()
{
    system("CLS");
    printf("\nWelcome to Dhaka Division\n");
    printf("\nDhaka Division is an administrative division within Bangladesh. Dhaka is the capital city of Bangladesh and also the largest city as well of the country. It comes among the 10 most populous cities of the world. The Division as constituted prior to 2015 covered an area of 31,051 sq km and had a population of 47,424,418 at the 2011 Census. However, following the separation of the new Mymensingh Division in 2015, the area has been reduced to 20,508.8 sq km with a population at the 2011 Census of 36,433,505.\nDhaka Division consisted before 2015 of four city corporations, 17 districts, 123 upazilas and 1,248 union parishads. However, four of the most northerly of the 17 districts were removed in 2015 to create the new Mymensingh Division, and another five districts (those situated to the south of the Ganges/Padma River) are in the process of being removed to create a new Faridpur Division.\n\n");

    int a;
    printf("\nWhat you would like to see?\n 1. Hotels & Resorts\n 2. Money Exchange Point\n 3. Bank\n 4. ATM Booth\n 5. Districts\n\n");
    printf("Press '6' to go to the prvous page of the program \n\n");
    printf("Enter the number:");
    scanf("%d", &a);
    system("CLS");
    if(a == 1)
    {
        Hotel();
    }
    else if(a == 2)
    {
        printf("\nHere is the details of some Money Exchange points\n");
        printf("\n1. Bhai Bhai money exchange\nLocation: Farmgate Foot Over Bridge, Dhaka 1215\n");
        printf("\n2. Agrani Bank Limited | Foreign Exchange Booth\nLocation: Kurmitola 1000-1200, Dhaka\n");
        printf("\n3. Prime Bank Limited, Foreign Exchange Branch\nLocation: Al-haj Mansion,82, Motijheel C/A, Dhaka, 1000\n");
        printf("\n4. YORK MONEY EXCHANGE LTD\nLocation: 532/4 Road No 11, Dhaka 1212\n");
        int shafkat;
        printf("\nPress 1 to go to the previous page\nPress Number:");
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return dhaka();
        }
    }
    else if(a == 3)
    {
        printf("\nHere is the details of some banks\n");
        printf("\n1. Dhaka Bank Limited\nLocation: House 964/1 Block-B Sahid Baki Road Dhaka, 1219\n");
        printf("\n2. Bangladesh Bank, Sadarghat Office\nLocation: Johnson Rd, Dhaka");
        printf("\n3. Dhaka Bank, Mirpur Branch\nLocation: Road No. 5, Dhaka 1216\n");
        printf("\n4. ONE Bank Limited\nLocation: Al-Kauser Palace House#2, Road#5, Block-D Banasree R/A, Dhaka, Dhaka\n");
        printf("\n5. NCC BANK\nLocation: 57/A, Abdul Aziz Lane Nilambar Shaha Rd Dhaka 1211 Nilambar Shaha Rd, Dhaka 1211\n");
        printf("\nPress 1 to go to the previous page\nPress Number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return dhaka();
        }
    }
    else if(a == 4)
    {
        printf("\nHere is the details of some ATM Booths\n");
        printf("\n1. National Bank Limited ATM\nLocation: 729, Bangladesh Textile Mills Corporation Bhaban, Karwan Bazar, Dhaka 1215\n");
        printf("\n2. BRAC Bank | ATM\nLocation: Plot-19, Shatabdi Bhaban, Section-10, Dhaka 1216\n");
        printf("\n3. UCB BANK ATM\nLocation: Savar Union, Dhaka\n");
        printf("\n4. Standard Chartered Bank ATM\nLocation: Tejturi Bazar, Dhaka 1215\n");
        printf("\n5. Janata Bank ATM\nLocation: Purana Paltan Line, Dhaka 1205\n");
        printf("\n6. The City Bank Limited | ATM Booth\nLocation: 61/1 Matikata Bazar, Dhaka Cantonment, Dhaka 1207\n");
        printf("\n7. Q Cash | ATM Booth\nLocation: Mirpur Post Office, Mirpur Rd, Dhaka\n");
        printf("\n8. AB Bank Limited | ATM Booth\nLocation: Darus Salam Main Road, Dhaka\n");
        printf("\nPress 1 to go to the previous page\nPress Number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return dhaka();
        }
    }
    else if(a == 5)
    {
        hi();
    }
    else if(a==6)
    {
        system("CLS");
        division();
    }


}

void Hotel()
{
    int h;
    printf("\nWhich Hotel you want to see?\n 1. Hotel Seven Star\n 2. Hotel Singapore Int\n 3. Grand Lake View Hotel\n 4. Hotel AS Shams International\n 5. Shaira Garden Resorts\n 6. Heritage Resort\n 7. Elenga Resort Ltd\n 8. Hotel Center Point\n 9. Richmond Hotel and Suites\n10. Sky City Hotel\n\n");
    printf("press '11' to go to the previous page\n");
    printf("Press the number:");
    scanf("%d", &h);

    if(h == 1)
    {
        system("CLS");
        printf("\nHotel Seven Star\n");
        printf("Address: 99 B C C Rd, Dhaka\n");
        printf("Distance: 14 k.m. from Dhaka\n");
        printf("Contact Number: 01912012551\n");
        printf("\n*Budget Double Room = 1,194 BDT per Night\n*Basic Triple Room with Shared Bathroom = 1,460 BDT per Night\n");
    }
    else if(h == 2)
    {
        system("CLS");
        printf("\nHotel Singapore Int\n");
        printf("Address: Hasan Mahmud Complex (5th floor) Shah Kabir MazarRoad, Azampur Kacha Bazar Chowrasta, 1230\n");
        printf("Distance: 10.6 k.m. from Dhaka\n");
        printf("Contact Number: 01888686746\n");
        printf("\n*Economy Double Room = 1,590 BDT per Night\n*Deluxe King Room = 2,119 BDT per Night\n*Family Room = 2,649 BDT per Night\n");
    }
    else if(h == 3)
    {
        system("CLS");
        printf("\nGrand Lake View Hotel\n");
        printf("Address: House# 14, Road# 5/A, UTTARA Sector# 11, Gazipur, Dhaka 1230\n");
        printf("Distance: 12 k.m. from Dhaka\n");
        printf("Contact Number: 01743521099\n");
        printf("\n*Deluxe Double Room with 1 King Bed = 2,242 BDT per Night\n*Deluxe Double Room with 2 Twin Beds = 2,242 BDT per Night\n*Deluxe Double Room with 1 Double Bed = 2,438 BDT per Night\n");
    }
    else if(h == 4)
    {
        system("CLS");
        printf("\nHotel AS Shams International\n");
        printf("Address: 205/5 Al-Bashir Plaza Box Culvert Road, Fakirapool, Dhaka 1000\n");
        printf("Distance: 13.1 k.m. from Dhaka\n");
        printf("Contact Number: 01970685685\n");
        printf("\n*Standard Family Room = 1,580 BDT per Night\n*Family Double Room = 1,629 BDT per Night\n*Standard Double Room = 2,074 BDT per Night\n*Deluxe Double Room = 2,617 BDT per Night\n");
    }
    else if(h == 5)
    {
        system("CLS");
        printf("\nShaira Garden Resorts\n");
        printf("Address: Madanpur, Bandor, Narayangonj 1410\n");
        printf("Distance: 33.2 k.m. from Dhaka\n");
        printf("Contact Number: 01908809898\n");
        printf("\n*Standard Double Room = 5,899 BDT per Night\n*Deluxe Double Room = 6,542 BDT per Night\n*Luxury Double Room = 8,258 BDT per Night\n*Premium Double Room = 13,084 BDT per Night\n");
    }
    else if(h == 6)
    {
        system("CLS");
        printf("\nHeritage Resort\n");
        printf("Address: Bagan Bari, Madhabdi 1604, Narsingdi\n");
        printf("Distance: 40.5 k.m. from Dhaka\n");
        printf("Contact Number: 01755-677149\n");
        printf("\n*Taltola Village Room = 11,000 BDT per Night\n*Villa's Room = 13,000 BDT per Night\n*Water Cottage Room = 16,000 BDT per Night\n");
    }
    else if(h == 7)
    {
        system("CLS");
        printf("\nElenga Resort Ltd\n");
        printf("Address: Elenga, Kalihati Upazila, Tangail\n");
        printf("Distance: 94.8 k.m. from Dhaka\n");
        printf("Contact Number: 01819410062\n");
        printf("\n*Deluxe Double Room = 4,875 BDT per Night\n*Comfort Double Room = 6,825 BDT per Night\n*Family Bungalow with 3 Bedroom and 2 Bathroom = 14,624 BDT per Night\n");
    }
    else if(h == 8)
    {
        system("CLS");
        printf("\nHotel Center Point\n");
        printf("Address: Dhaka 1212\n");
        printf("Distance: 2.9 k.m. from Dhaka\n");
        printf("Contact Number: 02-8823583\n");
        printf("\n*Deluxe Double Room = 4,826 BDT per Night\n*Executive Two-Bedroom Suite = 6,971 BDT per Night\n");
    }
    else if(h == 9)
    {
        system("CLS");
        printf("\nRichmond Hotel and Suites\n");
        printf("Address: House-2 Rd No 10, Dhaka 1230\n");
        printf("Distance: 8.4 k.m. from Dhaka\n");
        printf("Contact Number: 01974246663\n");
        printf("\n*Standard Double Room = 3,263 BDT per Night\n*Executive Double Room = 3,942 BDT per Night\n*Suite = 4,131 BDT per Night\n*Family Suite = 5,665 BDT per Night\n");
    }
    else if(h == 10)
    {
        system("CLS");
        printf("\nSky City Hotel\n");
        printf("Address: 47 Shiddeshwari, Circular Road, Dhaka 1217\n");
        printf("Distance: 10.7 k.m. from Dhaka\n");
        printf("Contact Number: 01708561671\n");
        printf("\n*Deluxe Queen Room = 5,227 BDT per Night\n*Deluxe King Room = 6,350 BDT per Night\n*Deluxe Double or Twin Room = 7,096 BDT per Night\n*Superior Twin Room = 8,218 BDT per Night\n*Executive Suite = 8,963 BDT per Night\n*Family Suite = 12,699 BDT per Night\n");
    }
    else if(h==11)
    {
        system("CLS");
        dhaka();
    }
    else
    {
        system("CLS");
        printf("\nInvalid Input\n");
    }
    int shafkat;
    printf("Press 1 to go to the previous page\nPress 2 to go to the first page\nPress the number:");
    scanf("%d",&shafkat);
    if(shafkat==1)
    {
        system("CLS");
        return Hotel();
    }
    else if(shafkat==2)
    {
        system("CLS");
        return main();
    }
}

void Dhaka()
{
    int dh;
    system("cls");
    printf("\nWelcome to Dhaka District\n");
    printf("\nWhich Tourist spot you want to see?\n1. Lalbagh Fort\n2. Ahsan Manjil Museum\n3. Central Shaheed Minar\n4. Bangladesh national museum\n5. Bangabandhu memorial museum\n press 7 to go to the privous page \n\n");
    scanf("%d", &dh);
    system("cls");
    if(dh == 1)
    {

        printf("\nThe fort of Aurangabad, popularly known as the Lalbagh Fort, was built in 1678 AD by the then Viceroy of Bengal Prince Mohammad Azam, son of the Mughal Emperor Aurangazeb. The fort has a three storied structure with slender minarets at the South Gate. It has many hidden passages and a mosque of massive structure. Outstanding among the monuments of the Lalbagh Fort are the Tomb of Pari Bibi(Fairy lady) and Audience room and HummamKhana (bathing place) of Nawab Shaista Khan, now housing a museum. Lalbagh fort is in the old town of Dhaka at Lalbagh.\n");
        printf("Location: Lalbagh Rd, Dhaka 1211\n");
        printf("Distance: 12.9 k.m. from Dhaka\n\n\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }

    }
    else if(dh == 2)
    {
        printf("\nAhsan Manjil Museum was built in 1872 and standing on the river Buriganga, this stately building offers the visitors a feeling of the life-style of the Nawabs of Dhaka. Sometimes known as the Pink Palace, this building now houses a splendid museum. Ahsan Manjil has been renovated and turned into a museum recently. It is an epitome of the nation's rich cultural heritage.\n");
        printf("Location: Latif Complex, Islampur Rd, Dhaka\n");
        printf("Distance: 14.7 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(dh == 3)
    {
        printf("\nCentral Shaheed Minar is the symbol of Bengali nationalism. This monument was built to commemorate the martyrs of the historic Language movement of 1952. Hundreds and thousands of people with floral wreaths and bouquet gather on 21 February every year to pay respect in a solemn atmosphere. The monument is located in the area of the University of Dhaka. The design and crafting of Shaheed Minar were done by the renowned Hamidur Rahman along with the contribution of Novera Ahmed; another mighty art figure of Bangladesh.\n");
        printf("Location: Dhaka Medical College Gate, Secretariat Road, Secretariate Road, Dhaka 1000\n");
        printf("Distance: 12.2 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(dh == 4)
    {
        printf("\nBangladesh national museum is situated in shahbag. Located at the central point of the city. The museum contains a large number of interesting collections including sculptures and paintings of the Hindu, Buddhist and Muslim periods as well as inscriptions of the Holy Quran in Arabic and Persian letters and Bengali works in the Arabic script.\n");
        printf("Location: Shahbagh Rd, Dhaka 1000\n");
        printf("Distance: 12 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(dh == 5)
    {
        printf("\nThe residence of the father of the nation Bangabandhu Sheikh Mujibur Rahman has been turn in to the Bangabandhu memorial museum. It contains rare collection of personal effects and photographs of his lifetime. This three- stored building as known as BangabandhuBhaban. This building turned in to a museum in year 1997.\n");
        printf("Location: Bangabandhu Bhaban, House #10 , Road #32 (Old), 11 (New, Dhaka 1209)\n");
        printf("Distance: 11 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(dh==7)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Gazipur()
{
    int g;
    system("cls");
    printf("\nWelcome to Gazipur\n");
    printf("\nWhich Tourist spot you want to see?\n1. Bangabandhu Sheikh Mujib Safari Park\n2. Bhawal National Park\n3. Nuhash Polli\n4. Bhawal Rajbari\n5. Shohagh Polli\n\n");
    printf("press 6 to go to the privous page\npress the number:");
    scanf("%d", &g);
    system("CLS");
    if(g == 1)
    {
        printf("\nBangabandhu Sheikh Mujib Safari Park is spread over 3810 acres of Sal Forest which makes it one of the largest safari parks in the world and the largest in Asia. It was inaugurated on October 31, 2013. It is located about 40 k.m. north of Bangladesh's capital city Dhaka near the Dhaka - Mymensingh Highway. The park is divided into 5 major sections. They are the Core Safari, Safari Kingdom, Biodiversity Park, Extensive Asian Safari Park and Bangabandhu Square.\n");
        printf("Location: 1340 Safari Park Rd, Sreepur, Gazipur\n");
        printf("Distance: 47.9 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(g == 2)
    {
        printf("\nBhawal National Park was established and maintained as a National Park in 1974. It was officially declared in 1982 under the Wildlife Act of 1974. The core area of the park covers 940 hectares but extends to 5,022 ha of surrounding forest. Its purpose is to protect important habitats as well as to provide opportunities for recreation. The area was noted for peacocks, tiger, leopard, Black Panther, elephant, clouded leopard and samba deer. The park has 220 plant species, including 43 different tree species, 19 shrubs, 3 palms, 27 grasses, 24 vines, and 104 herbs. The wildlife in the park includes 13 mammals, 9 reptiles, 5 birds and 5 amphibians. In addition the Forest Department has recently introduced peacocks, deers, pythons, and catfish.\n");
        printf("Location: Dhaka - Mymensingh Highway, Gazipur 1700\n");
        printf("Distance: 39.2 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(g == 3)
    {
        printf("\nNuhash Polli was founded in 1997. Initially it covered 22 bigha of land. Now it covers around 40 bigha. Actor Dr. Ejaz helped procure the land. The heavenly 'village' was named after Nuhash, Humayun Ahmed and Gultekin Khan's (his first wife) son. Ahmed was very fond of music. He loved to live amidst nature and relished the date plantation, which he had set up inside Nuhash Polli. Nuhash Polli was open to the public and visitors would traverse great distances to get a view of the picturesque estate.\n");
        printf("Location: Nuhash Polli Rd, Pirozali, Gazipur\n");
        printf("Distance: 47.5 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(g == 4)
    {
        printf("\nBhawal Rajbari was a large zamindari estate in Bengal in modern-day Bangladesh. The area under the estate currently falls under the Gazipur District. The most famous capital of the Bhawal Estate was Choira Meah Bari, where zamindar Fazal Gazi lived. He was one of the Baro-Bhuyans (12th zamindars of Bengal). Visitors loves to visit this estate every year.\n");
        printf("Location: Gazipur District\n");
        printf("Distance: 26.2 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(g == 5)
    {
        printf("\nShohagh Polli Resort is one of the best places in Bangladesh to break the monotony of busy life. Sohag Palli has been built in a hug-free environment in a green environment across an area of ​​about 11 acres. The pillars of the hanging bridge built in Sohag Palli and the carvings carved on the balcony attract the visitors. There is an artificial lake, which has water all year round and different species of fish can be seen in that water. There are several good quality cottages for accommodation in Sohag Palli. And the lake that flows in front of the cottage is like a reflection of an arranged village in Venice, Italy.\n");
        printf("Location: Chandra More, Sinaboh Rd\n");
        printf("Distance: 40.6 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(g==6)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Kishoreganj()
{
    int k;
    system("cls");
    printf("\nWelcome to Kishoreganj\n");
    printf("\nWhich Tourist spot you want to see?\n1. Swadhinata Stambha\n2. Isha Khan's Jangalbari Fort\n3. Pagla Masjid\n4. Delhir Akhra\n5. Chandrabati Mandir\n\n");
     printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &k);
    system("CLS");
    if(k == 1)
    {
        printf("\nSwadhinata Stambha or Independence Monument is a national monument in Bangladesh to commemorate the historical events that took place in the Suhrawardy Udyan, previously known as Ramna Race Course ground regarding the Liberation War of Bangladesh.\n");
        printf("Location: Bajitpur - Kuliarchar Rd, Kuliarchar, Kishoreganj\n");
        printf("Distance: 98.3 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(k == 2)
    {
        printf("\nIsha Khan's Jangalbari Fort is known as Jungle-bari Durgo, Isha Khar Bari etc. to the local people. There is a dilapidated building is still available there. A portion of that building is still being used by the decedents from Isha Kha.\n");
        printf("Location: Karimganj Upazila, Kishoreganj\n");
        printf("Distance: 102 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(k == 3)
    {
        printf("\nThe Pagla Masjid is located about 2500 years old on the banks of the river Narsunda in Haruya area of ​​Kishoreganj district. Traditionally, a spiritual practitioner of madness wandered in the temple at the base of the river Narsunda and came to the mosque. Gradually, the devotees surrounded him. After the death of the spiritual priest, a mosque was erected next to his grave. Now known as Pagla Mosque.\n");
        printf("Location: Harua, Kishoreganj\n");
        printf("Distance: 96.4 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(k == 4)
    {
        printf("\nDelhir Akhra is a beautiful place with full of Hizal trees in Katkhal Union of Mithamain Upazila of Kishoreganj. It is also one of the favorite destinations for visitors in the rainy season. There is a four-hundred years old  interesting story about this place. A saint came here to meditate long time ago and some monsters used to disturb him trying to break his meditation. One day, the saint became annoyed and transformed these monsters into hizal trees using a mantra of his teacher.\n");
        printf("Location: Katkhal Union, Mithamain Upazila, Kishoreganj\n");
        printf("Distance: 214 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(k == 5)
    {
        printf("\nChandrabati Mandir was named of poet Chandrabati who is considered to be the first Female poet in Bengali literature. Poet Chondraboti started narrating the Ramayana from the Sita's point of view by criticizing Rama. But unfortunately, she couldn't finish her work.\n");
        printf("Location: Chandrabati, Kishoreganj\n");
        printf("Distance: 106 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
     else if(k==7)
    {
        system("CLS");
        return hi();
    }
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Manikganj()
{
    int man;
    system("cls");
    printf("\nWelcome to Manikganj\n");
    printf("\nWhich Tourist spot you want to see?\n1. Teota Zamindar Palace\n2. Baliati Palace\n3. Bathaimuri Majar\n4. Aricha Ghat\n5. Motter Moth\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    printf("Enter the number:");
    scanf("%d", &man);
    system("CLS");
    if(man == 1)
    {
        printf("\nTeota Zamindar Palace is locally known as Teota Rajbari and Teota Zamindar Bari. This palace is possibly over 300 years old. This old dilapidated palace was the home of two brothers named Babu Hemsankar Ray and Babu Joy Sankar Ray who were the ruler of Teota. The whole premise has over 50 rooms. Currently those are occupied by the homeless people.\n");
        printf("Location: Shibalaya Upazila, Manikganj\n");
        printf("Distance: 78.1 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(man == 2)
    {
        printf("\nThe Great Baliati Palace is about 200 years of old. A river named Gazikhali which is demised interim of the time, flowed at the northern side of the palace. The palace is situated on a lush and sprawling premise, approximately 16000 square meter. There are possibly 200 rooms available inside the premise. Back side of the palace has a pond having four ghats. Other side of the pond has a series of sanitary lavatory. This is a great tourist spot.\n");
        printf("Location: Baliati, Saturia Upazila, Manikganj\n");
        printf("Distance: 60.5 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(man == 3)
    {
        printf("\nBathaimuri Majar is a religious and also beautiful shrine. If you are interest in a landmark which is religious and beautiful at the same time you can visit this shrine.\n");
        printf("Location: Bathaimuri, Jhitka Manikganj Road, Manikganj\n");
        printf("Distance: 59.1 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(man == 4)
    {
        printf("\nAricha Ghat is an important river port in Bangladesh. It is situated in Manikganj District. The port is managed by Bangladesh Inland Water Transport Authority. Daulatdia-Paturia route ferries ply from this port.\n");
        printf("Location: Dhaka - Aricha Hwy, Shivalaya, Manikganj\n");
        printf("Distance: 75.4 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(man == 5)
    {
        printf("\nTemple of Motto or Motter Moth is located at the village Motto of Manikganj Sadar Upazila. It is situated at the eastern side of Manikganj town. This Moth is about 50-60 feet tall, looks like a Shiva temple. Currently this Moth is abandoned, located beside a pond. A new temple is built near the old one. It is not sure who built that moth or its actual time period.\n");
        printf("Location: Motto, Manikganj Sadar Upazila, Manikganj\n");
        printf("Distance: 50 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(man==7)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Munshiganj()
{
    int mun;
    system("cls");
    printf("\nWelcome to Munshiganj\n");
    printf("\nWhich Tourist spot you want to see?\n1. Idrakpur Fort\n2. Baba Adam Mosque\n3. Nateshwar Buddhist temple\n4. Sonarong Jora Moth\n5. Maijpara Moth\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &mun);
    system("CLS");
    if(mun == 1)
    {
        printf("\nIdrakpur Fort was built in the year 1660 by the Mughal Emperor's commander of Bengal Mir Jumla. This fort was built to protect the area from the attack of Magh and Portuguese pirates.\n");
        printf("Location: Munshiganj city center\n");
        printf("Distance: 40 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(mun == 2)
    {
        printf("\nHazrat Baba Adam Shahid (R) came to this region in 1173 to spread the religion of Islam. In 1178 he became martyred. His tomb is situated at Sipahi Para village. There is Baba Adam Mosque, a six domed mosque behind the tomb. It was probably built in 1483 by a person named Malik Kafur.\n");
        printf("Location: Munshiganj\n");
        printf("Distance: 40.1 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(mun == 3)
    {
        printf("\nNateshwar Buddhist temple is one of the ancient Buddha temple in Bangladesh. Very recent years, Archaeologist discovered it by conducting recurring excavations. Joint team of archaeologists from Bangladesh and China has unearthed this ancient Buddhist temple with unique architectural features at the village Nateshwar in Munshiganj. It is believed that this discovery will offer interesting glimpses into the early life of Atish Dipankar. A renowned Buddhist saint and scholar in Asia, who was born in this area over a thousand years ago.\n");
        printf("Location: Tongibari , Munshiganj\n");
        printf("Distance: 44.2 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(mun == 4)
    {
        printf("\nSonarong Jora Moth  is used to call twin moth/temple, because it has two towers side by side. It may be around 150 feet high from the ground. There is a large pond just in front of the Moth. This moth is not functioning now a days.\n");
        printf("Location: Sonarong, Tongibari ,Munshiganj\n");
        printf("Distance: 45.6 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(mun == 5)
    {
        printf("\nMaijpara Moth belongs to 300 years old long history, situated just beside the Babu Bari dighi (large pond). During the reign of Dewan Murshid Kuli Khan, this Moth was being constructed on the grave of Zamindar Tara Prashad Ray. Later in Bengali year 1212, this moth was being reconstructed.\n");
        printf("Location: Dhaka-Dohar Highway, Rarikhal, Sreenagar, Munshiganj\n");
        printf("Distance: 65.6 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }

    }
    else if(mun==7)
    {
        system("CLS");
        return hi();
    }
     else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Narayanganj()
{
    int n;
    system("cls");
    printf("\nWelcome to Narayanganj\n");
    printf("\nWhich Tourist spot you want to see?\n1. Banglar Taj Mahal\n2. Zinda Park\n3. NOM Park\n4. Hajiganj Fort\n5. Murapara Jamidar Bari\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &n);
    system("CLS");
    if(n == 1)
    {
        printf("\nBanglar Taj Mahal is a full-scale copy of the original Taj Mahal located 16 kilometres east of the Bangladeshi capital, Dhaka in Sonargaon. Unlike the original, work on the building took only five years. Ahsan Ullah Moni, a wealthy Bangladeshi film-maker, announced his 'Copycat version of Taj Mahal' project in December 2008.\n");
        printf("Location: Sonargaon Upazila, Narayanganj\n");
        printf("Distance: 26 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(n == 2)
    {
        printf("\nZinda Park is a beautiful park. There have lots of tree and totally green atmosphere. Soundless situation which is creating inner peace. One big lake there have. Home made food are also available there like desi food. There also have a school and library. Architectural design give you a pleasure mind. Very comfortable place and staff behave are also very good and polite. Everybody should visit for recreation.\n");
        printf("Location: Zinda Park Rd, Narayanganj\n");
        printf("Distance: 20.1 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(n == 3)
    {
        printf("\nNasim Osman Memorial Amusement Park is Called NOM Park in short. The park has become one of the most favorite recreational places in Narayanganj. People of all ages visit the park every day. In the afternoon the park becomes crowded with people, especially children.  People are engaged here in taking photos with friends, walking with a loved one. The children are busy here in riding many interesting rides.\n");
        printf("Location: Narayanganj district\n");
        printf("Distance: 25.3 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(n == 4)
    {
        printf("\nHajiganj Fort also called Khizrpur Fort, situated at Hajiganj locality of Narayanganj on the western bank of the Sitalakshya. Having the characteristics of a water fort, it was originally built just at the point where the old Buriganga discharged into the Sitalakshya. It may have been built soon after Islam Khan established the Mughal capital at Dhaka, and was intended to countercept the raids of the Magh and Portuguese pirates.\n");
        printf("Location: Godenail, Hajiganj, Narayanganj\n");
        printf("Distance: 28.9 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(n == 5)
    {
        printf("\nMurapara Jamidar Bari was built during 1890 by Ramratan Banarjee. He was a trusted person of a British Indigo Planter during the British Colonial period. At that time when the indigo planter left the country after the death of his daughter, he gifted plenty of gold and money to Ramratan. Using those, he built this mammoth palace. During the war 1971, many ornate portion of the palace was plundered by people. We came to know that there were two statues of lions at the gate of the palace boundary, and both of them stolen that time. After the war, this palace was used as a refuge camp for the non-bengali people & local people established a college using the building.\n");
        printf("Location: Murapara College Main Rd, Murapara, Narayanganj\n");
        printf("Distance: 27.2 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(n==7)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Narsingdi()
{
    int nar;
    system("cls");
    printf("\nWelcome to Narsingdi\n");
    printf("\nWhich Tourist spot you want to see?\n1. Arshinagar Park and mini zoo\n2. Dream Holiday Park\n3. Monu Mia Zamindar Bari\n4. Ashrafpur Mosque\n5. ");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &nar);
    system("CLS");
    if(nar == 1)
    {
        printf("\nArshinagar Park and mini zoo is next to Narsingdi Railway Station. Literally, Situated in the east side of the Railway station which was founded by late M.P. Shamsuddin Ahmed Ishwaque. There is a big banyan tree outside the park and mini zoo. Where people used to take rest after a long walk or a tiring journey. Under the tree there is a nice place of public sitting. Under this banyan tree, Late M.P. used to sit every day and listened people 'Grievances'. And after his death, he was buried under this tree. His graveyard is nicely decorated with shiny tiles.\n");
        printf("Location: Narsingdi Sadar, Narsingdi\n");
        printf("Distance: 51.9 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(nar == 2)
    {
        printf("\nDream Holiday Park, a World-class theme park has been set up in the Narsingdi district near the capital Dhaka. This park is situated near the Dhaka-Sylhet highway in Sadar upazila of Panchdona Chaitab. The park was officially launched in late 2011. There are different rides for children and adults in this park.\n");
        printf("Location: Narsingdi district\n");
        printf("Distance: 41.4 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(nar == 3)
    {
        printf("\nMonu Mia Zamindar Bari, a massive Palace with two conjunctive complex located very near to the Ghorashal Bus-stand of Narsingdi. It was reconstructed in the 1335 BE (Bengali Era) by a land lord of this region named Sazda Mia. This Zamindar House is one of the greatest examples of Classical Colonial Architecture in Bangladesh.\n");
        printf("Location: Ghorashal, Palash, Narsingdi\n");
        printf("Distance: 39 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(nar == 4)
    {
        printf("\nAshrafpur is an ancient village of Shibpur Upazila under Narsingdi district. In this village there was two seventh century's copperplate inscription discovered. Ashrafpur Mosque is situated 1 kilometer south to the finding place of these copperplates. An inscribed stone of this Mosque, Once which was attached to the mosque and now preserved in the Bangladesh national museum, reveals that the mosque was built in 930 AH/ 1524 AD by Dilwar Khan during the reign of Sultan Nasiruddin Abul Muzaffar Nusrat Shah (1519-1532).\n");
        printf("Location: Shibpur Upazila, Narsingdi\n");
        printf("Distance: 64.2 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(nar == 5)
    {
        printf("\nParulia Mosque, According to a Persy inscription attached in the main gateway of the mosque; Bibi Jainab, a daughter of Nasir shah and wife of Diwan Sharif, built this mosque in 1126 AH/ 1714 AD. Internally, it is 18.29m in long, 5.18m wide and the wall of the mosque is 1.52m thick. Two lateral arches divided the interior of the mosque into three square sections. Three domes cover the roof of these three sections. The domes are crowned with lotus and kalasa finials. People come to pray and wish to have something (Spiritual) which is related with the well being of their life.\n");
        printf("Location: Palash, Narsingdi\n");
        printf("Distance: 43.5 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(nar==7)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Tangail()
{
    int t;
    system("cls");
    printf("\nWelcome to Tangail\n");
    printf("\nWhich Tourist spot you want to see?\n1. Bangabandhu Bridge\n2. Atiya Mosque\n3. Jamuna Ananda Park\n4. Dhanbari Nawab Manzil\n5. Mohera Zamindar Bari\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &t);
    system("CLS");
    if(t == 1)
    {
        printf("\nBangabandhu Bridge, commonly called the Jamuna Multi-purpose Bridge and also called the Poongi bridge, is a bridge opened in Bangladesh in June 1998. It connects Bhuapur on the Jamuna River's east bank to Sirajganj on its west bank. It was the 11th longest bridge in the world when constructed in 1998 and at present is the 6th longest bridge in South Asia.\n");
        printf("Location: Sirajganj, Tangail\n");
        printf("Distance: 109.2 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(t == 2)
    {
        printf("\nAtiya is a historical four century year old mosque located at the Delduar Thana of Tangail district. It was named by the village Atiya and the mosque is also known as Atiya Jame Masjid. The mosque is around 18m by 12m, it has four spherical domes at the top, one is the larger, which is located at the west part of the mosque. Other three are smaller sized and located at the east side of the mosque. All three domes are in a single row. Local says that the mosque was built for the honor of a saint Shah Baba Kashmiri.\n");
        printf("Location: Atiya Moszid Road, Delduar, Tangail\n");
        printf("Distance: 84.3 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(t == 3)
    {
        printf("\nJamuna Ananda Park is one of the newest & biggest park in Bangladesh. Loceted in Western part of Tangail. People of all ages visit the park every day. In the afternoon the park becomes crowded with people, especially children.  People are engaged here in taking photos with friends, walking with a loved one.\n");
        printf("Location: Jamuna Bridge Patrol Road, Tangail\n");
        printf("Distance: 41.6 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(t == 4)
    {
        printf("\nDhanbari Nawab Manzil is locally known as Nawab Bari. This is now owned by the descendants of Nawab Ali Chowdhury. They have been taking a good care of this palace and also built several cottages inside the premise for the tourists for staying. This is the only heritage resort from our Bangladesh. This is also known as Dhanbari Royal Resort. Inside the premise is very much neat and clean, adequate amount of stuffs and guards are around there to take care of everything. No unauthorized entries are entertained there. So no one will bother visitors while they are enjoying the surroundings.\n");
        printf("Location: Dhanbari, Tangail\n");
        printf("Distance: 84 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(t == 5)
    {
        printf("\nIt is not sure but people believed that they have started their Zamindari somewhere around 1890. First Zamindar was Kalichoron Shaha. Beside their Land Lordship, they have conducted trading related to Jute and Salt. They were the owner of huge land properties from different part of Bangladesh. During country division and war, most of them moved into India. Only very few are living at Tangail. Their attractive edifices are now become a tourist spot. Since they were rich, people says they have built those building before establishing their Zamindari.\n");
        printf("Location: Dhaka - Tangail Highway, Mirzapur, Tangail\n");
        printf("Distance: 72.9 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(t==7)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Faridpur()
{
    int f;
    system("cls");
    printf("\nWelcome to Faridpur\n");
    printf("\nWhich Tourist spot you want to see?\n1. Pathrail Mosque\n2. Faridpur museum\n3. Faridpur Poura Sheikh Rasel Shishu Park\n4. Moinot Ghat Beach- Mini Cox's Bazar\n5. Mathurapur Deul\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &f);
    system("CLS");
    if(f == 1)
    {
        printf("\nThis mosque is known as 'Pathrail Mosque'. But to the local people, it has other names, and it will be easier for you to find the place if you remember the other twos. 'Dighir Par Mosque' and 'Majlis Awlia Mosque'. This mosque was built during anytime between 1393 AD to 1410 AD. There was a large Dighi(water tank) was created just near the mosque. The water tank was made to ease the water problem of the peasant. Thats why people used to call the mosque as 'Dighir par jame moshjid'.\n");
        printf("Location: Bhanga, Faridpur\n");
        printf("Distance: 88.7 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(f == 2)
    {
        printf("\nFaridpur museum is located in the town of Faridpur. Currently this small museum building is also known as Alimuzzaman Hall. It was established in 1977. The top of the museum building is almost looks like a dome of a mosque (kind of an Arabian or Persian style).\n");
        printf("Location: Rajendra College Rd, Faridpur Sadar, Faridpur - 7800\n");
        printf("Distance: 108.4 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(f == 3)
    {
        printf("\nFaridpur Poura Sheikh Rasel Shishu Park is very wonderful place and It is one and only amusement park listed in Faridpur district. The environment is nice, natural beauty is very well preserved, and also there are replicas of the 'Eiffel tower' and 'Statue of liberty' and a large 'T-rex dinosaur' present.\n");
        printf("Location: Dhaka - Faridpur Highway, Faridpur - 7800\n");
        printf("Distance: 113 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(f == 4)
    {
        printf("\nMoinot Ghat is an amazing tourist spot which is situated in Dohar of Nawabganj near Dhaka. Lots of tourists go to this riverbank to get the natural wonderful view of Padma river. Sand of the river, waves, boats, sunrise and sunset give such type of views that tourists feel like they are in Cox's Bazar sea-beach. That's why it is called 'Mini Cox's Bazar' as well. But the rainy season is the best time to visit this place as during this time, the riverside is filled with water and the high waves can be seen. Tourists can hire boat or trawler to enjoy the boat ride.\n");
        printf("Location: Dohar, Nawabganj Upazila, Faridpur\n");
        printf("Distance: 58.4 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(f == 5)
    {
        printf("\nMathurapur Deul, located at the Madhukhali Thana of the Faridpur district. Local people used to call this as Deul. This Deul is around 90 feet tall, and with highly ornate terracotta at the wall of it. If you are a lamdmark lover you will love this place.\n");
        printf("Location: Madhukhali Thana Z7102, Faridpur district\n");
        printf("Distance: 119 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(f==7)
    {
        system("CLS");
        return hi();
    }
  else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Gopalgonj()
{
    int go;
    system("cls");
    printf("\nWelcome to Gopalgonj\n");
    printf("\nWhich Tourist spot you want to see?\n1. Bangabandhu Mausoleum Complex\n2. Sheikh Rasel Poura Shishu Park\n3. Court Masjid\n4. Beel Route Canal\n5. Ulpur Zamindar Bari\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &go);
    system("CLS");
    if(go == 1)
    {
        printf("\nBangabandhu Mausoleum Complex is situated at Tungipara Upazila of Gopalganj district under Dhaka division, Bangladesh. The Mausoleum Complex is located at the Tungipara town. The Father of the Nation Bangabandhu Sheikh Mujibur Rahman was born at Tungipara and his grave is also here.\n");
        printf("Location: PatgatiTungipara Road, Tungipara, Gopalganj\n");
        printf("Distance: 144 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(go == 2)
    {
        printf("\nSheikh Rasel Poura Shishu Park located in Tungipara, Gopalgonj, Bangladesh. It has been  inaugurated recently in 2016. It is a very nice park for the children. Parents take their children their for their refreshment.\n");
        printf("Location: Gopalganj-Tungipara Road, Tungipara, Gopalganj\n");
        printf("Distance: 113 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(go == 3)
    {
        printf("\nCourt Masjid is located at the center of the Gopalganj Sadar Upazila. It is a nicely decorated mosque having a high minaret beside and a central dome a top of the mosque. The dome and the minaret is oriented with lot of small stars. This mosque was inaugurated (at 1949) by the Khaza Nazimuddin, the former governor general of East Pakistan.\n");
        printf("Location: Gopalganj Sadar, Gopalganj\n");
        printf("Distance: 208 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(go == 4)
    {
        printf("\nThe famous Beel Route Canal is situated exactly beside Arpara Munshi Bari of Gopalganj. So after visiting the Munshi Bari, visitors can enjoy their time for a while at the bank of this canal. This is a straight canal that connects the river Arial Khan at Tekerhat with the river Madhumati at Gopalganj.\n");
        printf("Location: Gopalganj\n");
        printf("Distance: 140 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(go == 5)
    {
        printf("\nUlpur Zamindar Bari was built by a Zamindar during 1850. At that time, they made hundreds of buildings for their residence and official purposes. The buildings were made in the traditional Zamindar Bari look and style. In the last 150 years, most of the houses were destroyed by erosion. After being taken by the government, the authority turned some of these houses into government buildings. Now, most of the houses are abandoned or occupied by local people.\n");
        printf("Location: Ulpur, Gopalganj\n");
        printf("Distance: 212 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(go==7)
    {
        system("CLS");
        return hi();
    }

   else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Madaripur()
{
    int m;
    system("cls");
    printf("\nWelcome to Madaripur\n");
    printf("\nWhich Tourist spot you want to see?\n1. Shakuni Dighi\n2. Mithapur Zamindar Bari\n3. Rajaram Mandir\n4. Kalikhola Zamindar Bari\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &m);
    system("cls");
    if(m == 1)
    {
        printf("\nMadaripur town was built around the Shakuni Dighi. The academic name of the lake is 'Shokuni Lake', but local people won’t be able to recognize the lake by that name. They simply know the lake as 'Madaripur Lake'. Now a days this is a great entertainment place for the locals. During the afternoon, it will be hard to get an empty space around the lake. Most of the people from town used to pass some pleasing time with friends here. The sweets from the lake area are famous from Madaripur.\n");
        printf("Location: Madaripur Sadar, Madaripur\n");
        printf("Distance: 100 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(m == 2)
    {
        printf("\nMithapur Zamindar Bari is a historical zamindar house located in a village called Mithapur in Madaripur Sadar upazila of Madaripur district in Bangladesh. It is not known exactly when this zamindar house was established or who is the founder of this zamindar house. However, the names of some famous people of this zamindar dynasty are known from history.\n");
        printf("Location: Mithapur Zamindar Bari, Madaripur\n");
        printf("Distance: 99.9 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(m == 3)
    {
        printf("\nThe great 'Rajaram Mandir' which is located at the Khalia village from Tekerhat, Madaripur. This is a two stored temple, and Bangladesh government taken control of this and promulgate this as the Archaeological heritage of the country. It's not known when the temple was built. From the name, its easily guess that, it was built by someone rich person Rajaram. This lovely temple has noticeable number of terracotta on the wall and the pillar. The experts used to say the images from the temple actually depict some portion of the Mahabharat and Ramayan. If you are an archaeological heritage lover, then it's a must visit place for you.\n");
        printf("Location: Tekerhat, Rajoir Upazila, Madaripur\n");
        printf("Distance: 114 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(m == 4)
    {
        printf("\nKalikhola Zamindar Bari is locally named as 'Shaha Bari', built by someone rich merchant. The owner of the house left the house during the war 1971 with Pakistan. Before leaving the country, he somehow able to sell his properties. This building is not that much older compare to other Palaces from Bangladesh. But still this place is worth to visit.\n");
        printf("Location: Kalikhola, Kalkini Upazila, Madaripur\n");
        printf("Distance: 148 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(m==7)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Rajbari()
{
    int r;
    system("cls");
    printf("\nWelcome to Rajbari\n");
    printf("\nWhich Tourist spot you want to see?\n1. Mir Mosharrof Hossain Memorial Museum\n2. Jor Bangla Mandir\n3. Kalyan Dighi\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &r);
    system("cls");
    if(r == 1)
    {
        printf("\nMir Mosharraf Hossain was a famous Bengali language novelist, playwright and essayist in 19th century. He is popular among the people for his famous novel Bishad Sindhu. His original house at Kumarkhali being demolished almost 130 years ago. In the year 2008, government established an auditorium in that place along with a primary school. That place is used as a museum too, which is named as Mir Mosharrof Hossain Memorial Museum. Inside the Museum, visitors may not discover a significant number of collections. But, a few collections will make the visitor remember the lifestyle of this great novelist.\n");
        printf("Location: Padamdi, Baliakandi, Rajbari\n");
        printf("Distance: 120 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(r == 2)
    {
        printf("\nJor Bangla Mandir are found in Naliya village of Biliakandi Upazila. The temple was built in 1655. It is known that Raja Sitaram Ray built this temple. If you are a fan of ancient landmarks, then this place is worthy for your visit.\n");
        printf("Location: Naliya, Baliakandi Upazila, Rajbari\n");
        printf("Distance: 112 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(r == 3)
    {
        printf("\nHistorical Kalyan Dighi is located in Rajdharpur village of Nawabpur union, 6 miles west of Rajbari town. The lake is located on about 16 khada land. There are two differences of opinion regarding the excavation history of this huge lake. One is associated with Raja Sitaram and the other is associated with Khan Jahan Ali. The lake was excavated 400 to 600 years ago, regardless of which of the two doctrines.\n");
        printf("Location: Nababpur Union, Rajbari\n");
        printf("Distance: 120 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(r==7)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}

void Shariatpur()
{
    int s;
    system("cls");
    printf("\nWelcome to Shariatpur\n");
    printf("\nWhich Tourist spot you want to see?\n1. Fatehjung Fort\n2. Burir Hat Mosque\n3. Modern Fantasy Kingdom\n4. Haturia Zaminder Bari\n\n");
    printf("press 7 to go to the privous page\npress the number:");
    scanf("%d", &s);
    system("cls");
    if(s == 1)
    {
        printf("\nFatehjung Fort was built by the Mughal commander Raja Mansingh. When Raja Mansingh attacked Bikrampur, his fellow warriors were defeated by the King Kedar Rai and took refuge in Srinagar. Mansingh sent his troops to rescue them. As a result, a massive battle took place. Kedar Rai got injured in this battle and died. The fort of Mansingh is a mark of the battle.\n");
        printf("Location: Fatehjangpur, Naria, Shariatpur\n");
        printf("Distance: 92.2 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(s == 2)
    {
        printf("\nThe Burir Hat Mosque in Sadar sub-district is very famous and a great symbol of Islamic architecture. If you are a fan of religious landmark or landmark, you can visit this fascinating mosque.\n");
        printf("Location: Vedorgonj-Burirhaat Rd, Shariatpur\n");
        printf("Distance: 103 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(s == 3)
    {
        printf("\nModern Fantasy Kingdom is an amusement park located in Kedarpur union. Here has the largest aquarium of Bangladesh. Different ages of people come to this park for enjoyment & refreshment. A recommended spot for tourists.\n");
        printf("Location: Naria, Shariatpur\n");
        printf("Distance: 93 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(s == 4)
    {
        printf("\nHaturia is the birth place of Zamindar Sekander Ali Chowdhury who was the Recognized Muslim Zamindar in British Period. Haturia is the place in Gosairhat Upazila where once upon a time, there was Stimar Station. The old structure of Haturia Zamindar Bari is now destroyed for lack of caring.\n");
        printf("Location: Gosairhat, Shariatpur\n");
        printf("Distance: 123 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi();
        }
    }
    else if(s==7)
    {
        system("CLS");
        return hi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Dhaka();
        }
        else if(n==2)
        {
          system("SLB");
          return main();
        }
    }
}
void hi(){
int d,m,a;
        printf("\nWhich district's tourist place you want to see?\n 1. Dhaka\n 2. Gazipur\n 3. Kishoreganj\n 4. Manikganj\n 5. Munshiganj\n 6. Narayanganj\n 7. Narsingdi\n 8. Tangail\n 9. Faridpur\n10. Gopalgonj\n11. Madaripur\n12. Rajbari\n13. Shariatpur\n");
        printf("\You can press 14  to go to the previous page");
        printf("\nEnter the number:");
        scanf("%d",&d);
        if(d == 1)
        {
           Dhaka();

        }
        else if(d == 2)
        {
            Gazipur();
        }
        else if(d == 3)
        {
            Kishoreganj();
        }
        else if(d == 4)
        {
            Manikganj();
        }
        else if(d == 5)
        {
            Munshiganj();
        }
        else if(d == 6)
        {
            Narayanganj();
        }
        else if(d == 7)
        {
            Narsingdi();
        }
        else if(d == 8)
        {
            Tangail();
        }
        else if(d == 9)
        {
            Faridpur();
        }
        else if(d == 10)
        {
            Gopalgonj();
        }
        else if(d == 11)
        {
            Madaripur();
        }
        else if(d == 12)
        {
            Rajbari();
        }
        else if(d == 13)
        {
            Shariatpur();
        }
        else
        {
            system("CLS");
            dhaka();
        }

    }
void hridoyvaia()
{
    int ppp;

            printf("\n\n\n\t\t\t\t\t\t\t Choose Your Option Here\n");
            printf("\t\t\t\t\t\t\t.........................\n\n\n");
            printf("\t1.visa\n");
            printf("\t2.Divisions\n");
            printf("\t3.currency converter\n");
            printf("\t4.Health care\n");
            printf("\t5.HelpLine\n");
            printf("\t6.About us\n\n");
            printf("\tPress '7' to back to previous page\n\n");
            printf("\n\n\tPress the number: ");
            scanf("%d",&ppp);
            if(ppp==1)
            {
            system("CLS");
            visa();
            }
            if(ppp==2)
            {
              system("CLS");
              division();
            }
            if(ppp==4)
            {
                system("CLS");
                health();
            }
            if(ppp==5)
            {
                system("CLS");
                help();
            }
            if(ppp==6)
            {
                system("CLS");
                about();
            }
            if(ppp==3)
            {
              system("CLS");
              ccon();
            }
             else if(ppp==7)
            {
                system("CLS");
                return main();
            }
            else
            {
                printf("Sorry! you entered wrong information\n");
                printf("Press 1 to go to previous page\n");
                printf("Press 2 to go to main page\n");
                printf("Press 2 to go to end the program\n");
                int syed;
                printf("Press the number:");
                scanf("%d",&syed);
                if(syed==1)
                {
                    system("CLS");

                }
                else if(syed ==2)
                {
                    system("CLS");
                    return main();
                }

            }
}
              void division(){


                system("CLS");
                printf("1.Tourist places in Dhaka\n");
                printf("2.Tourist places in sylhet\n");
                printf("3.Tourist places in Chattogram\n");
                printf("4.Tourist places in Rajshahi\n");
                printf("5.Tourist places in Rangpur\n");
                printf("6.Tourist places in Barishal\n");
                printf("7.Tourist places in Mymensingh\n");
                printf("8.Tourist places in Khulna\n");
                printf("Press '9' to go back\n\n");
                int ifat;
                printf("Press the Number:");
                scanf("%d",&ifat);
                if(ifat==1)
                {
                    dhaka();
                }
                else if(ifat==2)
                {
                    sylhet();
                }
                else if(ifat==3)
                {
                    chattogong();
                }
                else if(ifat==4)
                {
                    rajshahi();
                }
                else if(ifat==5)
                {
                    rangpur();
                }
                else if(ifat==6)
                {
                    Barisal1();
                }
                else if(ifat==7)
                {
                    Mymensingh();
                }
                else if (ifat==8)
                {
                    khulna1();
                }
                else if(ifat==9)
                {
                    system("CLS");
                    hridoyvaia();
                }
                else
                {
                    printf("Sorry you entered wrong information\n");
                    int hridoy1;
                    printf("Press 1 to go back to main page\n");
                    printf("Press 2 to go back to previous page\n");
                    scanf("%d",&hridoy1);
                    if(hridoy1==1)
                    {
                        system("CLS");
                        return main();
                    }
                    else if(hridoy1==2)
                    {
                        system("CLS");
                        hridoyvaia();
                    }

                }
              }

void rangpur()
{
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t***WELCOME TO RANGPUR***\n");
    printf("\t\t\t\t\t\t\t\t     '''''''''''''''''''''''''''''\n");
    printf("\t\t\t\t\t\t\t\t '''''''''''''''''''''''''''''''''''''\n\n\n\n");
    printf("Short Contact To Rangpur -->\n");
    printf("------------------------\n\n");
    printf(">>Rangpur Division is one the Divisions in Bangladesh.\n\n>>It was formed on 25 January 2010,as Bangladesh's 7th division.\n\n");
    printf(">>Before that, it was under Rajshahi Division.\n\n>>The Rangpur division consists of eight districts.\n\n>>There are 58 Upazilas or subdistricts under these eight districts.\n\n>>Rangpur is the northernmost division of Bangladesh and has a population of 15,665,000 in the 2011 Census.\n\n\n\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n\n");
    printf(">>Press 1 To Find Banks & ATMs\n");
    printf("  ............................\n\n\n");
    printf(">>Press 2 To Find Hotel and Resorts\n");
    printf("  .................................\n\n\n");
    printf(">>Press 3 To Find Tourist Spots\n");
    printf("  .............................\n\n\n");
    printf(">>Press 4 To Get Back\n");
    printf("  ....................\n\n\n");
    printf(">>> ");
    int op;
    scanf("%d",&op);
    if(op==1)
    {
        rbanks();
    }
    if(op==2)
    {
        rhotel();
    }
    if(op==3)
    {
        rtourist();
    }
    if(op==4)
    {
        return division();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return rangpur();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
void rhotel()
{

    system("CLS");
    printf("\n\n~~~Some of Best Hotels In Rangpur~~~");
    printf("\n\n\n");
    printf("1.Little Rangpur Inn\n\n");
    printf("2.Caspia Home\n\n");
    printf("3.Grand Palace Hotel & Resort\n\n");
    printf("4.RDRS Guest House\n\n");
    printf("5.Hotel North View\n\n");
    printf("6.Rayan's Hotel\n\n\n\n");

    int in;
    printf("Press '1' To Enter\n\n");
    printf("Press '2' To Get Back\n\n");
    printf(">>> ");
    scanf("%d",&in);
    if(in==1)
    {
    int eh;
    printf("\n\nPress distinct number to find your suitable hotel....>>> ");
    scanf("%d",&eh);

    if(eh==1)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO LITTLE RANGPUR INN<<<\n\n\n\n");
        printf("Location - Kotwali Thana Road, Rangpur \n5400 Bangladesh\n\n");
        printf("Distance - 35.7km From Lalmonirhat Airport\n\n");
        printf("Prices Starts From-\n\t\t");
        printf("Deluxe Double or Twin Room - BDT 2,545 per night\n\n");
        printf("Online Booking Link : https://www.booking.com/Little Rangpur Inn\n\n");
        printf("Mobile No : 01715-235155\n\n");
        printf("***THANK YOU FOR VISITING US***\n\n");
        int rh1;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&rh1);
        if(rh1==1)
        {
            system("CLS");
            return rhotel();
        }
    }
    if(eh==2)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO CASPIA HOME<<<\n\n\n\n");
        printf("Location - Cantonment Road in front of Circuit House,Rangpur\n\t5400 Bangladesh\n\n");
        printf("Distance - 43.3km From Lalmonirhat Airport\n\n");
        printf("Accommodation Prices-\n\t\t");
        printf("Deluxe Single Room - BDT 1521 per night\n\n");
        printf("Online Booking Link : https://www.booking.com/Caspia Home\n\n");
        printf("Mobile No : 01842-227742\n\n");
        printf("***THANK YOU FOR VISITING US***\n\n");
        int rh2;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&rh2);
        if(rh2==1)
        {
            system("CLS");
            return rhotel();
        }
    }
    if(eh==3)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO GRAND PALACE HOTEL & RESORT<<<\n\n\n\n");
        printf("Location - GL Roy Road,Rangpur\n\t5400 Bangladesh\n\n");
        printf("Distance - 34.8km From Lalmonirhat Airport\n\n");
        printf("Accommodation Prices-\n\t\t");
        printf("Deluxe Single Room - BDT 11400 per night\n\n");
        printf("Online Booking Link : https://www.booking.com/Grand Palace and Resort\n\n");
        printf("Mobile No : 01713-558844\n\n");
        printf("***THANK YOU FOR VISITING US***\n\n");
        int rh3;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&rh3);
        if(rh3==1)
        {
            system("CLS");
            return rhotel();
        }
    }
    if(eh==4)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO RDRS Guest House<<<\n\n\n\n");
        printf("Location - Jail Road,Rangpur\n\t   5400 Bangladesh\n\n");
        printf("Distance - 42.8km From Lalmonirhat Airport\n\n\n");
        printf("Accommodation Prices-\n\n\t\t");
        printf("Deluxe Single Room - BDT 1730 per night\n\nDouble Room - BDT 2480 per night\n\n");
        printf("Online Booking Link : https://www.booking.com/RDRS guest house\n\n");
        printf("Mobile No : 01713-200185\n\n");
        printf("\t\t\t\t\t\t\t\t***THANK YOU FOR VISITING US***\n\n\n\n");
        int rh4;
        printf("\t\t\t\t\t\t\tPress '1' To Return...\n\n\t\t\t\t\t\t\t>>> ");
        scanf("%d",&rh4);
        if(rh4==1)
        {
            system("CLS");
            return rhotel();
        }
    }
    if(eh==5)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO HOTEL NORTH VIEW<<<\n\n\n\n");
        printf("Location - Central Point,97/1Central Road,Rangpur\n\t   5400 Bangladesh\n\n");
        printf("Distance - 35.2km From Lalmonirhat Airport\n\n\n");
        printf("Accommodation Prices-\n\n\t\t");
        printf("Deluxe Single Room - BDT 1530 per night\n\n\t\tDouble Room - BDT 2200 per night\n\n");
        printf("Online Booking Link : https://www.booking.com/Hotel North View\n\n");
        printf("Mobile No : 01766-212131\n\n");
        printf("\t\t\t\t\t\t\t\t***THANK YOU FOR VISITING US***\n\n\n\n");
        int rh5;
        printf("\t\t\t\t\t\t\tPress '1' To Return...\n\n\t\t\t\t\t\t\t>>> ");
        scanf("%d",&rh5);
        if(rh5==1)
        {
            system("CLS");
            return rhotel();
        }
    }
    if(eh==6)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO RAYAN'S HOTEL<<<\n\n\n\n");
        printf("Location - Lal Kuthi Road,Rangpur\n\t   5400 Bangladesh\n\n");
        printf("Distance - 42.4km From Lalmonirhat Airport\n\n\n");
        printf("Accommodation Prices-\n\n\t\t");
        printf("Deluxe Single Room - BDT 900 per night\n\nDouble Room - BDT 1650 per night\n\n");
        printf("Online Booking Link : https://www.booking.com/Rayan's Hotel\n\n");
        printf("Mobile No : 01738-695725\n\n");
        printf("\t\t\t\t\t\t\t\t***THANK YOU FOR VISITING US***\n\n\n\n");
        int rh6;
        printf("\t\t\t\t\t\t\tPress '1' To Return...\n\n\t\t\t\t\t\t\t>>> ");
        scanf("%d",&rh6);
        if(rh6==1)
        {
            system("CLS");
            return rhotel();
        }
    }
    }
    else if(in==2)
    {
        return rangpur();
    }
}
void rbanks()
{


        system("CLS");
        printf("1.Agrani Bank Limited\n\tAlamnagar Branch,Mozidon Complex(1st Floor),Station Road,Rangpur\n\n\n");
        printf("2.Prime Bank Limited\n\tJahaj Company Road,Rangpur\n\n\n");
        printf("3.Sonali Bank Limited\n\tRangpur Corporate Branch,Station Road,Rangpur\n\n\n");
        printf("4.Mercantile Bank Limited\n\tRangpur\n\n\n");
        printf("5.Mutual Trust Bank Limited\n\tMostofa Super Market ,1st & 2nd floor, Jahaj Company Road,Rangpur\n\n\n");
        printf("6.Dutch-Bangla Bank ATM Booth\n\tShapla Road,Rangpur\n\n\n");
        printf("7.Prime Bank ATM Booth\n\tNear To Rangpur Passport Office,Dhap Road,Rangpur\n\n");
        printf("----------------------------------------------------------\n");
        printf("----------------------------------------------------------\n\n");
        int in;
        printf("Press '1' To Enter\n\n");
        printf("Press '2' To Get Back\n\n");
        printf(">>> ");
        scanf("%d",&in);
        if(in==1)
        {
        int eb;
        printf("Press Distinct Number To Enter Bank- \n\n\n>>>");
        scanf("%d",&eb);
        if(eb==1)
        {
            system("CLS");
            printf("Distance : 33.9km From Lalmonirhat Airport\n\n");
            printf("Time Needed : 1 hour 15 minutes approximately\n\n");
            printf("Google Map Link : Mostofa Super Market ,1st & 2nd floor, Jahaj Company Road,https://www.google.com/maps/dir/Lalmonirhat+Airport,+N509,+Rangpur/Some+banks+those+are+in+the+area+of+rangpur+airport/@25.7960818,89.2204369,11z/data=!3m1!4b1!4m13!4m12!1m5!1m1!1s0x39e2d853cd811899:0xf386e853513c7cff!2m2!1d89.4322622!2d25.8897183!1m5!1m1!1s0x39e32d95768b6d89:0x3e4b81dfab509464!2m2!1d89.2649077!2d25.7292283");
            printf("\n\n\t\t\t\tPress '1' to return- ");
            int ret1;
            scanf("%d",&ret1);
            if(ret1==1)
            {
                system("CLS");
                return rbanks();
            }
        }
        else if(eb==2)
        {
            system("CLS");
            printf("Distance : 35.2km From Lalmonirhat Airport\n\n");
            printf("Time Needed : 1 hour 21 minutes approximately\n\n");
            printf("Goole Map Link : https://www.google.com/maps/dir/%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F+%E0%A6%AC%E0%A6%BF%E0%A6%AE%E0%A6%BE%E0%A6%A8%E0%A6%AC%E0%A6%A8%E0%A7%8D%E0%A6%A6%E0%A6%B0,+N509,+%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F/Prime+Bank+Limited,+Jahaj+Company+Road,+%E0%A6%B0%E0%A6%82%E0%A6%AA%E0%A7%81%E0%A6%B0/@25.8338175,89.2046575,11z/data=!3m1!4b1!4m13!4m12!1m5!1m1!1s0x39e2d853cd811899:0xf386e853513c7cff!2m2!1d89.4322622!2d25.8897183!1m5!1m1!1s0x39e32dfb6788bfc1:0xa6ea10a8e38fd902!2m2!1d89.2550218!2d25.7491006\n\n");

            printf("\n\n\t\t\t\tPress '1' to return- ");
            int ret2;
            scanf("%d",&ret2);
            if(ret2==1)
            {
                system("CLS");
                return rbanks();
            }
        }
        else if(eb==3)
        {
            system("CLS");
            printf("Distance : 35.6km From Lalmonirhat Airport\n\n");
            printf("Time Needed : 1 hour 20 minutes approximately\n\n");
            printf("Google Map Link : https://www.google.com/maps/dir/%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F+%E0%A6%AC%E0%A6%BF%E0%A6%AE%E0%A6%BE%E0%A6%A8%E0%A6%AC%E0%A6%A8%E0%A7%8D%E0%A6%A6%E0%A6%B0,+N509,+%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F/Sonali+Bank+Limited,+Station+Road,+%E0%A6%B0%E0%A6%82%E0%A6%AA%E0%A7%81%E0%A6%B0/@25.8338175,89.2046575,11z/data=!3m1!4b1!4m13!4m12!1m5!1m1!1s0x39e2d853cd811899:0xf386e853513c7cff!2m2!1d89.4322622!2d25.8897183!1m5!1m1!1s0x39e32dfa54065a89:0x43435da9f49f063c!2m2!1d89.2535791!2d25.7462975");

            printf("\n\n\t\t\t\tPress '1' to return- ");
            int ret3;
            scanf("%d",&ret3);
            if(ret3==1)
            {
                system("CLS");
                return rbanks();
            }
        }
        else if(eb==4)
        {
            system("CLS");
            printf("Distance : 35.2km From Lalmonirhat Airport\n\n");
            printf("Time Needed : 1 hour 19 minutes approximately\n\n");
            printf("Google Map Link - https://www.google.com/maps/dir/%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F+%E0%A6%AC%E0%A6%BF%E0%A6%AE%E0%A6%BE%E0%A6%A8%E0%A6%AC%E0%A6%A8%E0%A7%8D%E0%A6%A6%E0%A6%B0,+N509,+%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F/Mercantile+Bank+Limited,+Jahaj+Company+Road,+%E0%A6%B0%E0%A6%82%E0%A6%AA%E0%A7%81%E0%A6%B0/@25.8338175,89.2046575,11z/data=!3m1!4b1!4m13!4m12!1m5!1m1!1s0x39e2d853cd811899:0xf386e853513c7cff!2m2!1d89.4322622!2d25.8897183!1m5!1m1!1s0x39e32dfb14683dc3:0x13983abad8a47e91!2m2!1d89.2546804!2d25.7479868");

            printf("\n\n\t\t\t\tPress '1' to return- ");
            int ret4;
            scanf("%d",&ret4);
            if(ret4==1)
            {
                system("CLS");
                return rbanks();
            }
        }
        else if(eb==5)
        {
            system("CLS");
            printf("Distance : 35.1km From Lalmonirhat Airport\n\n");
            printf("Time Needed : 1 hour 19 minutes approximately\n\n");
            printf("Google Map Link - https://www.google.com/maps/dir/%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F+%E0%A6%AC%E0%A6%BF%E0%A6%AE%E0%A6%BE%E0%A6%A8%E0%A6%AC%E0%A6%A8%E0%A7%8D%E0%A6%A6%E0%A6%B0,+N509,+%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F/Mutual+Trust+Bank+Limited,+Jahaj+Company+Road,+%E0%A6%B0%E0%A6%82%E0%A6%AA%E0%A7%81%E0%A6%B0/@25.8338175,89.2046575,11z/data=!3m1!4b1!4m13!4m12!1m5!1m1!1s0x39e2d853cd811899:0xf386e853513c7cff!2m2!1d89.4322622!2d25.8897183!1m5!1m1!1s0x39e32dfb7bc453cf:0xbeea10a0b736f3bb!2m2!1d89.2548105!2d25.7489638");

            printf("\n\n\t\t\t\tPress '1' to return- ");
            int ret5;
            scanf("%d",&ret5);
            if(ret5==1)
            {
                system("CLS");
                return rbanks();
            }
        }
        else if(eb==6)
        {
            system("CLS");
            printf("Distance : 35.5km From Lalmonirhat Airport\n\n");
            printf("Time Needed : 1 hour 21 minutes approximately\n\n");
            printf("Google Map Link - https://www.google.com/maps/dir/%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F+%E0%A6%AC%E0%A6%BF%E0%A6%AE%E0%A6%BE%E0%A6%A8%E0%A6%AC%E0%A6%A8%E0%A7%8D%E0%A6%A6%E0%A6%B0,+N509,+%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F/Dutch+Bangla+Bank+ATM,+%E0%A6%B0%E0%A6%82%E0%A6%AA%E0%A7%81%E0%A6%B0/@25.8338175,89.2046575,11z/data=!3m1!4b1!4m13!4m12!1m5!1m1!1s0x39e2d853cd811899:0xf386e853513c7cff!2m2!1d89.4322622!2d25.8897183!1m5!1m1!1s0x39e32dbb4959be51:0xd7dbd7bf64a3462e!2m2!1d89.2535791!2d25.7447254");

            printf("\n\n\t\t\t\tPress '1' to return- ");
            int ret6;
            scanf("%d",&ret6);
            if(ret6==1)
            {
                system("CLS");
                return rbanks();
            }
        }
        else if(eb==7)
        {
            system("CLS");
            printf("Distance : 37.5km From Lalmonirhat Airport\n\n");
            printf("Time Needed : 1 hour 31 minutes approximately\n\n");
            printf("Google Map Link - https://www.google.com/maps/dir/%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F+%E0%A6%AC%E0%A6%BF%E0%A6%AE%E0%A6%BE%E0%A6%A8%E0%A6%AC%E0%A6%A8%E0%A7%8D%E0%A6%A6%E0%A6%B0,+N509,+%E0%A6%B2%E0%A6%BE%E0%A6%B2%E0%A6%AE%E0%A6%A8%E0%A6%BF%E0%A6%B0%E0%A6%B9%E0%A6%BE%E0%A6%9F/Prime+Bank+Limited+ATM,+%E0%A6%A7%E0%A6%BE%E0%A6%AA+%E0%A6%B0%E0%A7%8B%E0%A6%A1,+%E0%A6%B0%E0%A6%82%E0%A6%AA%E0%A7%81%E0%A6%B0/@25.8338175,89.2046575,11z/data=!3m1!4b1!4m13!4m12!1m5!1m1!1s0x39e2d853cd811899:0xf386e853513c7cff!2m2!1d89.4322622!2d25.8897183!1m5!1m1!1s0x39e331f9923d8d67:0xcc9cbe71f1d0e14d!2m2!1d89.2383512!2d25.7606063");

            printf("\n\n\t\t\t\tPress '1' to return- ");
            int ret7;
            scanf("%d",&ret7);
            if(ret7==1)
            {
                system("CLS");
                return rbanks();
            }
        }
        }
        else if(in==2)
        {
            system("CLS");
            return rangpur();
        }

}
void rtourist()
{
    system("CLS");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t---------------\n\t\t\t\t\t\t\t\t\t~~~DISTRICTS~~~\n\t\t\t\t\t\t\t\t\t---------------\n\n\n");
    printf(">>Rangpur itself Has Got Eight Districts\n\n\n");
    printf("~1.Rangpur District\n\n");
    printf("~2.Dinajpur District\n\n");
    printf("~3.Kurigram District\n\n");
    printf("~4.Nilphamari District\n\n");
    printf("~5.Gaibandha District\n\n");
    printf("~6.Thakurgaon District\n\n");
    printf("~7.Panchagarh District\n\n");
    printf("~8.Lalmonirhat District\n\n\n");
    printf("Press '1' To Enter\n\n");
    printf("Press '2' To Get Back\n\n");
    printf(">>> ");
    int in;
    scanf("%d",&in);
    if(in==1)
    {
        int ed;
        printf("\n\nPress Distinct Number of Districts To Enter - ");
        scanf("%d",&ed);
        if(ed==1)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\tWelcome To Rangpur District\n\t\t\t\t\t\t\t---------------------\n\n\n");
            printf("1.Devi Chawdhuryan Rajbari\n");
            printf("  ------------------------\n\n");
            printf("A brief story :\n\n");
            printf(">>> The Landlord-King of Pirgacha sub district HRH Rajah Narendro Narayan Roy Choudhury, son of HRH Rajah Raghabendra Narayan Roy Choudhury died in 1765 without any legacy.\nThen the wife of the late King, HRH Maharani Joy Durga Devi Chaudhurani of Rangpur managed the kingdom for three decades.\nHRH Maharani Joy Durga Devi Chaudhurani is popularly known as Devi Chaudhurani in history and was one of the most successful and popularly known rulers of the kingdom.\nDuring the time of Sanyasi Bidroho (ascetic revolution) for the independence of India, she along with Bhabani Pathak raged war against the British.\nIn this insurgency Collector Richard Gudland and army commander Lieutenant Brenan, scared of the war situation, forfeited the kingdom from Devi Chaudhurani.\nHowever the imperial British could not keep the kingdom forfeited from the illustrious Maharani, and soon after she again came to manage the kingdom and she ruled until 1791.\nLater in history, the famous Bengali novelist, Bankim Chandra Chattopadhyay, who also happened to be the Collector of Rangpur and under the employment of the British rule, wrote the famous novel Devi Chaudhurani to portray her as a dacoit-queen.\nThe novel has been adapted into very famous movies with the 1974 movie starring Suchitra Sen in the lead.\n\n\n");
            printf("Location : Durgapur,Rangpur,Bangladesh\n\n");
            printf("Distance : 48.5km From Rangpur\n\n\n");

            printf("2.Lal Dighi Mosque\n");
            printf("  ----------------\n\n");
            printf("A Brief History :\n\n");
            printf(">>>The mosque is believed to be built in the late 17th to early 18th century.\nThe exact date of construction is not known.\nThere was an inscription tablet located near the eastern facade of the mosque, but this has gone missing.");
            printf("Location : Rsngpur, Z5015, Gopinathpur,Rangpur\n\n");
            printf("Distance : 29.6km From Rangpur\n\n\n");

            printf("3.Begum Rokeya Memorial Center\n");
            printf("  ----------------------------\n\n");
            printf("A Brief History : \n\n");
            printf(">>>Begum Rokeya Sakhawat Hossain, commonly known as Begum Rokeya (9 December 1880 – 9 December 1932), was a Bengali writer, educationist, social activist, and advocate of women's rights.\nShe is considered as the pioneer of Islamic feminismin Bengal.");
            printf("Location : Pairaband,Mithapukhur Upazilla,Rangpur\n\n\n");
            printf("Distance : 14.3km From Rangpur\n\n\n");
            int rt;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&rt);
            if(rt==1)
            {
                return rtourist();
            }
        }
        else if(ed==2)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t  Welcome To Dinajpur District\n\t\t\t\t\t\t\t-------------------------------\n\n\n");
            printf("1.Kantajew Temple\n");
            printf("  ---------------\n\n");
            printf("A Brief History : \n");
            printf(">>>Kantanagar Temple,commonly known as Kantaji Temple or Kantajew Temple at Kantanagar.\nThe Kantajew Temple is one of the most magnificent religious edifices belonging to the 18th century.\n");
            printf("Location : near the Hajee Mohammed Danesh Science and Technology university far about 12 kilometre,Dinajpur,Rangpur\n\n");
            printf("Distance : 68,6km From Rangpur\n\n\n\n");
            printf("2.Sopnopuri Artificial Amusement Park\n\n");
            printf("  -----------------------------------\n");
            printf("A brief History : \n");
            printf(">>>Shopnopuri Artificial Amusement Park is an artificial spot for tourists situated in Dinajpur district of Rangpur division in Bangladesh.\nThere are rides, a zoo, a resthouse, a garden, lakes, central picnic center and countless shopping areas.Other tourist locations include Fish World, ‘Rongdhonu’ Art Gallery, and ‘Moha Maya Indrojal’.\n\n\n");
            printf("Location : Aftabgonj,Rangpur\n\n");
            printf("Distance : 50.3km From Rangpur\n\n");
            printf("\t\t\t\t\t\t\t~~~Hope You liked Our Places~~~\n\n\n");
            int rt2;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&rt2);
            if(rt2==1)
            {
                return rtourist();
            }
        }
        else if(ed==3)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\tWelcome To Kurigram District\n\t\t\t\t\t\t\t---------------------\n\n\n");
            printf("1.The Munshibari\n");
            printf("  --------------\n\n");
            printf("A Brief History : \n\n");
            printf(">>>The Munshibari was a feudal estate in Kurigram District in the Division of Rangpur,Bengal (present day Bangladesh).\nIt was founded in the mid-18th century by an official of the Rulers of Bengal.\nThis is one of the attractive places in Kurigram district\n\n\n");
            printf("Location : Ulipur,Kurigram,Rangpur\n\n");
            printf("Distance : 55.9km From Rangpur\n\n\n");
            printf("2.Chandamari Mosque\n");
            printf("  -----------------\n\n");
            printf("A Brief History : \n\n");
            printf(">>>The Chandamari mosque in Kurigram is an ancient Mughal mosque that has been around for centuries.\nThe mosque is situated in the village of Chandamari in Chakirpasha union under the Rajarhat Upazila in the district of Kurigram.\n\n\n");
            printf("Location : Rajarhat,Kurigram,Rangpur\n\n");
            printf("Distance : 38.1km From Rangpur\n\n\n");
            int rt3;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&rt3);
            if(rt3==1)
            {
                return rtourist();
            }
        }
        else if(ed==4)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\tWelcome To Nilphamari District\n\t\t\t\t\t\t\t---------------------\n\n\n");
            printf("1.Harishchondor Path\n");
            printf("  ------------------\n\n");
            printf("A Brief History : \n\n");
            printf(">>>This is a beautiful palace of Harishchandra, who was a great scholar and a landlord.\nIt is situated in the Nilphamari district and is a place, which is visited by most of the tourists.\nHarishchandra’s lessons can be accessed over there.\nTo visit this place, you have to go north of the Kata River.\nHarishchondor Path is indeed a historical place to visit.\n\n\n");
            printf("Location : North of the Kata River,Nilphamari,Rangpur\n\n");
            printf("Distance : 59.6km From Rangpur\n\n\n");
            printf("2.Nilsagar\n");
            printf("  --------\n");
            printf("A Brief History : \n\n");
            printf(">>>A beautiful river tank in Nilphamari district can be a great place to relax after a whole day of the journey.\nThe blend of natural beauty, authentic food, and fresh weather together can actually lead to an ecstasy of beautiful feelings.\nVisiting Nilphamari and not dropping by this place will be a mistake!\n\n\n");
            printf("Location : Nilphamari,Rangpur\n\n");
            printf("Distance : 72.9km From Rangpur\n\n\n");
            int rt4;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&rt4);
            if(rt4==1)
            {
                return rtourist();
            }
        }
        else if(ed==5)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t   Welcome To Gaibandha District\n");
            printf("\t\t\t\t\t\t\t ---------------------------------\n\n\n");
            printf("1.SKS INN Resort\n\n");
            printf("2.Brief : \n\n");
            printf(">>>Capturing the lifelike view, the SKS Inn and Training Center is standing as a Resort in a rustic setting of Gaibandha with lush green environment.\nThe Inn runs as an attractive resort offering the recreative facilities for family vacation, business events, training programs, social gatherings, cultural events, retreat, etc.\n\n\n");
            printf("Location : College Road,Gaibandha,Rangpur\n\n");
            printf("Distance : 75.1km From Rangpur\n\n\n");
            printf("2.Friendship Center\n");
            printf("  -----------------\n\n");
            printf("Brief : \n\n");
            printf(">>>A rural training centre inspired by one of the country’s oldest urban archaeological sites.\nThe Centre was created to train staff of an NGO working with people inhabiting nearby chars, or riverine islands.\nOffices, a library, meeting rooms, and prayer and tea rooms are included in pavilion-like buildings surrounded by courts and pools.\n\n\n");
            printf("Location : Kanchipara,Gaibandha,Rangpur\n\n");
            printf("Distance : 71.2km From Rangpur\n\n\n");
            int rt5;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&rt5);
            if(rt5==1)
            {
                return rtourist();
            }
        }
        else if(ed==6)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t  Welcome To Thakurgaon District\n");
            printf("\t\t\t\t\t\t\t ---------------------------------\n\n\n");
            printf("1.Haripur Rajbari (Royal Palace)\n");
            printf("  ------------------------------\n\n");
            printf("A brief History : \n\n");
            printf(">>>In Haripur Upazila, there stands a 150 year old Royal Palace. In 1893, Rabendra Chaudhari and his son Jagendra Narayan Ray Chaudhari built this Palace.\n\n\n");
            printf("Location : Haripur,Thakurgaon,Rangpur\n\n");
            printf("Distance : 141km Far From Rangpur\n\n\n");
            printf("2.Jamalpur Zamindar Bari Jame Masjid\n");
            printf("  ----------------------------------\n\n\n");
            printf("A Brief History : \n\n");
            printf(">>>Built in 1867, this mosque has spectacular art and architecture.\nThe top of the dome has coloured glass decor and incredible stone carvings.\n\n\n");
            printf("Location : Shibganj -- Jamalpur Jamidarbari Mosque Road,Thakurgaon,Rangpur\n\n");
            printf("Distance : 118km Far From Rangpur\n\n\n");
            int rt6;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&rt6);
            if(rt6==1)
            {
                return rtourist();
            }
        }
        else if(ed==7)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t  Welcome To Panchagarh District\n");
            printf("\t\t\t\t\t\t\t -----------------------------\n\n\n");
            printf("1.Rocks Museum\n\n");
            printf("A Brief History : \n\n");
            printf(">>>The Panchagarh Rocks Museum is the first rocks museum of Bangladesh.\nIt is located in Panchagarh Govt. Prof. Nazmul Haque, principal of Panchagarh Govt. Mohila College, established the rocks museum on March 1, 1997.\nThe Rocks museum is separate into two galleries, external and internal.\nIn the external gallery there has a vast number of rocks; and in the internal gallery, there are small stones of different ages.\n\n\n");
            printf("Location : Panchagarh Sadar Upazilla,Panchagarh,Rangpur\n\n");
            printf("Distance : 113km Far From Rangpur\n\n\n");
            printf("2.BanglaBandha Port\n");
            printf("  -----------------\n\n");
            printf("Brief : \n\n");
            printf("Banglabandha (also spelled Banglabandh) is a major inland port in northern Bangladesh established to provide a trade link with India, Nepal and Bhutan.\nThe three nations are separated by 52 km (32 mi) of Indian territory, known as the Siliguri Corridor.\nOn the Indian side of the border is Phulbari.\nBorder crossing of vehicles between Phulbari and Banglabandha was inaugurated in January 2011.\n\n\n");
            printf("Location : Banglabandha,Panchagarh,Rangpur\n\n");
            printf("Distance : 166km Far From Rangpur\n\n\n");
            int rt7;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&rt7);
            if(rt7==1)
            {
                return rtourist();
            }
        }
        else if(ed==8)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t  Welcome To Lalmonirhat District\n");
            printf("\t\t\t\t\t\t\t -----------------------------\n\n\n");
            printf("1.Teesta Barrage\n");
            printf("  --------------\n\n");
            printf("Brief : \n\n");
            printf("Teesta Barrage is located at Hatibandha , Lalmonirhat.\nBesides this landmark, there are seven more landmarks listed in Lalmonirhat.\nThere's also three attractions listed in this district in other categories.\n\n\n");
            printf("Location : Hatibandha,Lalmonirhat,Rangpur\n\n");
            printf("Distance : 64.2km Far From Rangpur\n\n\n");
            printf("2.Lalmonirhat Catholic Church\n");
            printf("  ---------------------------\n\n");
            printf("Brief : \n\n");
            printf("An authentic Church.\nDo not Miss The Chance To Go To Lalmonirhat Catholic Church if you Go To Lalmonirhat.\n\n\n");
            printf("Location : Lalmonirhat Sadar,Lalmonirhat,Rangpur\n\n");
            printf("Distance : 38.7km Far From Rangpur\n\n\n");
            int rt8;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&rt8);
            if(rt8==1)
            {
                return rtourist();
            }
        }
    }
    else if(in==2)
    {
        system("CLS");
        return rangpur();
    }
}
void rajshahi()
{
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t***WELCOME TO RAJSHAHI***\n");
    printf("\t\t\t\t\t\t\t\t     '''''''''''''''''''''''''''''\n");
    printf("\t\t\t\t\t\t\t\t '''''''''''''''''''''''''''''''''''''\n\n\n\n");
    printf("Short Contact To Rajshahi -->\n");
    printf("------------------------\n\n");
    printf("Rajshahi is the metropoliton city, and a major urban, commercial and educational centre of Bangladesh.\n\n>>Located on the north bank of the Padma river, near the Bangladesh-India border, the city has a population of over 763,952 residents.\n\n Rajshahi division consists of eight districts.\n\n>>..............................\n\n\n");
    printf(">>Press 1 To Find Banks & ATMs\n");
    printf("  ............................\n\n\n");
    printf(">>Press 2 To Find Hotel and Resorts\n");
    printf("  .................................\n\n\n");
    printf(">>Press 3 To Find Tourist Spots\n");
    printf("  .............................\n\n\n");
    printf(">>Press 4 To Get Back\n");
    printf("  ....................\n\n\n");
    printf(">>> ");
    int op;
    scanf("%d",&op);
    if(op==1)
    {
        banks();
    }
    if(op==2)
    {
        hotel();
    }
    if(op==3)
    {
        touristspot();
    }
    if(op==4)
    {
        return division();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return division();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
void hotel()
{
    system("CLS");
    printf("\n\n~~~Some of Best Hotels In Rajshahi~~~");
    printf("\n\n\n");
    printf("1.Hotel Sies Ta Bogra By Amin Sadat inc.\n\n");
    printf("2.Hotel Naz Garden\n\n");
    printf("3.Rupkotha Eco Resort\n\n");
    printf("4.Hotel Star International\n\n");
    printf("5.SKY VIEW INN\n\n");
    printf("6.Grand Riverview Hotel\n\n");
    printf("  Press 7 To Get Back\n\n\n");
    printf("Press distinct number to find your suitable hotel....>> ");
    int rh;
    scanf("%d",&rh);
    if(rh==1)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO Hotel SiesTa Bogra By Amin Sadat inc.<<<\n\n\n\n");
        printf("Location - Near BADC jame masjid, Bogura city Bypass, Bogura 5800, Bangladesh\n\n");
        printf("acommodation prices: Start from 1200 tk per night\n\n\n");
        printf("Mobile No : 01613801114\n\n");
        printf("***THANK YOU FOR VISITING US***\n\n");
        int rh1;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&rh1);
        if(rh1==1)
        {
            system("CLS");
            return hotel();
        }
    }
    if(rh==2)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO Hotel Naz Garden<<<\n\n\n\n");
        printf("Location - Bogura city Bypass, Bogura 5800 Bangladesh\n\n");
        printf("Acommodation prices: Start from 900 tk per night\n\n\n");
        printf("Mobile No : 01755661199\n\n");
        printf("***THANK YOU FOR VISITING US***\n\n");
        int rh2;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&rh2);
        if(rh2==1)
        {
            system("CLS");
            return hotel();
        }
    }
    if(rh==3)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO Rupkotha Eco Resort<<<\n\n\n\n");
        printf("Location - Banglabazar Road, Pabna 6600 Bangladesh\n\n");
        printf("Acommodation prices: Start from 2500tk per night\n\n\n");
        printf("Mobile No : 01730318953\n\n");
        printf("***THANK YOU FOR VISITING US***\n\n");
        int rh3;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&rh3);
        if(rh3==1)
        {
            system("CLS");
            return hotel();
        }
    }
    if(rh==4)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO Hotel Star International<<<\n\n\n\n");
        printf("Location - Amchattar, Bypass, Nowdapara Rajshahi,6203 Bangladesh\n\n");
        printf("acommodation prices: Start from 1500tk per night\n\n\n");
        printf("Mobile No :0721761263\n\n");
        printf("\t\t\t\t\t\t\t\t***THANK YOU FOR VISITING US***\n\n\n\n");
        int rh4;
        printf("\t\t\t\t\t\t\tPress '1' To Return...\n\n\t\t\t\t\t\t\t>>> ");
        scanf("%d",&rh4);
        if(rh4==1)
        {
            system("CLS");
            return hotel();
        }
    }
    if(rh==5)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO SKY VIEW INN<<<\n\n\n\n");
        printf("Location - Boro Indara Rd, Chapai Nawabganj, Bangladesh\n\n");
        printf("Acommodation prices: Start from 3000tk per night\n\n\n");
        printf("Mobile No : 01766-212131\n\n");
        printf("\t\t\t\t\t\t\t\t***THANK YOU FOR VISITING US***\n\n\n\n");
        int rh5;
        printf("\t\t\t\t\t\t\tPress '1' To Return...\n\n\t\t\t\t\t\t\t>>> ");
        scanf("%d",&rh5);
        if(rh5==1)
        {
            system("CLS");
            return hotel();
        }
    }
    if(rh==6)
    {
        system("CLS");
        printf("\n\n\n\t\t\t\t\t\t\t>>>WELCOME TO Grand Riverview Hotel<<<\n\n\n\n");
        printf("Location - 232, Rajshahi 6000, Bangladesh\n\n");
        printf("Accommodation Prices: Start from 2600 tk per night\n\n\n");
        printf("Mobile No :0721770700");
        printf("\t\t\t\t\t\t\t\t***THANK YOU FOR VISITING US***\n\n\n\n");
        int rh6;
        printf("\t\t\t\t\t\t\tPress '1' To Return...\n\n\t\t\t\t\t\t\t>>> ");
        scanf("%d",&rh6);
        if(rh6==1)
        {
            system("CLS");
            return hotel();
        }
    }
    if(rh==7)
    {
        return rajshahi();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return rajshahi();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
void banks()
{


        system("CLS");
        printf("1.Sonali bank limited\nSherpur Road Branch, Bogura\n\n\n");
        printf("2.Agrani bank limited\n Bogura\n\n\n");
        printf("3.Sonali Bank Limited\nChapai Nawabganj\n\n\n");
        printf("4.Agrani bank\nHujrapur Rd, Chapai Nawabganj\n\n\n");
        printf("5.Agrani Bank limited\nJoypurhat\n\n\n");
        printf("6.Sonali bank limited\n Naogaon Branch\n\n\n");
        printf("7.Agrani bank limited\nRajshahi\n\n\n");
        int it;
        printf("Press '1' To Enter\n\n");
        printf("Press '2' To Get Back\n\n");
        printf(">>> ");
        scanf("%d",&it);
        if(it==1)
        {
        int b;
        printf("Press Distinct Number To Enter Bank- \n\n>>> ");
        scanf("%d",&b);
        if(b==1)
        {
            system("CLS");
            printf("Distance : 125 km from Rajshahi\n\n");
            printf("Time Needed : 2 hour 54 min approximately\n\n");

            int ret1;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&ret1);
            if(ret1==1)
            {
                system("CLS");
                return banks();
            }
        }
        else if(b==2)
        {
            system("CLS");
            printf("Distance : 82.9km from Rajshahi\n\n");
            printf("Time Needed : 1 hour 45 minutes approximately\n\n");
            int ret2;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&ret2);
            if(ret2==1)
            {
                system("CLS");
                return banks();
            }
        }
        else if(b==3)
        {
            system("CLS");
            printf("Distance : 67.1km From Rajshahi\n\n");
            printf("Time Needed : 1 hour 51 minutes approximately\n\n");
            int ret3;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&ret3);
            if(ret3==1)
            {
                system("CLS");
                return banks();
            }
        }
        else if(b==4)
        {
            system("CLS");
            printf("Distance : 49.5 km From Rajshahi\n\n");
            printf("Time Needed : 1 hour 18 minutes approximately\n\n");
            int ret4;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&ret4);
            if(ret4==1)
            {
                system("CLS");
                return banks();
            }
        }
        else if(b==5)
        {
            system("CLS");
            printf("Distance : 113km From Rajshahi\n\n");
            printf("Time Needed : 2 hour  approximately\n\n");
            int ret5;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&ret5);
            if(ret5==1)
            {
                system("CLS");
                return banks();
            }
        }
        else if(b==6)
        {
            system("CLS");
            printf("Distance : 78.9 km From Rajshahi\n\n");
            printf("Time Needed : 1 hour 43 minutes approximately\n\n");
            int ret6;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&ret6);
            if(ret6==1)
            {
                system("CLS");
                return banks();
            }
        }
        else if(b==7)
        {
            system("CLS");
            printf("Distance : 5.3 km From Rajshahit Airport\n\n");
            printf("Time Needed : 13 minutes approximately\n\n");
            int ret7;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&ret7);
            if(ret7==1)
            {
                system("CLS");
                return banks();
            }
        }
        }

 else if(it==2)
        {
            system("CLS");
            return rajshahi();
        }
        else
        {
            printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return rajshahi();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
        }


void touristspot()
{
    system("CLS");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t........................DISTRICT.....................\t\t\t\t\t\t\t\n\n\n\n\n\n");
    printf("Rajshahi consist of Eight District\n\n\n");
    printf("Bogura District\n\n");
    printf("Chapainawabganj District\n\n");
    printf("Jaypurhat District\n\n");
    printf("Naogaon District\n\n");
    printf("Nator District\n\n");
    printf("Pabna District\n\n");
    printf("Rajshahi District\n\n");
    printf("Shirajgonj DIstrict\n\n");
    printf("Press '1' To Enter\n\n\n");
    printf("Press '2' To Get Back\n\n");
    printf(">>>> ");
    int in;
    scanf("%d", &in);
    if(in == 1)
 {
        int district;
        printf("\n\nPress Distinct Number of Districts To Enter - ");
        scanf("%d",&district);
        if(district==1)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\tWelcome To Bogura District\n\t\t\t\t\t\t\t---------------------\n\n\n");
            printf("1.Mohammad Ali Palace Museum and Park\n");
            printf("  ------------------------\n\n");
            printf("A brief story :\n\n");
            printf("This museum is housed inside one of only a handful of furnished rajbaris in Bangladesh. This one is the former home of a line of influential nawabs, which included former foreign minister Mohammed Ali Bogra. The mosaic ceiling of the audience hall is impressive, and the rooms have mannequins dressed to impress in both Bengali and British fashions. The last room is dedicated to modern art – it’s a compelling display, but the lack of English explanation makes it somewhat obscure.The grounds of the museum have been turned into a mildly pleasant garden and a rundown amusement park with rickety fairground rides. In the far corner is a small row of cages containing monkeys clearly affected by their captivity.");


            printf("Location : Nawab bari Rd, Bogura,Rajshahi,Bangladesh\n\n");
            printf("Distance : 125 km far from Rajshahi\n\n\n");

            printf("2.Behular Bashor Ghor-\n");
            printf("  ----------------\n\n");
            printf("A Brief History :\n\n");
            printf("Bashor Ghor of Behula and Lakshindar is situated in Bogura. It is 17 kilometre toward northern side from Bogura centre. The place is very beautiful to look. It is neat and clean. The place is historical. Many people go there to enjoy everyday. Actually the Bashor Ghor means honeymoon suites. There is a mythology that Lakshindar - husband of Behula was beaten by a snake at his wedding night in this bashor ghor for the curse of Manasha.");
            printf("Location : Bogra,Rajshahi, Bangladesh\n\n");
            printf("Distance : 132 km from Rajshahi\n\n\n");

            printf("3.Mahasthangarh\n");
            printf("  ----------------------------\n\n");
            printf("A Brief History : \n\n");
            printf("Mahasthangarh is one of the earliest urban archaeological sites so far discovered in Bangladesh. The village Mahasthan in Shibganj thana of Bogra District contains the remains of an ancient city which was called Pundranagara or Paundravardhanapura in the territory of Pundravardhana.\n\n\n");
            printf("Location : Mahasthan, Bogra ,Rajshahi,Bangladesh\n\n\n");
            printf("Distance : 134 km from Rajshahi\n\n\n");
            int ts;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&ts);
            if(ts==1)
            {
                return touristspot();
            }
        }
        else if(district==2)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t  Welcome To Chapainawabganj District\n\t\t\t\t\t\t\t-------------------------------\n\n\n");
            printf("1.Choto Shona Masjid\n");
            printf("  ---------------\n\n");
            printf("A Brief History : \n");
            printf("Choto Shona Mosque is located in Chapai Nawabganj district of Bangladesh. The mosque is situated about 3 kilometres south of the Kotwali Gate and 0.5 kilometres to the south-east of the Mughal Tahakhana complex in the Firozpur Quarter.");
            printf("Location : Shahabajpur, Chapainawabganj,Rajshahi\n\n");
            printf("Distance : 82.4 km from Rajshahi\n\n\n\n");
            printf("2.Darashbari Masjid\n\n");
            printf("  -----------------------------------\n");
            printf("A brief History : \n");
            printf("Darasbari Mosque is a historic mosque that was built in 1479 AD and is located in Shibganj Upazila of Chapai Nawabganj District, Bangladesh. It is situated about one kilometer to the south-west Kotwali Gate and about half kilometer to the west of the Choto Sona mosque,");
            printf("Location : Chapainawabganj,Rajshahi\n\n");
            printf("Distance : 86.7 km from Rajshahi\n\n");
            printf("\t\t\t\t\t\t\t~~~Hope You liked Our Places~~~\n\n\n");
            int ts2;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&ts2);
            if(ts2==1)
            {
                return touristspot();
            }
        }
        else if(district==3)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\tWelcome To Jaypurhat District\n\t\t\t\t\t\t\t---------------------\n\n\n");
            printf("1.Lokma jamidar bari\n");
            printf("  --------------\n\n");
            printf("Location : Pachbibi, Jaypurhat\n\n");
            int ts3;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&ts3);
            if(ts3==1)
            {
                return touristspot();
            }
        }
        else if(district==4)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\tWelcome To Naogaon District\n\t\t\t\t\t\t\t---------------------\n\n\n");
            printf("1.Kushumba Masjid\n");
            printf("  ------------------\n\n");
            printf("A Brief History : \n\n");
            printf("Kusumba Mosque is a mosque in Manda Upazila of Naogaon District, Bangladesh. It was built in 1558-59.");
            printf("Location :Naogaon, Rajshahi\n\n");
            printf("Distance : 45.4 km from Rajshahi\n\n\n");
            int ts4;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&ts4);
            if(ts4==1)
            {
                return touristspot();
            }
        }
        else if(district==5)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t   Welcome To Natore District\n");
            printf("\t\t\t\t\t\t\t ---------------------------------\n\n\n");
            printf("1.Natore Rajbari\n\n");
            printf("Brief about it : \n\n");
            printf("Natore Rajbari was a prominent royal palace in Natore, Bangladesh. It was the residence and seat of the Rajshahi Raj family of zamindars. The famous queen Rani Bhabani lived here and after the death of her husband, expanded both the estate and the palace");
            printf("Location :Rajbari Rd, Natore, Rajshahi\n\n");
            printf("Distance : 45 km from Rajshahi\n\n\n");
            printf("2.Bagha Shahi Mosque\n");
            printf("  -----------------\n\n");
            printf("Brief abouth this place : \n\n");
            printf("Bagha Mosque is a mosque located at Bagha, 40 kilometres southeast of Rajshahi in Bangladesh. It is a great historical place in Bangladesh. It has wonderful architectural style.");
            printf("Location : Bagha, Natore, Rajshahi\n\n");
            printf("Distance : 50 km from Rajshahi\n\n\n");
            int ts5;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&ts5);
            if(ts5==1)
            {
                return touristspot();
            }
        }
        else if(district==6)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t  Welcome To Pabna District\n");
            printf("\t\t\t\t\t\t\t ---------------------------------\n\n\n");
            printf("1.Hardinge Bridge)\n");
            printf("  ------------------------------\n\n");
            printf("A brief  about it\n\n\n");
            printf("Hardinge Bridge is a steel railway bridge over the river Padma located at Ishwardi, Pabna and Bheramara, Kushtia in Bangladesh. It is named after Lord Hardinge, who was the Viceroy of India from 1910 to 1916. The bridge is 1.8 kilometres long.");
            printf("Location : Pabna, Rajshahi\n\n");
            printf("Distance : 99 km from Rajshahi\n\n\n");
            int ts6;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&ts6);
            if(ts6==1)
            {
                return touristspot();
            }
        }
        else if(district==7)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t  Welcome To Rajshahi District\n");
            printf("\t\t\t\t\t\t\t -----------------------------\n\n\n");
            printf("1.Varendra Research Museum\n\n");
            printf("A Brief History : \n\n");
            printf("Varendra Museum is a museum, research centre, and popular visitor attraction at the heart of Rajshahi and maintained by Rajshahi University in Bangladesh. It is considered the oldest museum in Bangladesh. It was the first museum to be established in East Bengal in 1910.");
            printf("Location : Rajshahi\n\n");
            printf("2.Boro kuthi\n");
            printf("  -----------------\n\n");
            printf("Brief  abouth it: \n\n");
            printf ("Boro Kuthi is a historic building in Rajshahi, Bangladesh built by Dutch traders in eighteenth century. The building was also used as the first administrative center for Rajshahi University. The building is now under the Ministry of Cultural affairs to preserve as a cultural heritage, and planned to turn as a museum.");
            printf("Location: Rajshahi\n\n\n");

            int ts7;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&ts7);
            if(ts7==1)
            {
                return touristspot();
            }
        }
        else if(district==8)
        {
            system("CLS");
            printf("\n\n\n\t\t\t\t\t\t\t  Welcome To Shirajganj District\n");
            printf("\t\t\t\t\t\t\t -----------------------------\n\n\n");
            printf("1.Bangabandhu Bridge-\n");
            printf("  --------------\n\n");
            printf("Brief abouth this place : \n\n");
            printf("Bangabandhu Bridge, commonly called the Jamuna Multi-purpose Bridge and also called the Poongi bridge, is a bridge opened in Bangladesh in June 1998. It connects Bhuapur on the Jamuna River's east bank to Sirajganj on its west bank");
            printf("Location : Tangail, Sirajganj\n\n");
            printf("Distance : 136 km from Rajshahi\n\n\n");
            int ts8;
            printf("Press '1' To Return\n\n>>> ");
            scanf("%d",&ts8);
            if(ts8==1)
            {
                return touristspot();
            }
        }
        else
        {
            printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return touristspot();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
    }
    else if(in==2)
    {
        system("CLS");
        return rajshahi();
    }
    else
    {
         printf("Sorry the input is not correct!");
         int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return rajshahi();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
void sylhet()
{
    system("CLS");
    printf("\nWelcome to sylhet Division\n");
      printf("\nSylhet Division is the northeastern division of Bangladesh. It is bordered by the Indian states of Meghalaya, Assam and Tripura to the north, east and south respectively, and by the Bangladeshi \ndivisions of Chittagong to the southwest and Dhaka and Mymensingh to the west.\n\n");
      int n;
      printf("\nWhat you would like to see?\n 1. Hotels & Resorts\n 2. Money Exchange Point\n 3. Bank\n 4. ATM Booth\n 5. Districts\n\n");
      printf("Press 6 To Get Back\n\n");
      printf("Enter the number:");
      scanf("%d", &n);
      system("CLS");
      if(n == 1)
      {
        Hotel1();
      }
      else if(n == 2)
    {
        printf("\nHere is the details of some Money Exchange points\n");
        printf("\n1. M/S. Islam Money Changing Enterprise\nLocation: 30/A, Surma Super Market, Amborkhana, Sylhet 3100\n");
        printf("\n2. Aftab Chowdhury Money Changer\nLocation:  Room No. 3, 39, Sonali Bank, Ambarkhana, Sylhet 3100\n");
        printf("\n3. Hossen Telecom\nLocation: Room-36, Ground Floor, Sabek Sonali Bank Bhaban, Amberkhana, Sylhet 3100\n");
        printf("\n4. Jahans Money Exchange Co.\nLocation: Room-8, Puraton Bhaban(Ground Floor), Surma Super Market Sonali Bank, Amberkhana, Sylhet 3100\n");
        int shafkat;
        printf("\nPress 1 to go to the previous page\nPress Number:");
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return sylhet();
        }
    }
    else if(n == 3)
    {
        printf("\nHere is the details of some banks\n");
        printf("\n1. Dutch-Bangla Bank Limited\nLocation: Sylhet - Sunamganj Hwy, Sylhet 3100\n");
        printf("\n2. Bangladesh Bank\nLocation: Sheikhghat - Kazirbazar Rd, Sylhet 3100");
        printf("\n3. BRAC Bank Limited\nLocation: BRAC Bank Sylhet Branch,Pallabi Trade Center (Gr& 1st Floor),Sunamgonj Road, Sylhet\n");
        printf("\n4. Sonali Bank Limited, Moulvibazar Br, Moulvibazar\nLocation:  Moulvibazar,Srimangal Road\n");
        printf("\n5. Uttara Bank Limited, Habiganj Branch\nLocation:  Habiganj town hall road\n");
        printf("\nPress 1 to go to the previous page\nPress Number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return sylhet();
        }
    }
    else if(n == 4)
    {
        printf("\nHere is the details of some ATM Booths\n");
        printf("\n1. City Bank Limited | ATM Booth\nLocation: House: Metro Centre (1st Floor), South Dhopadighir Paar, Bandar Bazar East, Sylhet, Bandar Bazar Rd, Sylhet 3100\n");
        printf("\n2. The City Bank Limited | ATM Booth \nLocation: Kusumbag Shopping city, 1st floor, Dhaka - Moulvibazar Hwy, Moulvi Bazar 3200\n");
        printf("\n3. Islami Bank Bangladesh Limited ATM\nLocation: Habiganj town hall road\n");
        printf("\n4. Dutch-Bangla Bank Limited ATM, Hasannagor, Sunamganj\nLocation:  Sahid Lt Elahi Manjur Chowdhury Rd, Sunamganj\n");
        printf("Press '1' to go back to previous page\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return sylhet();
        }
    }
    else if(n==5)
    {
        system("CLS");
        hi2();
    }
    else if(n==6)
    {
        return division();
    }
    else
    {
         printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return division();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
void Hotel1()
{
    int h;
    printf("\nWhich Hotel you want to see?\n 1.Hotel Polash International\n 2.Britannia Hotel\n 3.DuSai Resort & Spa\n 4.Rangauti Resort\n 5.The Palace Luxury Resort\n 6.Haor Bilash Guest House\n\n");
    printf("press '7' to go to the previous page\n\n");
    printf("Press the number:");
    scanf("%d", &h);

    if(h == 1)
    {
        system("CLS");
        printf("\nHotel Polash International\n");
        printf("Address: Airport Road, Amborkhana, Sylhet 3100\n");
        printf("Distance: 10.6 k.m. from Osmani International Airport, Sylhet\n");
        printf("Contact Number: 01712-249389\n");
        printf("\n*Economy Double Room = 1,233 BDT per Night\n*Deluxe King Room = 2,300 BDT per Night\n*Family Room = 2,873 BDT per Night\n");
    }
    else if(h == 2)
    {
        system("CLS");
        printf("\nBritannia Hotel\n");
        printf("Address: Ambarkhana Rd, Sylhet 3100\n");
        printf("Distance: 10.7 k.m. from Osmani International Airport, Sylhet\n");
        printf("Contact Number:  01762-225807\n");
        printf("\n*Economy Double Room = 1,590 BDT per Night\n*Deluxe King Room = 2,800 BDT per Night\n*Family Room = 2,973 BDT per Night\n");
    }
    else if(h == 3)
    {
        system("CLS");
        printf("\nDuSai Resort & Spa\n");
        printf("Address: Sreemangal Road, Highway Giashnagar Road.,3200\n");
        printf("Distance: 67.9 k.m. from Sylhet\n");
        printf("Contact Number:  01617-005511\n");
        printf("\n*Deluxe Double Room with 1 King Bed = 9,242 BDT per Night\n*Deluxe Double Room with 2 Twin Beds = 10,753 BDT per Night\n*Deluxe Double Room with 1 Double Bed = 10211 BDT per Night\n");
    }
    else if(h == 4)
    {
        system("CLS");
        printf("\nRangauti Resort\n");
        printf("Address: Taltola bazar, Kulaura Road, Moulivibazar, Sylhet 3200");
        printf("Distance: 54.2 k.m. from Sylhet\n");
        printf("Contact Number: 01966-110000\n");
        printf("\n*Standard Family Room = 6233 BDT per Night\n*Family Double Room = 6000 BDT per Night\n*Standard Double Room = 7231 BDT per Night\n*Deluxe Double Room = 8121 BDT per Night\n");
    }
    else if(h == 5)
    {
        system("CLS");
        printf("\nThe Palace Luxury Resort\n");
        printf("\Address: Luxury Resort, The Palace, Putijuri 3310\n");
        printf("Distance: 73.2 k.m. from Sylhet\n");
        printf("Contact Number:  01966-110000\n");
        printf("\n*Standard Double Room = 9899 BDT per Night\n*Deluxe Double Room = 10233 BDT per Night\n*Luxury Double Room = 11558 BDT per Night\n*Premium Double Room = 17,084 BDT per Night\n");
    }
    else if(h == 6)
    {
        system("CLS");
        printf("\nHaor Bilash Guest House, Sunamganj\n");
        printf("Address: Hajipara Road Adjecent to Sunamganj Circuit House,3000\n");
        printf("Distance: 67.5 k.m. from Sylhet\n");
        printf("Contact Number: 01716-750808\n");
        printf("\n*Taltola Village Room = 5643 BDT per Night\n*Villa's Room = 6053 BDT per Night\n*Water Cottage Room = 7564 BDT per Night\n");
    }
    else if(h==7)
    {
        system("CLS");
        sylhet();
    }
    else
    {
        system("CLS");
        printf("\nInvalid Input\n");
    }
    int shafkat;
    printf("Press 1 to go to the previous page\nPress 2 to go to the first page\nPress the number:");
    scanf("%d",&shafkat);
    if(shafkat==1)
    {
        system("CLS");
        return Hotel1();
    }
    else if(shafkat==2)
    {
        system("CLS");
        return main();
    }
}
  void sylhet1()
{
    int dh;
    system("CLS");
    printf("\nWelcome to Sylhet District\n");
    printf("\nWhich Tourist spot do you want to see?\n1.Panthumai\n2.Ratargul\n\n");
    printf("Press '3' to go back to preveous page\n");
    printf("Press any other number to end the program\n");
    printf("Press the number:");
    scanf("%d",&dh);
    system("cls");
    if(dh == 1)
    {

        printf("\nPanthumai – a village from West Jaflong Union under Guainghat Upazilla – is another tourismhub in Sylhet. The town, which is near to the east Khasia hill of the Meghalaya ranges, boasts ofan \neye-catching fall popularly known as Borhill Fall. Though the main fall is geographicallylocated in the Indian territory, people can enjoy its enormous splendor head-on. Flowing fromthe\nBorhill Fall is a branch of the river Piyain that heads west and leads to Bisnakandi, anotherprominent tourist spot.\n");
        printf("Location:  Gowainghat,Sylhet\n");
        printf("Distance: 49.9 k.m. from Dhaka\n\n\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return sylhet1();
        }

    }
    else if(dh == 2)
    {
        printf("\nRatargul Swamp Forest is a freshwater swamp forest located in Gowain River, Fatehpur Union, Gowainghat, Sylhet, Bangladesh. It is the only swamp forest located in Bangladesh and one of the few\n freshwater swamp forests in the world. The forest is naturally conserved under the Department of Forestry, Government of Bangladesh.Its area is 3, 325.61 acre including 504 acre declared as the \nanimal sanctuary in 2015. It is known as the Sundarbans of Sylhet. This only swamp forest in Bangladesh is located 26 kilometres (16 mi) far from Sylhet. The forest's name comes from the word,\n'Rata' or 'Pati' tree, used by the locals of Sylhet.\n");        printf("Location: Latif Complex, Islampur Rd, Dhaka\n");
        printf("Location:  Gowainghat,Sylhet\n");
        printf("Distance: 36.4 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
             sylhet1();
        }
    }
    else if(dh==3)
    {
         hi2();
    }
    else
    {
     printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return hi2();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
void habiganj()
{
    int dh;
    system("CLS");
    printf("\nWelcome To Habiganj District\n");
    printf("\nWhich Tourist spot do you want to see?\n1.Satchari National Park\n2.Rema Kalenga Reserved Forest\n\n");
    printf("Press '3' to go back to previous page\n\n");
    scanf("%d", &dh);
    system("CLS");
    if(dh == 1)
    {

        printf("\nThe Satchari National Park was established in 2005, with an area of 243hectares. There are seven mountainous falls (Chara) in this garden, from which it isnamed Satchari. Previously the name of \nSatchhari was Raghunandan Hill ReserveForest.The National Park is surrounded by a few tea gardens, villages, towns, and cultivatedlands. There are nine tea gardens located near this national park. The Satchari teagarden is situated on the west side of the garden, and the Caklapunji tea garden is onthe east. There is a village named Teprapara inside the park. Twenty-four tribal familieslive\nin the town. People from around fourteen villages, especially tea garden workersand residents of forests, are dependent on forest resources in various ways.\n");
         printf("Location: Chunarughat,habiganj\n");
        printf("Distance: 67.2 k.m. from sylhet\n\n\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            habiganj();
        }

    }
    else if(dh == 2)
    {
        printf("\nRema Kalenga Reserved Forest is a Wildlife Sanctuary and protected forest inBangladesh. It is located in Chunarughat Upazila of Habiganj district of Sylhet division.It is a dry and evergreen forest and a natural forest land after the Sundarbans inBangladesh. The size of Rema Kalenga Reserved Forest is 1795.54 hectares. Rema-Kalenga is one of the natural forest areas of Bangladesh, which has remained in goodcondition. That is why the forest is a great tourist attraction.After entering the forest, you will see a fantastic beautiful lake. The surroundings of thelake are so natural that \nit does not seem to be artificial. It has been made to meet thedemand for water for the wild animals. There is a watchtower beside the lake. If youwant, you can go to the tower. Watching the forest from the building could be anotherfantastic experience. Wherever you see, the impenetrable jungle will be visible only.This sanctuary has 638 species of plants, trees, and leaves.\n");
        printf("Location: Chunarughat,habiganj\n");
        printf("Distance: 156.6 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            habiganj();
        }
}
else if(dh==3)
    {
         hi2();
    }
 else
 {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return sylhet();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
 }
}
void sunamgonj()
{
    int dh;
    system("cls");
    printf("\nWelcome to Sunamgonj District\n");
    printf("\nWhich Tourist spot do you want to see?\n1.Hason Raja Museum\n2.Tanguar Haor\n\n\n");
    printf("Press '3' to go back to previous page\n");
    scanf("%d", &dh);
    system("CLS");
    if(dh == 1)
    {

        printf("\nHason Raja Museum is located in Sunamganj. This is the only museum listed inSunamganj. There are also sixteen attractions listed in this district in other categories.You will find the exact location of the Hason Raja Museum on the map above. If youneed any other information on Hason Raja Museum that is not listed here, please call:01917-711056.\n");
        printf("Location:  Hason Raja Museum Road\n");
        printf("Distance: 67.4 k.m. from sylhet\n\n\n");
        int p;
        printf("press 1 to go to the previous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            sunamgonj();
        }

    }
    else if(dh == 2)
    {
        printf("\nTanguar haor also called Tangua haor), located in the Dharmapasha and Tahirpur upazilas of Sunamganj District in Bangladesh, is a unique wetland ecosystem of national importance and has come into international focus. The area of Tanguar haor including 46 villages within the haor is about 100 square kilometres (39 sq mi) of which 2,802.36 ha2 is wetland. It is the source of livelihood for more than 40,000 people. The Government of Bangladesh declared Tanguar haor as an Ecologically Critical Area in 1999 considering its critical condition as a result of overexploitation of its natural resources. In 2000, the hoar basin was declared a Ramsar site - wetland of international importance. With this declaration, the Government is committed to preserve its natural resources and has taken several steps for protection of this wetland.\n");
        printf("Location: five km away from Dakshinbagh railway station on the Kulaura-Shabajpur trace\n");
        printf("Distance: 87 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            sunamgonj();
        }
    }
    else if(dh==3)
    {
         hi2();
    }
    else
    {
         printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return hi2();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
  void molovibazar()
{
    int dh;
    system("CLS");
    printf("\nWelcome to Molovibazar District\n");
    printf("\nWhich Tourist spot do you want to see?\n1.Hakaluki Haor\n2.Madhabkunda Eco Park\n\n\n");
    printf("Press '3' to go back to previous page\n");
    scanf("%d", &dh);
    system("CLS");
    if(dh == 1)
    {

        printf("\nHakaluki Haor is the biggest Haor in Bangladesh. It is located at the Moulvibazar district in the Sylhet division. The total area of this haor is about 20,400 hectares. There are 236 beels \n(water bodies) in the Hakaluki Haor. These beels are full of different species of fish and aquatic creatures.\n");
        printf("Location:  Molovibazar\n");
        printf("Distance: 67.2 k.m. from sylhet\n\n\n");
        int p;
        printf("press 1 to go to the previous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            molovibazar();
        }

    }
    else if(dh == 2)
    {
        printf("\nThe Madhabkunda Eco Park is located in Madhabkunda, under the Moulvibazar district of Sylhet. The area of the park is 267 acres. It was established in 2001 to protect Madhabkunda waterfalls and\nadjacent biodiversity. Around 200 feet (61 m) high, the Madhabkunda waterfall is the main attraction of this Eco-park. The indigenouscommunities of Khasia live in the village and run agriculture\nbased economic activitiesin the forest.\n");
        printf("Location: five km away from Dakshinbagh railway station on the Kulaura-Shabajpur trace\n");
        printf("Distance: 87 k.m. from Dhaka\n");
        int p;
        printf("press 1 to go to the previous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            molovibazar();
        }
    }
    else if(dh==3)
    {
         hi2();
    }
    else
    {
         printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return hi2();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
void hi2()
{
        int d,m,a;
        printf("\nWhich district's tourist place do you want to see?\n1.Sylhet \n2.Molovibazar \n3.Sunamgonj \n4.Habiganj\n");
        printf("\nYou can press '5' to go to the previous page");
        printf("\nPress any key to end the program");
        printf("\nEnter the number:");
        scanf("%d",&d);
        if(d == 1)
        {
           sylhet1();

        }
        else if(d == 2)
        {
            molovibazar();
        }
        else if(d == 3)
        {
            sunamgonj();
        }
        else if(d == 4)
        {
            habiganj();
        }
        else if(d==5)
        {
            system("CLS");
            sylhet();
        }

}

void chattogong()
{
    system("CLS");
    printf("\nWelcome to Chittagong Division\n");
    int a;
    printf("\nWhat you would like to see?\n 1. Hotels & Resorts\n 2. Money Exchange Point\n 3. Bank\n 4. ATM Booth\n 5. Districts\n\n");
    printf("Press 6 To get Back");
    printf("Press the number:");
    scanf("%d", &a);
    system("CLS");
    if(a == 1)
    {
        Hotel2();
    }
    else if(a == 2)
    {
        printf("\nHere is the details of some Money Exchange points\n");
        printf("\n*South East Money Exchange Limited\nLocation: 5th Floor, Golden Plaza, 1692 CDA Ave, Chittagong 4000\nDistance: 6.5 k.m. from Chittagong\n");
        printf("\n*MoneyGram\nLocation: P O Sailors Colony, Chittagong G.P.O,4218\nDistance: 9.4 k.m. from Chittagong\n");
        printf("\n*Unique Money Exchange House\nLocation: 1st Floor, J.M. Paradise, 22 Momin Road, Chittagong 4000\nDistance: 8.2 k.m. from Chittagong\n");
        printf("\n*Western Union Money Transfer\nLocation: Lal Chand Road\nDistance: 8.2 k.m. from Chittagong\n");
        printf("\n*Ria Money Transfer\nLocation: Bismillah Complex, Chittagong 4212\nDistance: 11.1 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            chattogong();
        }
    }
    else if(a == 3)
    {
        printf("\nHere is the details of some banks\n");
        printf("\n*Sonali Bank Ltd\nLocation: Pahartali Main Road Branch, Chittagong\nDistance: 1.8 k.m. from Chittagong\n");
        printf("\n*AB Bank Limited\nLocation: Bay Shopping Centre, P.O.EPZ, South Halishahar, P.S. Bandar, Chiitagong\nDistance: 9 k.m. from Chittagong\n");
        printf("\n*Islami Bank Bangladesh Ltd\nLocation: Nazumia Hat, Hathazari, Chittagong\nDistance: 16.1 k.m. from Chittagong\n");
        printf("\n*Bangladesh Bank\nLocation: Huseyn Shaheed Suhrawardy Road, Chittagong 4000\nDistance: 6.9 k.m. from Chittagong\n");
        printf("\n*Trust Bank Limited\nLocation: 205, Main Road, Plot No-218, Khatunganj, Khatunganj Road, Chittagong\nDistance: 8.7 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            chattogong();
        }
    }
    else if(a == 4)
    {
        printf("\nHere is the details of some ATM Booths\n");
        printf("\n*One Bank ATM\nLocation: CDA 1no. Road Dhaka-Chittagong Highway, Akbarshah\nDistance: 3.4 k.m. from Chittagong\n");
        printf("\n*Trust Bank Limited ATM\nLocation: Chittagong DOHS, Chittagong Cantonment\nDistance: 10 k.m. from Chittagong\n");
        printf("\n*AB Bank ATM\nLocation: Nazumia Hat, Chittagong-Rangunia Highway\nDistance: 16.1 k.m. from Chittagong\n");
        printf("\n*Southeast Bank Limited Bank\nLocation: Dhaka-Chittagong Highway\nDistance: 3.2 k.m. from Chittagong\n");
        printf("\n*Dutch-Bangla Bank Limited\nLocation: Dhaka-Chittagong Highway, CDA Ave Road\nDistance: 9.6 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            chattogong();
        }
    }
    else if(a == 5)
    {
       hi3();
    }
    else if(a==6)
    {
        return division();
    }
}
void Hotel2()
{
    int h;
    printf("\nWhich Hotel you want to see?\n 1. Hotel Aronnyo Bilas\n 2. Golden Inn Chattogram Ltd\n 3. Parjantan Motel\n 4. Hotel Royal Avenue\n 5. Hotel Hilton City\n 6. Shamser Gazir Bansher Kella Resort\n 7. Hill crown hotel and resort\n 8. Hotel Moti Mahal\n 9. Resort Islandia\n10. Hotel Victory Abashik\n11. Meghna Shorobor Resort\n12. Hotel Valentino\n\n");
    printf("Press '13' to go back to the previous page\n");
    printf("press any other key to end the program\n");
    printf("Press the number:");
    scanf("%d", &h);
    system("CLS");
    if(h == 1)
    {
        printf("\nHotel Aronnyo Bilas\n");
        printf("Address: Narikel Bagan, Khagrachari Sadar, Chittagong\n");
        printf("Distance: 112 k.m. from Chittagong\n");
        printf("Contact Number: 01838497257\n");
        printf("Press any key to exit the program\n");
        printf("\n*Twin Bed AC Room = 3,000 BDT per Night\n*Twin Bed Non-AC Room = 2,500 BDT per Night\n*Couple Room AC = 2,000 BDT per Night\n*Single Bed Room AC = 1,500 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 2)
    {
        printf("\nGolden Inn Chattogram Ltd\n");
        printf("Address: 336, Station Road, Chattogram 4100\n");
        printf("Distance: 5.8 k.m. from Chittagong\n");
        printf("Contact Number: 01711819025\n");
        printf("\n*Deluxe Double Room = 1,949 BDT per Night\n*Deluxe Twin Room = 2,034 BDT per Night\n*Superior Suite = 3,983 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 3)
    {
        printf("\nParjantan Motel\n");
        printf("Address: Khagrachari Hill Distric, 4400\n");
        printf("Distance: 110 k.m. from Chittagong\n");
        printf("Contact Number: 037162084\n");
        printf("\n*Twin Bed AC Room = 3,000 BDT per Night\n*Twin Bed Non-AC Room = 1,600 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 4)
    {
        printf("\nHotel Royal Avenue\n");
        printf("Address: 815, Shakander Plaza, CDA Avenue, Dampara, Chawkbazar, Chittagong 4000\n");
        printf("Distance: 6.7 k.m. from Chittagong\n");
        printf("Contact Number: 01903731333\n");
        printf("\n*Deluxe Queen Room = 2,649 BDT per Night\n*Deluxe Double Room = 3,179 BDT per Night\n*Deluxe Twin Room = 3,709 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 5)
    {
        printf("\nHotel Hilton City\n");
        printf("Address: 1681, Choumuhuni Circle, Sheikh Mujib Road, North Agrabad, Chittagong 4000\n");
        printf("Distance: 5.7 k.m. from Chittagong\n");
        printf("Contact Number: 01845436222\n");
        printf("\n*Standard Single Room = 1,950 BDT per Night\n*Twin or Double Room = 2,681 BDT per Night\n*Basic Triple Room = 3,046 BDT per Night\n*Family Room = 3,534 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 6)
    {
        printf("\nShamser Gazir Bansher Kella Resort\n");
        printf("Address: Chompoknagar, Cagolnaiya Upazila, Feni District 1032\n");
        printf("Distance: 96.5 k.m. from Chittagong\n");
        printf("Contact Number: 01717950169\n");
        printf("\n*Deluxe Double Room = 5,595 BDT per Night\n*Deluxe Twin Room = 5,874 BDT per Night\n*Family room = 6,713 BDT per Night\n*Deluxe Family room = 7,553 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 7)
    {
        printf("\nHill crown hotel and resort\n");
        printf("Address: Chittagong-Bandarban Highway, Bandarban District, Chittagong 4600\n");
        printf("Distance: 74.6 k.m. from Chittagong\n");
        printf("Contact Number: 01837505551\n");
        printf("\n*Basic Double Room = 1,615 BDT per Night\n*Basic Quadruple Room = 2,720 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 8)
    {
        printf("\nHotel Moti Mahal\n");
        printf("Address: Reserve Bazar, Rangamati District, Chittagong 4500\n");
        printf("Distance: 75.6 k.m. from Chittagong\n");
        printf("Contact Number: 01705373730\n");
        printf("\n*Standard Double Room = 1,388 BDT per Night\n*Standard Twin Room = 1,822 BDT per Night\n*Deluxe Double Room = 1,995 BDT per Night\n*Standard Triple Room = 1,995 BDT per Night\n*Deluxe Twin Room = 2,256 BDT per Night\n*Deluxe Triple Room = 2,690 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 9)
    {
        printf("\nResort Islandia\n");
        printf("Address: Plot 11A, block c, saikat R/A, kolatoli road, Cox's Bazar District, Chittagong 4700\n");
        printf("Distance: 142 k.m. from Chittagong\n");
        printf("Contact Number: 01819118858\n");
        printf("\n*Deluxe Double Room = 3,299 BDT per Night\n*Deluxe Quadruple Room = 3,860 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 10)
    {
        printf("\nHotel Victory Abashik\n");
        printf("Address: Victoria College Road, Cumilla District, Chittagong\n");
        printf("Distance: 146 k.m. from Chittagong\n");
        printf("Contact Number: 01714030094\n");
        printf("\n*Deluxe Single Room = 2,969 BDT per Night\n*Deluxe Double Room = 3,266 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 11)
    {
        printf("\nMeghna Shorobor Resort\n");
        printf("Address: Matlab Uttar Upazila, Chandpur District, Chittagong\n");
        printf("Distance: 214 k.m. from Chittagong\n");
        printf("Contact Number: 029881906\n");
        printf("\n*Water Cottage = 8,500 BDT per Night\n*Delux Twin Room = 7,500 BDT per Night\n*Double Deluxe Rooms = 7,000 BDT per Night\n*Standard Room = 6,000 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h == 12)
    {
        printf("\nHotel Valentino\n");
        printf("Address: 1505-06 Main Road, Boro Masjid Moor, Maijdee Court, Noakhali, Maijdee 3800\n");
        printf("Distance: 126 k.m. from Chittagong\n");
        printf("Contact Number: 032171277\n");
        printf("\n*Deluxe Twin Room = 3,539 BDT per Night\n*Luxury Suite = 3,539 BDT per Night\n*Double Deluxe Rooms = 4,504 BDT per Night\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Hotel2();
        }
    }
    else if(h==13)
    {
        system("CLS");
         chattogong();
    }

}
 void hi3()
{
     int d;
        printf("\nWhich district you want to see?\n 1. Khagrachari\n 2. Feni\n 3. Bandarban\n 4. Cox's Bazar\n 5. Brahmanbaria\n 6. Comilla\n 7. Chandpur\n 8. Noakhali\n 9. Lakshmipur\n10. Rangamati\n11. Chittagong\n");
        printf("\npress '12' to go to previous page\n\n");
        printf("Press the number:");
        scanf("%d", &d);

        if(d == 1)
        {
            Khagrachari();
        }
        else if(d == 2)
        {
            Feni();
        }
        else if(d == 3)
        {
            Bandarban();
        }
        else if(d == 4)
        {
            Coxs_Bazar();
        }
        else if(d == 5)
        {
            Brahmanbaria();
        }
        else if(d == 6)
        {
            Comilla();
        }
        else if(d == 7)
        {
            Chandpur();
        }
        else if(d == 8)
        {
            Noakhali();
        }
        else if(d == 9)
        {
            Lakshmipur();
        }
        else if(d == 10)
        {
            Rangamati();
        }
        else if(d == 11)
        {
            Chittagong();
        }
        else if(d==12)
        {
            system("CLS");
            return chattogong();
        }

}
void Khagrachari()
{
    int k;
    system("cls");
    printf("\nWelcome to Khagrachari\n");
    printf("\nWhich Tourist spot you want to see?\n1. Alutila Cave\n2. Risang Waterfall\n3. Mung Rajbari\n4. Ramgarh Lake\n5. Mayabini Lake\n6. Debota Pukur\n7. Toiduchhara Waterfall\n\n");
    printf("\nPress '8' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("\nPress the number- ");
    scanf("%d",&k);
    system("cls");
    if(k == 1)
    {
        printf("\nAlutila Cave is also called Alutila Mysterious Cave and its located in Matiranga Upazila in hill district of Khagrachari, Bangladesh. The cave formed inside the 1000-meter high hill named Aultila(Potato hill) or Arbari Hill. The hill area is surrounded by deep green forest.\n");
        printf("Location: Khagrachari District(7 k.m. from city)\n");
        printf("Distance: 105.6 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number: ");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Khagrachari();
        }
    }
    else if(k == 2)
    {
        printf("\nThe Risang Waterfall is one of the most beautiful waterfall in Bangladesh. It is containing surprising natural beauty. The surrounding hillside area is awesome. The Risang Waterfall is about 30 meter in height.\n");
        printf("Location: Risang, Matiranga Upazila, Khagrachari District\n");
        printf("Distance: 102.4 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Khagrachari();
        }
    }
    else if(k == 3)
    {
        printf("\nMung Rajbari is an attraction of the Rajbari or Palace of the Mogh Chief, where tourists can see a Royal bed made of ivory. It was established in aound before the year 1860.\n");
        printf("Location: Manikchari Upazila, Khagrachari District\n");
        printf("Distance: 66.7 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Khagrachari();
        }
    }
    else if(k == 4)
    {
        printf("\nRamgarh Lake is a beautiful lake and one of the most natural attraction of Khagrachari. There is a lovely giraffe-shaped hanging bridge in the middle for communication on both sides of the lake. There are fascinating gardens on both sides of the lake. There are 12 sheds for the visitors to rest in the park.\n");
        printf("Location: Ramgarh Upazila, Khagrachari District\n");
        printf("Distance: 128.3 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Khagrachari();
        }
    }
    else if(k == 5)
    {
        printf("\nThe Mayabini Lake Tourist Center is built on a 40-acre hilly, 15-acre scenic Lake. The natural beauty of the mountains, the vast sky and the clear calm waters of the lake easily captivate the mind with pure joy. A resting place has been built for tourists on a small beautiful island in the middle of Mayabini Lake. And there are boat arrangements to go around the lake.\n");
        printf("Location: Khagrachari-Panchari Road\n");
        printf("Distance: 127.2 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Khagrachari();
        }
    }
    else if(k == 6)
    {
        printf("\nNunchhori Debota Pukur is a remarkable lake known as the Matai Pukhiri, 500 meters above ground level at Nunchhori. According to a legend of the Tripura tribe, The water of this lake never dries up nor becomes dirty, which is why it is called Matai Pukhiri or the Lake of God.\n");
        printf("Location: Nunchhori Tripura village, Khagrachari-Rangamati Road\n");
        printf("Distance: 121 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Khagrachari();
        }
    }
    else if(k == 7)
    {
        printf("\nToiduchhara Waterfall is 300 feet high. There are innumerable stone steps on the hill. Water falls down this steps. This natural diversity has given a different dimension to this fountain.\n");
        printf("Location: Dighinala Upazila, Khagrachari\n");
        printf("Distance: 130 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Khagrachari();
        }
    }
    else if(k==8)
    {
        system("CLS");
        hi3();
    }
}
void Feni()
{
    int f;
    system("CLS");
    printf("\nWelcome to Feni\n");
    printf("\nWhich Tourist spot you want to see?\n1. Chowdhury Bari Masjid\n2. Chandgazi Bhuiyan Masjid\n3. Bashpara Seven Temples\n4. Bijoy Singh Dighi\n5. Shamsher Gazi Dighi\n\n");
    printf("\nPress '6' to back to previous page\n");
    printf("Press any other key to exit the program");
    scanf("%d",&f);
     system("CLS");
    if(f == 1)
    {
        printf("\nChowdhury Bari Masjid is a popular mosque in Feni town. It is 200 years old mosque. It's architectural design is fascinating. It is a great place for visit.\n");
        printf("Location: Ramnagar, Daganbhuiyan Thana\n");
        printf("Distance: 89.2 k.m. from Chittagong\n");
         printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Feni();
        }
    }
    else if(f == 2)
    {
        printf("\nChandgazi Bhuiyan Masjid is also known as Chad Kha Mosque, is an archaic mosque from the Feni district that was built during 1112 Hijri(Arabic Calender). According to the inscription at the front door, the mosque was built by someone named Chandgazi Bhuiyan. This mosque is a landmark and a good place for visit.\n");
        printf("Location: Chhagalnaiya-Box Mahmud Road, Chhagalnaiya upazila\n");
        printf("Distance: 101 k.m. from Chittagong\n");
         printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Feni();
        }
    }
    else if(f == 3)
    {
        printf("\nBashpara Seven Temples is a landmark and interestingly these are not temple. Those are probably 100 years old Moths which were build for the landlord at that time. The temples are having a medium sized pond beside and from the other side of the pond the top of the temples looks amazingly beautiful all together.\n");
        printf("Location: Saat Bari Road, Chhagalnaiya upazila\n");
        printf("Distance: 105 k.m. from Chittagong\n");
         printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Feni();
        }
    }
    else if(f == 4)
    {
        printf("\nBijoy Singh Dighi is the magnificent work of Bijoy Sen, the founder of the famous Sen race. The area of this lake is about 36.57 acres. Located in a very beautiful natural environment, the four sides of the lake are very high and decorated with trees. This Dighi is one of the most traditional Dighi of Feni.\n");
        printf("Location: Feni Circuit House\n");
        printf("Distance: 89.9 k.m. from Chittagong\n");
         printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Feni();
        }
    }
    else if(f == 5)
    {
        printf("\nShamsher Gazi Dighi is one of the largest Dighi of Bangladesh having an area of 73 acres. There is always a cool wind and therefore makes it a perfect place to visit. There is a saying that, it was not dug by people, but by the prayer of Shamsher Gazi Pir to Allah it was created overnight.\n");
        printf("Location: Parshuram upazila\n");
        printf("Distance: 108 k.m. from Chittagong\n");
         printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Feni();
        }
    }
   else if(f==6)
    {
        system("CLS");
        hi3();
    }
}

void Bandarban()
{
    int b;
    system("cls");
    printf("\nWelcome to Bandarban\n");
    printf("\nWhich Tourist spot you want to see?\n1. Boga Lake\n2. Tazing Dong Peak\n3. Bandarban Golden Temple(Buddha Dhatu Jadi)\n4. Nafakhum Waterfall\n5. Nilgiri\n6. Keokradong\n7. Meghla Parjantan Complex\n\n");
    printf("\nPress '8' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &b);
    system("CLS");
    if(b == 1)
    {
        printf("\nThe mirror view of Boga Lake can make you forget the humdrum of city life and pacify your soul preparing you for facing life with greater stamina. Bagakain Lake or Boga Lake is one of the most magnificent lakes of the country.  This 15 acre wide natural lake is placed about 3000 feet high above the sea-level, Boga Lake fascinates the visitors with blue water, big rocks, surrounding greenery, local tribal communities, etc.\n");
        printf("Location: Ruma Upazila\n");
        printf("Distance: 128 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Bandarban();
        }
    }
    else if(b == 2)
    {
        printf("\nIn local tribal dialect 'Tazing' means 'Great' and the 'Dong' means 'Hill'. So the whole word stands for 'Great Hill'. Tazing Dong is also popular as 'Bijoy'. This mountain will amaze you with diverse natural beauties, like hide and seek of clouds on the hill-top, dense forests, hills and mountains, wildlife, zigzagging paths over the green hill, natural springs, hilly roadside, and the surrounding  inhabitants' simple lifestyle, tradition and culture.\n");
        printf("Location: Ruma Upazila\n");
        printf("Distance: 125 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Bandarban();
        }
    }
    else if(b == 3)
    {
        printf("\nBuddha Dhatu Jadi, the largest Theravada Buddhist Temple of Bangladesh and the second biggest Buddha sculpture of the country. This Buddhist temple is called 'kyang' in local language. It is also popular as 'Bandarban Golden Temple' to the tourists. In the temple area, there a small pond on the top of a hill. People adore this place as 'The Pond of Angels'.\n");
        printf("Location: Pulpara, Balaghat\n");
        printf("Distance: 82.4 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Bandarban();
        }
    }
    else if(b == 4)
    {
        printf("\nNafakhum Waterfall is also called Remakri waterfall. In this natural waterfall, heavy flow of water pours down with great power, sound and volume declaring pride and grandeur. Not to mention, Nafakhum is one of the most voluminous natural cascades in Bangladesh. The serpentine Sangu River creates a stunning combination with the blue sky and surrounding hills. The breathtaking beauty of the big rocks over Sangu will make your trip unforgettable. This place is popular as 'Boro pathor'.\n");
        printf("Location: Remakri, Thanchi Upazila\n");
        printf("Distance: 157 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Bandarban();
        }
    }
    else if(b == 5)
    {
        printf("\nThe beauty of Nilgiri varies with the change of seasons. During winter this place becomes foggy. Tourists love to enjoy campfire in such weather. While in monsoon this place gets nearly covered by the fleeting clouds. Besides these, from Nilgiri you can enjoy the spectacular view of sunrise, sunset, sinuous Sangu River, surrounding greenery, etc.\n");
        printf("Location: Bandarban-Thanchi Road, Nilgiri\n");
        printf("Distance: 110 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Bandarban();
        }
    }
    else if(b == 6)
    {
        printf("\nKeokradong is about 986 meters (3235 feet) high, it was once considered the highest mountain in the country. If you get to the top of Keokradong, the hill clouds will shake you with the charming attraction. Keokadong's peak seems to smoky from the distance. It is covered with a white cloud. Due to the deep wind, sometimes it is tough to stand on the hilltop. Rain, wind, and clouds have no time to come to the side of the Keokradong.\n");
        printf("Location: Ruma Thana\n");
        printf("Distance: 138 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Bandarban();
        }
    }
    else if(b == 7)
    {
        printf("\nMeghla Parjatan Complex is one of the most amazing tourist spots for tourists coming from all over the country. it is maintained by district administration. It has a mini-safari-park, a zoo, a place for boat journey, a hanging bridge and artificial lake at the bottom of the hills. It is a popular spot for tourists & often visited by many for pleasure.\n");
        printf("Location: Meghla, Keranihat\n");
        printf("Distance: 72 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Bandarban();
        }
    }
    else if(b==8)
    {
        system("CLS");
        hi3();
    }
}

void Coxs_Bazar()
{
    int c;
    system("cls");
    printf("\nWelcome to Cox's Bazar\n");
    printf("\nWhich Tourist spot you want to see?\n1. Cox's Bazar beach\n2. Sonadia island\n3. Himachori waterfall and hill-tracks\n4. Adinath temple\n5. Radiant wish world\n6. Bangabandhu Sheikh Mujib safari park\n7. Inani beach\n8. St. Martin's Island\n\n");
    printf("\nPress '9' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &c);
    system("CLS");
    if(c == 1)
    {
        printf("\nCox's Bazar is famous for its longest unbroken sandy sea beach. It is considered as having the longest sea beach in the world, with a total of 121 k.m. long. Here, visitors can enjoy the relaxing breeze of the Bay of Bengal Sea and the peacefulness of the place.\n");
        printf("Location: Cox's Bazar\n");
        printf("Distance: 144 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Coxs_Bazar();
        }
    }
    else if(c == 2)
    {
        printf("\nSonadia island is one of the islands of Cox's Bazar district. Locally, it is familiar with the name of 'Sonadia Char'. The area of the Dwip is nearly 9 Square k.m. . It is one of the striking tourist spots for natural beauty lovers. Sonadia Island is surrounded by the sea beach on the three sides. On the other hand, the natural small trees, canals and different types of birds and sea-animals have made the place unique and attractive. In addition, the island is called the heaven of birds.\n");
        printf("Location: Kutubjom Union, Maheshkhali Upazila\n");
        printf("Distance: 151.7 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Coxs_Bazar();
        }
    }
    else if(c == 3)
    {
        printf("\nHimachori waterfall and hill-tracks is a place with shallow waterfalls located in a national park . It is a combination of the beauty of sea and hill. It little far from Cox's Bazar city. On the top of the hill you will feel the beauty of sea. But climbing up on the hill you need to complete thousands of steps . Also it is a beautiful picnic spot surrounded by palm trees and bamboos.\n");
        printf("Location: Cox's Bazar Marine Dr\n");
        printf("Distance: 150 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Coxs_Bazar();
        }
    }
    else if(c == 4)
    {
        printf("\nAdinath temple is dedicated to the Hindu God Shiva, who is worshipped as Adinath. It is famous for the annual fair held at the foot of Mainak hill, in the month of Phalgun according to the Bengali calendar. The fair takes place at the foot of the Mainak Hill and lasts for 13 days. Thousands of Hindus participate here from all over Bangladesh.\n");
        printf("Location: Mainak Hill, Maheshkhali Island\n");
        printf("Distance: 117 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Coxs_Bazar();
        }
    }
    else if(c == 5)
    {
        printf("\nRadiant wish world is the biggest aquarium in Bangladesh. It has different varieties of fishes for people to see and most children enjoy going there.\n");
        printf("Location: 29 Jhawtala, Jhawtola Main Rd, Cox's Bazar 4700\n");
        printf("Distance: 145 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Coxs_Bazar();
        }
    }
    else if(c == 6)
    {
        printf("\nBangabandhu Sheikh Mujib safari park is the first safari park in Bangladesh. It also called 'Dulahazara Safari Park'. It is declared as protected area, where animals are kept in fairly large area with nature. Visitors can easily see the animals when they visit with bus or jeep. It is 50 k.m. away from Cox's Bazar town.\n");
        printf("Location: Dulahazara, Chakaria\n");
        printf("Distance: 111 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Coxs_Bazar();
        }
    }
    else if(c == 7)
    {
        printf("\nInani beach is a 18 k.m. long sea beach. It has wonderful corals covering its shore with black and green, but these corals are sharp too and they are found in summer or rainy seasons. It is a very beautiful beach known for its rock and coral boulders. The Hills can be seen from one side and sea on the other which makes it really impressive. The view of sunrise and sunset of this beach are very memorable. The blue water and the lines of stones is the main source of attraction for the tourists. The clean blue and shark free water is ideal for bathing and swimming without any fear.\n");
        printf("Location: Ukhia Upazila\n");
        printf("Distance: 165 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Coxs_Bazar();
        }
    }
    else if(c == 8)
    {
        printf("\nSt. Martin's Island is the only coral island of Bangladesh. It has a panoramic beauty and the feelings of being amidst pristine marine life attracts many of the visitors to stay there overnight to enjoy sensing and sighting the beauties of darkness with no electric lights around blurring vision. Laying back on a beach chair, gazing at the nocturnal sky studded with a dazzling moon or billions of gorgeous stars, listening to undulating sonic sounds of sea waves.\n");
        printf("Location: the north eastern part of Bay of Bengal, Teknaf peninsula\n");
        printf("Distance: 197 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Coxs_Bazar();
        }
    }
    else if(c==9)
    {
        system("CLS");
        hi3();
    }
}

void Brahmanbaria()
{
    int b;
    system("cls");
    printf("\nWelcome to Brahmanbaria\n");
    printf("\nWhich Tourist spot you want to see?\n1. Sri Sri Kaal Vairab Temple\n2. Hatirpool Bridge\n3. Ulchapara Shahi Masjid\n4. Haripur Zamindar Bari\n5. Gokarna Nawab Bari\n6. Arifail Mosque\n\n");
    printf("\nPress '7' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &b);
    system("CLS");
    if(b == 1)
    {
        printf("\nKal Bhairab Temple is a Hindu temple, dedicated to the God Shiva. The temple is famed for the giant Shivalinga, a 28-feet tall Shiva statue assumed to be the largest in the world. It also consider as one of the oldest Place in Brahmanbaria. This place is very popular to the people of Bangladesh.\n");
        printf("Location: Medda, Brahmanbaria 3400\n");
        printf("Distance: 223 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Brahmanbaria();
        }
    }
    else if(b == 2)
    {
        printf("\nHatirpool Bridge was built by Dewan Shabaz Ali during 1650 A.D. Many assume that this bridge was built at that time. Locally it is known as 'Hatir Pool'. It is said that Dewans used to cross the river on back of elephant over this bridge. This is an attractive landmark for visitors.\n");
        printf("Location: Beriura Bazar, Sarail Upazila\n");
        printf("Distance: 236 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Brahmanbaria();
        }
    }
    else if(b == 3)
    {
        printf("\nUlchapara Shahi Masjid was built by Muhammad Murad in 1727 AD/1140 AH. It is a three domed mosque. From the center of the dome to the bottom there are very beautiful crafts. The inner walls of the mosque have very beautiful carvings. It is a great place to visit.\n");
        printf("Location: Ulchapara, Ramrail, Brahmanbaria Sadar\n");
        printf("Distance: 221 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Brahmanbaria();
        }
    }
    else if(b == 4)
    {
        printf("\nWhen you visit this Zamindar Bari, you will find a lot of things which hold their grandeur still, but in a ruined condition. You can see the outstanding terracotta temple, design, famous architecture and all other stuff and attractive decoration. When you visit the palace you will find some pieces of glass which are still fixed in door and window. The grills which have a different shape and design.  The decedents of the priests still live in this place. Visitors from all across the country come here to see this historic mansion.\n");
        printf("Location: Haripur, Nasirnagar\n");
        printf("Distance: 258 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Brahmanbaria();
        }
    }
    else if(b == 5)
    {
        printf("\nGokarna Nawab Bari was built by Nawab Sir Justice Syed Shamsul Huda K.C.I.E which is now known as Gokarna Nawab Bari Complex. He was born in the village of Gokarna. This complex is housed in a three-storeyed building. Although it is an old building, it looks attractive still. In front of the complex, there is a big pond which has made this scenery of this complex more beautiful.\n");
        printf("Location: Gokarna, Nasirnagar\n");
        printf("Distance: 248 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Brahmanbaria();
        }
    }
    else if(b == 6)
    {
        printf("\nArifail Mosque is  founded by Shah Arif in 1662. Name derived from Arif to Arifile. Locally known as Arail Mosque. This is an example of Mughal architecture, which combined Bengali, Persian and Islamic influences. Because of this mosque's design, This mosque looks a lot like the Taj Mahal from the outside. Many people come to see this magnificent mosque and offer prayers.\n");
        printf("Location: Sarail Upazila\n");
        printf("Distance: 234 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Brahmanbaria();
        }
    }
    else if(b==7)
    {
        system("CLS");
        hi3();
    }
}

void Comilla()
{
    int c;
    system("cls");
    printf("\nWelcome to Comilla\n");
    printf("\nWhich Tourist spot you want to see?\n1. Shalban Vihara\n2. The Mainamati War Cemetery\n3. Itakhola Mura\n4. Chondi Mura Temple\n5. Shah Shuja Mosque\n6. Lalmai Hills\n\n");
    printf("\nPress '7' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &c);
    system("CLS");
    if(c == 1)
    {
        printf("\nShalban Vihara is an Archaeological site in Mainamati, Comilla, Bangladesh. The ruins are in the middle of the Lalmai hills ridge, and these are of the 7th-century Paharpur-style. Buddhist viharas with 115 cells for monks. This place was built by the King Bhava Deva, the fourth ruler of the early Buddist. Students from various places come here for their meditation and religious learning. It is one of the greatest tourist spots in Bangladesh.\n");
        printf("Location: Comilla University Road, Shalmanpur\n");
        printf("Distance: 149.1 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Comilla();
        }
    }
    else if(c == 2)
    {
        printf("\nThe Mainamati War Cemetery is the graveyard of those soldiers who died during the 2nd world war in Bengal front. The Cemetery is situated 1km down the road leading from Comilla to Sylhet and a short distance past the Cantonment Military Hospital. Before the war Mainamati was a small settlement of a few dozen huts, but during the war {Second World war} a large military camp was established there. And now there are 736 graves in Mainamati War Cemetery. Therefore it is a Historical place for Bangladesh.\n");
        printf("Location: Comilla-Sylhet Road\n");
        printf("Distance: 153.2 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Comilla();
        }
    }
    else if(c == 3)
    {
        printf("\nItakhola Mura is an Archaeological site in Mainamati. The site is one the most impressive ruins. It lies in three terraces on adjacent hillocks just opposite the Rupan Mura site across the Kotbari road, Comilla. It served for a long time as a quarry for ancient bricks. Excavations have revealed here a grand stupa complex with an attached monastery , located 42m to its north. the cultural phases of the site are stated to be five; the earlier three being still buried underneath the later remains.\n");
        printf("Location: Comilla Adarsha Sadar Upazila\n");
        printf("Distance: 148.1 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Comilla();
        }
    }
    else if(c == 4)
    {
        printf("\nChondi Mura Temple premise is mainly having two temples. Each of those are having two small compartments are joined together {considered as single one}. Left side temple is the Shiva temple and the right one is Chondi Temple. And it is a very isolated place. This is at the southern end of the Lalmai Hill. That's why mostly the devoted people use to go there. One of the great place for Hindu people.\n");
        printf("Location: Lalmai-Barura Road\n");
        printf("Distance: 151.6 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Comilla();
        }
    }
    else if(c == 5)
    {
        printf("\nShah Shuja Mosque is situated at Mughaltuli on the bank of the old town Gumti in Comilla town. Shah Shuja,Subahdar of Bengal {1639-60} built it to commemorate his victory of Tripura. The mosque is rectangular in plan and measures 17.68 in length and 8.53 in breadth from outside with 1.75 thick walls. If you are fan of old buildings then u should visit this place because it has great view.\n");
        printf("Location: Comilla\n");
        printf("Distance: 106.3 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Comilla();
        }
    }
    else if(c == 6)
    {
        printf("\nLalmai Hills north-south elongated low hill of about 17 k.m. and 1-2.4 k.m. wide and about 8 k.m. westward from comilla  township is called Lalmai Mainamati hill range. The name Lalmai is probably derived from red soil or from the Lalambi forest. The Lalmai hills were uplifted in the Middle Pleistocene during the final organic movement of the Himalayas. The block upliftment of the hills. Most of the ancient Buddist monasteries are built on the hillocks of the Lalmai hill range. If you visit this place, you can know a lot of things about hills.");
        printf("Location: Comilla\n");
        printf("Distance: 148 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Comilla();
        }
    }
   else if(c==7)
    {
        system("CLS");
        hi3();
    }
}

void Chandpur()
{
    int c;
    system("cls");
    printf("\nWelcome to Chandpur\n");
    printf("\nWhich Tourist spot you want to see?\n1. Alamgiri Mosque\n2. Haji Big Mosque\n3. Hazrat Sayed Shah Rasti Mazar & Mosque\n4. Rupsha Zamindar Bari\n5. Saharpar Dighi\n\n");
    printf("\nPress '6' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &c);
    system("CLS");
    if(c == 1)
    {
        printf("\nAlamgiri Mosque situated in Walipur village under Hajiganj upazila of Chandpur district. The Alamgiri mosque has suffered much due to subsequent restoration works. Nevertheless, enough still survives to give an idea of its original plan and design. A persian inscription in fine nastaliq character, fixed over the central doorway, records the construction of the mosque by one Abdulla in 1692 AD in the reign of Alamgir Aurangzeb.\n");
        printf("Location: Hajiganj Upazila\n");
        printf("Distance: 144 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chandpur();
        }
    }
    else if(c == 2)
    {
        printf("\nHaji Big Mosque was built around 1931AD. This mosque is considered to be the oldest mosque in Chandpur district. Haji Ahmed Ali Patwari was the first founder of this mosque. The mosque has two floors, 1121 feet tall minaret and 2 domes.\n");
        printf("Location: Haziganj Upazila\n");
        printf("Distance: 184.9 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chandpur();
        }
    }
    else if(c == 3)
    {
        printf("\nHazrat Sayed Shah Rasti Mazar & Mosque was built by a man named Alim Uddin. He built this mosque just beside the graveyard of his wife Sadetunnesa. To build this Mughal stylistic Mosque he bought some masons from far land Mohishu, India.\n");
        printf("Location: Shahrasti Upazila\n");
        printf("Distance: 169 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chandpur();
        }
    }
    else if(c == 4)
    {
        printf("\nAbout 250 years ago, when the zamindar of the Hindu zamindars of the present Khajuri village of the Bangshal village fell, the founder of the Rupsha zamindar house bought the zamindar from British and he established the Rupsha zamindar house. And if you didn't know Rupsha Zamindar helped freedom fighters during the war.\n");
        printf("Location: Faridganji Upazila\n");
        printf("Distance: 166.5 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chandpur();
        }
    }
    else if(c == 5)
    {
        printf("\nThe Saharpar Dighi is an enchanting place for nature lovers. It is one of the biggest dighies in the county. The lake is surrounded by about 61 acres of land. The greenery surrounds the dighi, and the water around the vast area will fascinate you.\n");
        printf("Location: South Gohat union, Kachua Upazila\n");
        printf("Distance: 182 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chandpur();
        }
    }
    else if(c==6)
    {
        system("CLS");
        hi3();
    }
}

void Noakhali()
{
    int n;
    system("cls");
    printf("\nWelcome to Noakhali\n");
    printf("\nWhich Tourist spot you want to see?\n1. Bazra Shahi Mosque\n2. Gandhi Ashram Trust\n3. Bir Shrestha Ruhul Amin Library and Museum\n4. Nijhum Dwip\n5. Maijdee Pouro Park\n\n");
    printf("\nPress '6' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &n);
    system("CLS");
    if(n == 1)
    {
        printf("\nBazra Shahi Mosque is 18th century mosque. It was built by Aman Ullah in 1741-42 during the reign of the Mughal emperor Muhammad Shah. The mosque is rectangular. It has three domes, the middle one larger than those on the either side, and the octagonal towers at the four corners. The eastern facade has three doorways, the central one larger than the others, each projecting from the facade, opening under a half-domed vault, and flanked by slender minarets. The north and south sides each has a similar doorway. It is a great place for visiting.\n");
        printf("Location: Bazra union, Sonaimuri Upazila\n");
        printf("Distance: 131 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Noakhali();
        }
    }
    else if(n == 2)
    {
        printf("\nGandhi Ashram Trust is a philanthropic development organization working at Noakhali. It is working since 1946 with Gandhian philosophy of rural poor, especially peace and social harmony. Since inception, GAT are working for the rural poor, especially for women, in the encircled area of the Ashram. It is a great place for poor people who does not have their own shelter or food.\n");
        printf("Location: joyag, Sonaimuri Upazila\n");
        printf("Distance: 134.8 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Noakhali();
        }
    }
    else if(n == 3)
    {
        printf("\nBir Shrestha Ruhul Amin Library and Museum had several medallions conferred upon Rahul Amin by government and semi-government and non-government organizations at different times, many posters on independence war and periodicals. Ruhul Amin was born in June 1935. If you visit this library and Museum, you will get to know his early life person.\n");
        printf("Location: Sonaimuri Upazila\n");
        printf("Distance: 132 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Noakhali();
        }
    }
    else if(n == 4)
    {
        printf("\nNijhum Dwip is a small island under Hatiya upazila. Once it was called Char Osmani, Baluar Char, Golden Island. A cluster of islands emerged in the early 1950s as an alluvium in the shallow estuary of the Bay of Bengal on the south of Noakhali.\n");
        printf("Location: Hatiya upazila\n");
        printf("Distance: 130.2 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Noakhali();
        }
    }
    else if(n == 5)
    {
        printf("\nMaijdee Pouro Park is wonderful park which entertains people especially young generation. People visit this natural attractive place for relaxing. If you want to visit a natural attraction in Noakhali, u can visit this place.\n");
        printf("Location: DC Office Rd, Maijdee\n");
        printf("Distance: 121 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Noakhali();
        }
    }
    else if(n==6)
    {
        system("CLS");
        hi3();
    }

}

void Lakshmipur()
{
    int l;
    system("cls");
    printf("\nWelcome to Lakshmipur\n");
    printf("\nWhich Tourist spot you want to see?\n1. Dalal Bazar Zamindar Bari\n2. Pouro Sishu Park\n3. Titakha Jame Masjid\n4. Kaman Khola Zaminder Bari\n5. Central Saheed Minar\n6. Dalal Bazar Khowa Sagor Dighi\n\n");
    printf("\nPress '7' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &l);
    system("CLS");
    if(l == 1)
    {
        printf("\nZamindar Lokkhi Narayan Boishnob's house is now called Dalal Bazar Zamindar Bari. Actually, in this purpose Dalal means not Broker, it means Agent. After East India Company Lokkhi Narayan and his family get the realm and agency. After that people addressing them Dalal. This place is beautiful.\n");
        printf("Location: Lakshmipur Mouja\n");
        printf("Distance: 157.9 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Lakshmipur();
        }
    }
    else if(l == 2)
    {
        printf("\nIn 2011 Lakshmipur Pouro Sishu Park is funded by Municipalities and this project is lead by The Mayor Mr Abu Taher. This park is open at 10:00 am to 8:00pm. In this place have around 5 to 6 rides for children. This place is really amazing and for visit this place no need any entry fees.\n");
        printf("Location: Lawyer's colony\n");
        printf("Distance: 153.3 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Lakshmipur();
        }
    }
    else if(l == 3)
    {
        printf("\nTitakha Jame Masjid is an ancient mosque. The mosque is located in Lakshmipur municipal market. The mosque is known for its artistic craftsmanship and vision aesthetics. The most interesting is everybody, regardless of Hindu Muslim, helped in the construction of this mosque.\n");
        printf("Location: Lakshmipur City\n");
        printf("Distance: 153.5 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Lakshmipur();
        }
    }
    else if(l == 4)
    {
        printf("\nKaman Khola Zamindar Bari is near DalalBazar. It's pretty good to see. The area is fully covered by nature. There the main gate and view is amazing. At the main gate have fort. To enter this Zaminder Bari anyone should need to overcome this. They had an elephant. The elephant was dying but they stored the fossils. This area has nice pavilion for worship.\n");
        printf("Location: DalalBazar Lakshmipur Sadar\n");
        printf("Distance: 153.9 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Lakshmipur();
        }
    }
    else if(l == 5)
    {
        printf("\nCentral Saheed Minar is situated near judge Court and DC office. This is a nice place. Many  people come here to visit this place. This place is decorated before the special days like International Mother Language Day. All kinds of people came here and show their respect for those who sacrifice the Language.\n");
        printf("Location: Lakshmipur\n");
        printf("Distance: 152 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Lakshmipur();
        }
    }
    else if(l == 6)
    {
        printf("\nDalal Bazar Khowa Sagor Dighi adjacent to the Dalal Bazar around 25 acres of area. Fog is called 'Khowa' in the local language. Dighi's large length-width caused one side to feel foggy on the other end, the name of this tank Khowa Sagar Dighi. Approximately 1755, the landlord, Braj Bolv Rai, dug the dighi to protect the drinking water of the people. There are many sub-messages about this dighi. It is a beautiful place & many nature lover visit this place to witness the beauty of this Dighi.\n");
        printf("Location: DalalBazar Lakshmipur Sadar\n");
        printf("Distance: 158 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Lakshmipur();
        }
    }
    else if(l==7)
    {
        system("CLS");
        hi3();
    }
}

void Rangamati()
{
    int r;
    system("cls");
    printf("\nWelcome to Rangamati\n");
    printf("\nWhich Tourist spot you want to see?\n1. Sajek Valley\n2. Kaptai Dam\n3. Shuvolong Waterfalls\n4. Kaptai National Park\n5. Kaptai Lake\n6. Rangamati Hanging Bridge\n7. Rangamati Cultural Museum\n8. Peda Ting Ting Island\n\n");
    printf("\nPress '9' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &r);
    system("CLS");
    if(r == 1)
    {
        printf("\nSajekValley  is an emerging tourist spot in Bangladesh situated among the hills of the Kasalong range of mountains in Sajek union, Baghaichhari Upazila in Rangamati District. The valley is 1,476 feet above sea level. Sajek valley is known as the Queen of Hills & Roof of Rangamati.\n");
        printf("Location: Baghaichori Upazila, Rangamati hill district\n");
        printf("Distance: 181 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Rangamati();
        }
    }
    else if(r == 2)
    {
        printf("\nKaptai Dam is an earth-fill embankment dam with a reservoir water storage capacity of 6,477 million cubic metres. The primary purpose of the dam and reservoir was to generate hydroelectric power. Construction was completed in 1962. The generators in the 230 megawatts Karnafuli Hydroelectric Power Station were commissioned between 1962 and 1988. It is the only hydroelectric power station in Bangladesh.\n");
        printf("Location: Kaptai, Rangamati District\n");
        printf("Distance: 63.6 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Rangamati();
        }
    }
    else if(r == 3)
    {
        printf("\nShuvolong a place in Barkol sub district. There are few waterfalls in Shuvolong area with the largest one falling from as high as 300 feet. In the past several years, this place has turned into a tourist destination due to beautiful waterfalls and the nearby market. Shuvolong is easily accessible by speed boat or motor boats from Rangamati.\n");
        printf("Location: Shuvolong Barkol sub district, Rangamati\n");
        printf("Distance: 62.1 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Rangamati();
        }
    }
    else if(r == 4)
    {
        printf("\nKaptai National Park was conventional in 1999 and it's area is 13,503.8 acres. Prior to announcement of the national park it was Sitapahar Reserve. In this park one can find plenty of old trees which were planted in 1873. In Kaptai National Park, there is various wildlife such as deer, jungle cat, elephant, monkey etc. Many species of birds may also be of interest to tourists and bird lovers. Kaptai National Park is a safe and sanctuary for birds and other wildlife. The Forest Division founded picnic spots, and restaurants in this park.\n");
        printf("Location: Between the Karnaphuly and Kaptai Mountain assortments, Rangamati Hill district\n");
        printf("Distance: 57 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Rangamati();
        }
    }
    else if(r == 5)
    {
        printf("\nKaptai Lake is a beautiful blue man-made watery lake. The size of this Lake is approximately 11000 square kilometer, which was created as a reservoir when the Kaptai dam was built during the 1960. This amazing Lake was created by flooding valleys and plain lands between numerous hills all around the Lake. This created a charming view as forested hills and plateaus rise from beneath the beautiful Lake water.\n");
        printf("Location: Rangamati Sadar Upazila\n");
        printf("Distance: 77 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Rangamati();
        }
    }
    else if(r == 6)
    {
        printf("\nIt won't be overwhelming to say that the Rangamati hanging bridge is the Symbolic landmark of the Rangamati city. Hanging over Kaptai Lake, this 335 feet long bridge features a unique combination of standing upon blue water at the backdrop of green uplands.\n");
        printf("Location: Rangamati town, Rangamati\n");
        printf("Distance: 76.3 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Rangamati();
        }
    }
    else if(r == 7)
    {
        printf("\nVisiting Rangamati Cultural Museum, you can observe old manuscripts, arts, folklore collection, ancient coins, crafts, photographs, ornaments, costumes, weapons, tools, potteries, musical instruments, paintings, statues etc. These valuable possessions can give you ideas about tribal people and their lifestyle, food habit, culture, and religious practice.\n");
        printf("Location: Rangamati Sadar Upazila\n");
        printf("Distance: 74.8 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Rangamati();
        }
    }
    else if(r == 8)
    {
        printf("\nIn Peda Ting Ting Island, the local tribal people run a tiny restaurant that is famous for tasty indigenous cuisines like Bamboo Chicken (served in Bamboo). You will also find accommodation facilities for tourists. This island can give you unforgettable memories especially during sunset hours and moonlit night.\n");
        printf("Location: Rangamati Sadar Upazila\n");
        printf("Distance: 76.7 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Rangamati();
        }
    }
   else if(r==9)
    {
        system("CLS");
        hi3();
    }
}
void Chittagong()
{

    int c;
    system("CLS");
    printf("\nWelcome to Chittagong District\n");
    printf("\nWhich Tourist spot you want to see?\n1. Foy's Lake\n2. Ethnological Museum\n3. Bayazid Bostami Mazar\n4. Khoiyachora Waterfalls\n5. Chittagong Zoo\n6. Bhatiari\n7. Jamboree Park\n\n");
    printf("\nPress '8' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &c);
    system("CLS");

    if(c == 1)
    {
        printf("\nFoy's Lake is a man-made lake in Chittagong, Bangladesh. It was created in 1924 by constructing a dam across the stream that came down from the hills in the northern part of Chittagong. The Theme of The Amusement Park Becomes Full Of People In Holidays. It is a great place of joy and pleasure for children's too.\n");
        printf("Location: Pahartoli, Chittagong\n");
        printf("Distance: 6.5 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chittagong();
        }
    }
    else if(c == 2)
    {
        printf("\nEthnological Museum of Chittagong is the only ethnological museum in Bangladesh & one of the rich museum in Bangladesh. The Museum contains displays featuring the history of Bangladesh's tribal people. Inside the museum, there are 4 galleries and a small hall. This is considered as the only ethnology museum in Bangladesh which displays the lifestyles and heritage of 37 ethnic groups and four foreign countries.\n");
        printf("Location: Agrabad, Chittagong\n");
        printf("Distance: 5.9 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chittagong();
        }
    }
    else if(c == 3)
    {
        printf("\nThe Shrine of Bayazid Bostami is a shrine in Chittagong, Bangladesh. Bayazid Bostami was a famous Persian Sufi born in Bostam, Iran. It's shrine area as a complex consists of a tomb surrounded by a brick structure along with an old mosque and a large pond. Many people visit this saint's mazar everyday, pray for their own, and put something in with the hope for better returns. Not only because of religious point of view, but also for own interest people visit this Mazar.\n");
        printf("Location: Nasirabad, Chittagong\n");
        printf("Distance: 9.8 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chittagong();
        }
    }
    else if(c == 4)
    {
        printf("\nKhoiyachora Waterfall is a hilly waterfall which is situated on the hills of Mirsharai, Chittagong, Bangladesh. Among many other waterfalls in Mirsarai Upazila, such as Komoldoho Waterfall, Napittachora Waterfall, Napittachora Waterfall, Sahasradhara Waterfall, Jharjhari Waterfall etc., Khoiyachora waterfall and it's corridor is one of the largest in this hilly belt.\n");
        printf("Location: Khoiyachora Waterfalls Rd, Mirsharai, Chittagong\n");
        printf("Distance: 59 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chittagong();
        }
    }
    else if(c == 5)
    {
        printf("\nChittagong Zoo is a Zoo in Chittagong, Bangladesh. With an area of 6 acres of land it is located about three kilometers north-west of the city, alongside at the entrance of Foy's Lake, opposite the foothills of the mountains of USTC Medical College. This zoo is an attractive tourists spot for animal lovers.\n");
        printf("Location: Foy's Lake Approach Rd, Chattogram 4505\n");
        printf("Distance: 4.4 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chittagong();
        }
    }
    else if(c == 6)
    {
        printf("\nBhatiari is a place situated at Bhatiari Union in Sitakunda, Chittagong. It is famous for tourism spot in Chittagong. The place is surrounded by several lakes and hills. The hilly area in Bhatiary is under control of Bangladesh Army.\n");
        printf("Location: Bhatiari Union in Sitakunda, Chittagong\n");
        printf("Distance: 11.8 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chittagong();
        }
    }
    else if(c == 7)
    {
        printf("\nJamboree Park is an urban park in the Agrabad area of Chittagong, Bangladesh. The park has decorated with near thousand lamps which offer a dazzling view at night. The park has 50,000 square feet water-body alongside 8,000 feet walkway and compound road. Lighted walkways have created a beautiful ambience for locals & travelers to visit the newly set up Jamboree Park.\n");
        printf("Location: Chittagong\n");
        printf("Distance: 6 k.m. from Chittagong\n");
        printf("\n\nPress 1 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        printf("Press the number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            Chittagong();
        }
    }
    else if(c==8)
    {
        system("CLS");
        hi3();
    }
}
void health()
{
     printf("\nINFORMANTION ABOUT SOME HOSPITALS FOR ANY EMERGENCY SITUATION\n");
    int d;
    printf("\nWhich Division you want to see?\n\n1. Dhaka\n2. Chittagong\n3. Khulna\n4. Rajshahi\n5. Rangpur\n6. Barishal\n7. Mymensingh\n8. Sylhet\n\n");
    printf("Press 9 To Go Back\n\n");
    scanf("%d", &d);
    system("CLS");

    if(d == 1)
    {
        Dhaka_Hospitals();
    }
    else if(d == 2)
    {
        Chittagong_Hospitals();
    }
    else if(d == 3)
    {
        Khulna_Hospitals();
    }
    else if(d == 4)
    {
        Rajshahi_Hospitals();
    }
    else if(d == 5)
    {
        Rangpur_Hospitals();
    }
    else if(d == 6)
    {
        Barishal_Hospitals();
    }
    else if(d == 7)
    {
        Mymensingh_Hospitals();
    }
    else if(d == 8)
    {
        Sylhet_Hospitals();
    }
    else if(d==9)
    {
        return hridoyvaia();
    }
    else
        {
             printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return hridoyvaia();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
}
void Dhaka_Hospitals()
{
    printf("\nHERE IS SOME  HOSPITALS INFORMATION FROM DHAKA\n");
    int dh;
    printf("\nWhich district do you want to see?\n\n1. Dhaka\n2. Gazipur\n3. Kishoreganj\n4. Manikganj\n5. Munshiganj\n6. Narayanganj\n7. Narsingdi\n8. Tangail\n9. Faridpur\n10. Gopalganj\n11. Madaripur\n12. Rajbari\n13. Shariatpur\n\n");
    printf("Press 14 To get Back\n\n");
    scanf("%d", &dh);
    system("CLS");

    if(dh == 1)
    {
        printf("\n*Dhaka Medical College\nPhone Number: 02-55165088\nLocation: Secretariat Rd, Dhaka 1000\nDistance: 12.2 k.m. from Dhaka\n");
        printf("\n*Square Hospital\nPhone Number: 09610-010616\nLocation: 18/F, Bir Uttam Qazi Nuruzzaman Sarak West, Panthapath, Dhaka 1205\nDistance: 10.6 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 2)
    {
        printf("\n*Gazipur Sadar Upazila Health complex\nPhone Number: 02-9252351\nLocation: Joydebpur Rd, Gazipur\nDistance: 26.1 k.m. from Dhaka\n");
        printf("\n*Galaxy Hospital\nPhone Number: 01705-189802\nLocation: Monipur Bazar Gazipur Sadar, 1940\nDistance: 30.2 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 3)
    {
        printf("\n*Shaheed Syed Nazrul Islam Medical College Hospital\nPhone Number: 0941-61068\nLocation: Kishoreganj - Gachihata Rd, Kishoreganj\nDistance: 96.9 k.m. from Dhaka\n");
        printf("\n*Popular Multicare Hospital\nPhone Number: 01875-050650\nLocation: Eidgah Rd, Sholakiya, Kishoreganj\nDistance: 95.7 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 4)
    {
        printf("\n*Manikganj Sadar Hospital\nPhone Number: 01716301876\nLocation: Manikganj Sadar, Manikganj\nDistance: 54.8 k.m. from Dhaka\n");
        printf("\n*Manikganj Apollo Hospital\nPhone Number: 01711-076960\nLocation: Manikganj\nDistance: 52.9 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 5)
    {
        printf("\n*Munshiganj General Hospital\nPhone Number: 01632-045563\nLocation: Sadar Hospital Rd, Munshiganj\nDistance: 41.5 k.m. from Dhaka\n");
        printf("\n*Munshiganj Adhunik Hospital\nPhone Number: 01675-359462\nLocation: Nurjahan Plaza, Jubilee Road, Munshiganj 1500\nDistance: 39.3 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 6)
    {
        printf("\n*Narayanganj 300 Bed Hospital\nPhone Number: 01730-324785\nLocation: Hospital Rd, Narayanganj\nDistance: 29.9 k.m. from Dhaka\n");
        printf("\n*Care General Hospital\nPhone Number: 01779-210530\nLocation: 208 Bangabandhu Sarak, Narayanganj 1400\nDistance: 29.2 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 7)
    {
        printf("\n*Narsingdi Sadar Hospital\nPhone Number: 01734-778507\nLocation: Narsingdi - Raipur Highway, Narsingdi\nDistance: 49.6 k.m. from Dhaka\n");
        printf("\n*Holy Crescent Hospital Pvt. Ltd.\nPhone Number: 01848-324500\nLocation: Narsingdi\nDistance: 50.1 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 8)
    {
        printf("\n*Sheikh Hasina medical college and hospital\nPhone Number: 01769957199\nLocation: Kodalia New Bus Station Rd, Tangail 1900 New Bus Station Rd, Tangail 1900\nDistance: 85 k.m. from Dhaka\n");
        printf("\n*Sheba Clinic And Hospital\nPhone Number: 01711-225211\nLocation: Old Bustand, Tangail, 1900 Tangail\nDistance: 83.2 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 9)
    {
        printf("\n*Faridpur Medical College Hospital\nPhone Number: 01711282727\nLocation: Faridpur\nDistance: 116 k.m. from Dhaka\n");
        printf("\n*Faridpur Shamorita General Hospital Ltd.\nPhone Number: 01711661008\nLocation: Dhaka-Faridpur Highway, Faridpur\nDistance: 116 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 10)
    {
        printf("\n*Gopalganj General Hospital\nPhone Number: 02-9559216\nLocation: Gopalganj Town Rd, Gopalganj\nDistance: 209 k.m. from Dhaka\n");
        printf("\n*Gopalganj Central Hospital & Diagnostic Center\nPhone Number: 01870-805030\nLocation: DC Rd, Gopalganj\nDistance: 209 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 11)
    {
        printf("\n*Madaripur Sadar Hospital\nPhone Number: 0661-55226\nLocation: Madaripur Hospital Road, Madaripur\nDistance: 99.6 k.m. from Dhaka\n");
        printf("\n*Digital Apollo Hospital\nPhone Number: 01796-349817\nLocation: Lakeview tower, Circuit House Road, Madaripur\nDistance: 100 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 12)
    {
        printf("\n*Rajbari General Hospital\nPhone Number: 0641-65532\nLocation: Kazi Kanda Rd, Rajbari 7700\nDistance: 107 k.m. from Dhaka\n");
        printf("\n*Rajbari Medical Centre & Hospital\nPhone Number: 0641-65617\nLocation: Hospital Rd, Rajbari 7700\nDistance: 107 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh == 13)
    {
        printf("\n*Shariatpur Sadar Hospital\nPhone Number: 01714-698006\nLocation: Shariatpur\nDistance: 94.3 k.m. from Dhaka\n");
        printf("\n*Hazrat Shahjalal Hospital and Diagnostic Center\nPhone Number: 01404-010600\nLocation: Sadar Rd, Shariatpur\nDistance: 93.9 k.m. from Dhaka\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Dhaka_Hospitals();
            }
    }
    else if(dh==14)
    {
        return health();
    }
    else
        {
            printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return health();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
}
void Chittagong_Hospitals()
{
    printf("\nHERE IS SOME  HOSPITALS INFORMATION FROM CHITTAGONG\n");
    int c;
    printf("\nWhich district you want to see?\n\n1. Brahmanbaria\n2. Comilla\n3. Chandpur\n4. Lakshmipur\n5. Noakhali\n6. Feni\n7. Khagrachhari\n8. Rangamati\n9. Bandarban\n10. Chittagong\n11. Cox's Bazar\n\n");
    printf("Press 12 To Go Back\n\n");
    scanf("%d", &c);
    system("CLS");

    if(c == 1)
    {
        printf("\n*Brahmanbaria General Hospital\nPhone Number: 0851-59282\nLocation: Sadar Hospital Rd, Brahmanbaria 3400\nDistance: 219 k.m. from Chittagong\n");
        printf("\n*Brahmanbaria Medical College Hospital\nPhone Number: 01733-382345\nLocation: Comilla-Sylhet Highway, Ghatura, Brahmanbaria.Sadar, Brahmanbaria dist, 3400\nDistance: 223 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 2)
    {
        printf("\n*Comilla General Hospital\nPhone Number: 0816-5022\nLocation: Comilla\nDistance: 146 k.m. from Chittagong\n");
        printf("\n*Moon Hospital Limited\nPhone Number: 01766-556655\nLocation: Shahid Khawaja Nizamuddin Rd, Cumilla 3500\nDistance: 152 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");

      return Chittagong_Hospitals();
            }
            }
    else if(c == 3)
    {
        printf("\n*Chandpur Medical Collage and Hospital\nPhone Number: 01711-724760\nLocation: Kobi Nazrul Rd, Chandpur 3600\nDistance: 181 k.m. from Chittagong\n");
        printf("\n*Chandpur General Hospital\nPhone Number: 01711-033702\nLocation: Comilla Rd, Chandpur 3600\nDistance: 189 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 4)
    {
        printf("\n*Lakshmipur Sodor Hospital\nPhone Number: 01730-324773\nLocation: Lakshmipur\nDistance: 154 k.m. from Chittagong\n");
        printf("\n*Lakshmipur Central Hospital Pvt. Ltd.\nPhone Number: 01711-244634\nLocation: Stadium Rd, Lakshmipur\nDistance: 153 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 5)
    {
        printf("\n*Noakhali General Hospital\nPhone Number: 01825-134895\nLocation: Maijdee Court, Hospital Rd, Maijdee 3800, Noakhali\nDistance: 128 k.m. from Chittagong\n");
        printf("\n*Prime Hospital Ltd.\nPhone Number: 01712-025995\nLocation: Hospital Rd, Maijdee 3800, Noakhali\nDistance: 127 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 6)
    {
        printf("\n*Feni General Hospital\nPhone Number: 01855-291503\nLocation: Foleshwor, Feni Sadar\nDistance: 95.5 k.m. from Chittagong\n");
        printf("\n*Feni Medinova Hospital (Pvt) Ltd.\nPhone Number: 01949-113304\nLocation: Shahid Shahidullah Kaisar Rd, Feni\nDistance: 90.3 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 7)
    {
        printf("\n*Khagrachari District Sadar Hospital\nPhone Number: 01717720137\nLocation: New-Zealand Rd, Khagrachhari\nDistance: 114 k.m. from Chittagong\n");
        printf("\n*KSTC HOSPITAL\nPhone Number: 0371-62249\nLocation: Bazar Road, Kalaynpur, pankaiyapara road, Khagrachhari\nDistance: 112 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 8)
    {
        printf("\n*Rangamati Government Hospital\nPhone Number: 01930-541300\nLocation: Rangamati\nDistance: 71.1 k.m. from Chittagong\n");
        printf("\n*Alliance Hospital Rangamati\nPhone Number: 0351-64053\nLocation: Rangamati\nDistance: 71.6 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 9)
    {
        printf("\n*Bandarban Sadar Hospital\nPhone Number: 01730-324765\nLocation: Bandarban\nDistance: 75.5 k.m. from Chittagong\n");
        printf("\n*Hill View Hospital & Diagnostic Center\nPhone Number: 01852-464435\nLocation: Mosjid Rd, Bandarban\nDistance: 74.7 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 10)
    {
        printf("\n*Chittagong Medical College Hospital\nPhone Number: 031-630335\nLocation: Fazlul Kader Rd, Chattogram 4203\nDistance: 7.9 k.m. from Chittagong\n");
        printf("\n*Imperial Hospital Limited\nPhone Number: 09612-247247\nLocation: Zakir Hossain Rd, Chattogram 4202\nDistance: 8.6 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c == 11)
    {
        printf("\n*Cox's Bazar 250 Bed District Sadar Hospital\nPhone Number: 01730324770\nLocation: Cox's Bazar\nDistance: 152 k.m. from Chittagong\n");
        printf("\n*Union Hospital Cox's Bazar\nPhone Number: 01952-216222\nLocation: Hospital Rd, Cox's Bazar 4730\nDistance: 152 k.m. from Chittagong\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Chittagong_Hospitals();
            }
    }
    else if(c==12)
    {
        return health();
    }
    else
        {
             printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return health();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
}
void Khulna_Hospitals()
{
    printf("\nHERE IS SOME  HOSPITALS INFORMATION FROM KHULNA\n");
    int k;
    printf("\nWhich district you want to see?\n\n1. Bagerhat\n2. Chuadanga\n3. Jessore\n4. Jhenaidah\n5. Khulna\n6. Kushtia\n7. Magura\n8. Meherpur\n9. Narail\n10. Satkhira\n\n");
    printf("Press 11 To Go Back\n\n");
    scanf("%d", &k);
    system("CLS");

    if(k == 1)
    {
        printf("\n*Bagerhat Sadar Hospital\nPhone Number: 0468-62214\nLocation: Sadar Hospital Road, Bagerhat\nDistance: 41 k.m. from Khulna\n");
        printf("\n*SUFIA MEMORIAL MAA -SHISU & GENERAL HOSPITAL\nPhone Number: 01913-923975\nLocation: College Rd, Bagerhat 9300\nDistance: 40.5 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 2)
    {
        printf("\n*Chuadanga Sadar Hospital\nPhone Number: 01712263706\nLocation: Hospital Rd, Chuadanga\nDistance: 129 k.m. from Khulna\n");
        printf("\n*Islami Hospital & Diagnostic Center\nPhone Number: 01961-155549\nLocation: Sadar Hospital Gate, Chuadanga\nDistance: 128 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 3)
    {
        printf("\n*Jessore General Hospital\nPhone Number: 0421-65056\nLocation: Jashore 7400\nDistance: 57.3 k.m. from Khulna\n");
        printf("\n*Queens Hospital\nPhone Number: 0421-68355\nLocation: Jail Rd, Jashore 7400\nDistance: 57.4 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 4)
    {
        printf("\n*Jhenaidah Sadar Hospital\nPhone Number: 017303224796\nLocation: Jessore - Jhenaidah Highway, Jhenaidah\nDistance: 101 k.m. from Khulna\n");
        printf("\n*Rabeya Hospital And Diagnostic Centre\nPhone Number: Arappur, Jhenaidah\nDistance: 106 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 5)
    {
        printf("\n*Khulna Medical College Hospital\nPhone Number: 041-761535\nLocation: Near Bus stand, Khulna\nDistance: 3.5 k.m. from Khulna\n");
        printf("\n*Nargis Memorial Hospitals (Pvt) Ltd.\nPhone Number: 041-720379\nLocation: 61 S Central Rd, Khulna 9100\nDistance: 5.6 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 6)
    {
        printf("\n*Kushtia Medical College & Hospital\nPhone Number: 01755-201950\nLocation: Dhaka - Kushtia Highway, Kushtia\nDistance: 151 k.m. from Khulna\n");
        printf("\n*Kushtia General Hospital\nPhone Number: 01730-324798\nLocation: Hospital Rd, Kushtia 7000\nDistance: 150 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 7)
    {
        printf("\n*Magura Medical College Hospital\nPhone Number: 0488-62443\nLocation: Magura 7600\nDistance: 94.7 k.m. from Khulna\n");
        printf("\n*Peerless Hospital\nPhone Number: 01789-122193\nLocation: Dauladia - Faridpur - Magura - Jhenaidah - Jessore - Khulna - Mongla Rd, Magura\nDistance: 94.6 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 8)
    {
        printf("\n*Meherpur General Hospital\nPhone Number: 01829699289\nLocation: R745, Meherpur\nDistance: 157 k.m. from Khulna\n");
        printf("\n*Life Care D-lab & Hospital\nPhone Number: 01792-108151\nLocation: A. An plaza Hospital Road Boro Bazar, Meherpur\nDistance: 158 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 9)
    {
        printf("\n*Narail Sadar Hospital\nPhone Number: 0481-62214\nLocation: Jessore-Narail Road, Narail\nDistance: 60.1 k.m. from Khulna\n");
        printf("\n*Ad-din Hospital\nPhone Number: 01874-075039\nLocation: Narail\nDistance: 61.3 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k == 10)
    {
        printf("\n*Satkhira Sadar Hospital\nPhone Number: 01716-803081\nLocation: Satkhira Town\nDistance: 59 k.m. from Khulna\n");
        printf("\n*China Bangla Hospital\nPhone Number: 01700-662887\nLocation: Satkhira\nDistance: 58.6 k.m. from Khulna\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Khulna_Hospitals();
            }
    }
    else if(k==11)
    {
        return health();
    }
    else
        {
             printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return health();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
}
void Rajshahi_Hospitals()
{
    printf("\nHERE IS SOME  HOSPITALS INFORMATION FROM RAJSHAHI\n");
    int r;
    printf("\nWhich district you want to see?\n\n1. Bogura\n2. Chapainawabganj\n3. Joypurhat\n4. Naogaon\n5. Natore\n6. Pabna\n7. Rajshahi\n8. Sirajganj\n\n");
    printf("Press 9 To Go Back\n\n");
    scanf("%d", &r);
    system("CLS");

    if(r == 1)
    {
        printf("\n*Shondhani General Hospital\nPhone Number: 01719-423070\nLocation: Bonomali Dev Lane, Jaleswaritola, Bogura 5800\nDistance: 110 k.m. from Rajshahi\n");
        printf("\n*Shaheed Ziaur Rahman Medical College Hospital\nPhone Number: 051-69300\nLocation: Bogura\nDistance: 108 k.m. from Rajshahi\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rajshahi_Hospitals();
            }
    }
    else if(r == 2)
    {
        printf("\n*Chapainawabganj Adhunik Sadar Hospital\nPhone Number: 01718-253175\nLocation: Chapainawabganj\nDistance: 50.7 k.m. from Rajshahi\n");
        printf("\n*Islami Hospital\nPhone Number: 0781-52850\nLocation: Hospital Road, Chapainawabganj\nDistance: 50.5 k.m. from Rajshahi\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rajshahi_Hospitals();
            }
    }
    else if(r == 3)
    {
        printf("\n*Joypurhat District Hospital\nPhone Number: 0571-62585\nLocation: Sadar Rd, Joypurhat\nDistance: 115 k.m. from Rajshahi\n");
        printf("\n*Joypurhat Adhunik Hospital\nPhone Number: 0571-62220\nLocation: Joypurhat\nDistance: 115 k.m. from Rajshahi\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rajshahi_Hospitals();
            }
    }
    else if(r == 4)
    {
        printf("\n*Prime Lab & Hospital\nPhone Number: 01715-772915\nLocation: NAOGAON SHADAR HOSPITAL ROAD, Shebasrom Rd, Naogaon 6500\nDistance: 74.1 k.m. from Rajshahi\n");
        printf("\n*Central Lab & Hospital\nPhone Number: 01719725970\nLocation: Naogaon\nDistance: 74.2 k.m. from Rajshahi\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rajshahi_Hospitals();
            }
    }
    else if(r == 5)
    {
        printf("\n*Natore Sadar Hospital\nPhone Number: 077166912\nLocation: Natore\nDistance: 43.8 k.m. from Rajshahi\n");
        printf("\n*Natore General Hospital\nPhone Number: 01785-663300\nLocation: Natore 6400\nDistance: 46.1 k.m. from Rajshahi\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rajshahi_Hospitals();
            }
    }
    else if(r == 6)
    {
        printf("\n*Pabna Medical College and Hospital\nPhone Number: 01768-526771\nLocation: Pabna - Ishwardi Highway, Pabna\nDistance: 99.2 k.m. from Rajshahi\n");
        printf("\n*Mitu General Hospital\nPhone Number: 01711-405018\nLocation: Ataikula Rd, Pabna 6600\nDistance: 106 k.m. from Rajshahi\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rajshahi_Hospitals();
            }
    }
    else if(r == 7)
    {
        printf("\n*Rajshahi Medical College Hospital\nPhone Number: 0721-772150\nLocation: Medical College Road, Rajshahi 6100\nDistance: 2.6 k.m. from Rajshahi\n");
        printf("\n*Rajshahi Royal Hospital\nPhone Number: 0721-771277\nLocation: Ct Station Rd, Rajshahi\nDistance: 2.7 k.m. from Rajshahi\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rajshahi_Hospitals();
            }
    }
    else if(r == 8)
    {
        printf("\n*Sheikh Fazilatunnessa Mujib General Hospital\nPhone Number: 0751-63065\nLocation: Sirajganj\nDistance: 130 k.m. from Rajshahi\n");
        printf("\n*Sirajganj Central Hospital\nPhone Number: 01718-535756\nLocation: Bahir Gola Road, Sirajganj, Rajshahi 6700\nDistance: 130 k.m. from Rajshahi\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rajshahi_Hospitals();
            }
    }
    else if(r==9)
    {
        return health();
    }
    else
        {
             printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return health();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
}
void Rangpur_Hospitals()
{
    printf("\nHERE IS SOME  HOSPITALS INFORMATION FROM RANGPUR\n");
    int r;
    printf("\nWhich district you want to see?\n\n1. Rangpur\n2. Dinajpur\n3. Kurigram\n4. Nilphamari\n5. Gaibandha\n6. Thakurgaon\n7. Panchagarh\n8. Lalmonirhat\n\n");
    printf("Press 9 To Get Back\n\n");
    scanf("%d", &r);
    system("CLS");

    if(r == 1)
    {
        printf("\n*Rangpur Medical College and Hospital\nPhone Number: 0521-53881\nLocation: Rangpur- Dinajpur Highway, Near Central Jail, Rangpur 5400\nDistance: 5.8 k.m. from Rangpur\n");
        printf("\n*Northern Private Medical College & Hospital\nPhone Number: 0521-55231\nLocation: Medical East Gate, Rangpur 5400\nDistance: 5.8 k.m. from Rangpur\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rangpur_Hospitals();
            }
    }
    else if(r == 2)
    {
        printf("\n*M. Abdur Rahim Medical College Hospital\nPhone Number: 0531-52080\nLocation: Dinajpur 5200\nDistance: 74.4 k.m. from Rangpur\n");
        printf("\n*Dinajpur General Hospital\nPhone Number: 0531-64023\nLocation: Hospital Rd, Dinajpur\nDistance: 73 k.m. from Rangpur\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rangpur_Hospitals();
            }
    }
    else if(r == 3)
    {
        printf("\n*Kurigram Sadar Hospital\nPhone Number: 01740-624140\nLocation: Hospital Rd, Kurigram 5600\nDistance: 42.6 k.m. from Rangpur\n");
        printf("\n*Green Life General Hospital\nPhone Number: 01730-881887\nLocation: Hospital Rd, Kurigram\nDistance: 42.3 k.m. from Rangpur\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rangpur_Hospitals();
            }
    }
    else if(r == 4)
    {
        printf("\n*Nilphamari Adhunik Sadar Hospital\nPhone Number: 01716-170424\nLocation: Nilphamari Sadar Upazila, Nilphamari 5300\nDistance: 60.5 k.m. from Rangpur\n");
        printf("\n*A.R General Hospital\nPhone Number: 01733-077000\nLocation: Nilphamari\nDistance: 54.4 k.m. from Rangpur\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rangpur_Hospitals();
            }
    }
    else if(r == 5)
    {
        printf("\n*Zilla Government Hospital\nPhone Number: 01780-887113\nLocation: Gaibandha\nDistance: 60.3 k.m. from Rangpur\n");
        printf("\n*SKS Hospital\nPhone Number: 01730-072575\nLocation: Gaibandha\nDistance: 59.6 k.m. from Rangpur\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rangpur_Hospitals();
            }
    }
    else if(r == 6)
    {
        printf("\n*Thakurgaon Adhunik Sadar Hospital\nPhone Number: 0561-52021\nLocation: Bangabandhu Rd, Thakurgaon 5100\nDistance: 108 k.m. from Rangpur\n");
        printf("\n*Thakurgaon BGB Hospital‎\nPhone Number: 0561-53714\nLocation: Dhaka - Rangpur Highway, Thakurgaon\nDistance: 105 k.m. from Rangpur\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rangpur_Hospitals();
            }
    }
    else if(r == 7)
    {
        printf("\n*Panchagarh Adhunik Sadar Hospital\nPhone Number: 0568-61316\nLocation: Panchagarh 5000\nDistance: 115 k.m. from Rangpur\n");
        printf("\n*New Life Clinic Hospital\nPhone Number: 01715614680\nLocation: Panchagarh\nDistance: 115 k.m. from Rangpur\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rangpur_Hospitals();
            }
    }
    else if(r == 8)
    {
        printf("\n*Lalmonirhat Sadar Hospital\nPhone Number: 01730-324809\nLocation: Lalmonirhat\nDistance: 38.1 k.m. from Rangpur\n");
        printf("\n*Doctors Dental Care\nPhone Number: 01725-671446\nLocation: Airport Rd, Lalmonirhat\nDistance: 34.9 k.m. from Rangpur\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Rangpur_Hospitals();
            }
    }
    else if(r==9)
    {
        return health();
    }
    else
        {
             printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return health();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
}
void Barishal_Hospitals()
{
    printf("\nHERE IS SOME  HOSPITALS INFORMATION FROM BARISHAL\n");
    int b;
    printf("\nWhich district you want to see?\n\n1. Barisal\n2. Barguna\n3. Bhola\n4. Jhalokathi\n5. Patuakhali\n6. Pirojpur\n\n");
    printf("Press 7 To Get Back\n\n");
    scanf("%d", &b);
    system("CLS");

    if(b == 1)
    {
        printf("\n*Sher-E-Bangla Medical College Hospital\nPhone Number: 0431-2173547\nLocation: Band Rd, Barishal 8200\nDistance: 2.4 k.m. from Barishal\n");
        printf("\n*Islami Bank Hospital\nPhone Number: 01718-237662\nLocation: Barishal 8200\nDistance: 3.3 k.m. from Barishal\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Barishal_Hospitals();
            }
    }
    else if(b == 2)
    {
        printf("\n*Barguna General Hospital\nPhone Number: 01711076416\nLocation: Hospital Rd, Barguna\nDistance: 81.9 k.m. from Barishal\n");
        printf("\n*Kuwait Probashi Hospital\nPhone Number: 01711-273914\nLocation: Barguna\nDistance: 80.6 k.m. from Barishal\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Barishal_Hospitals();
            }
    }
    else if(b == 3)
    {
        printf("\n*Bhola General Hospital\nPhone Number: 0491-61000\nLocation: Hospital Rd, Bhola\nDistance: 48.5 k.m. from Barishal\n");
        printf("\n*Shabajpur General Hospital\nPhone Number: 01701-668114\nLocation: Masuma Khanom School Road,Bangla School Mor,Sadar Road,Bhola Western Para Rd\nDistance: 47 k.m. from Barishal\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Barishal_Hospitals();
            }
    }
    else if(b == 4)
    {
        printf("\n*Jhalokathi Sadar Hospital\nPhone Number: 01712163530\nLocation: Jhalokathi\nDistance: 19 k.m. from Barishal\n");
        printf("\n*Jhalokathi Govt. Hospital\nPhone Number: 01682-109877\nLocation: Jhalokathi\nDistance: 20.2 k.m. from Barishal\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Barishal_Hospitals();
            }
    }
    else if(b == 5)
    {
        printf("\n*Patuakhali Medical College Hospital\nPhone Number: 0441-65325\nLocation: Patuakhali town\nDistance: 43.5 k.m. from Barishal\n");
        printf("\n*Central Hospital Pvt.Ltd.\nPhone Number: 01780-285562\nLocation: Dhaka - Patuakhali Highway, Patuakhali\nDistance: 44.7 k.m. from Barishal\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Barishal_Hospitals();
            }
    }
    else if(b == 6)
    {
        printf("\n*Pirojpur Sadar Hospital\nPhone Number: 01721-480602\nLocation: Pirojpur Pourashava\nDistance: 51.2 k.m. from Barishal\n");
        printf("\n*Ambia Hospital\nPhone Number: 01716887279\nLocation: Sadar Rd, Pirojpur Pourashava\nDistance: 51.3 k.m. from Barishal\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Barishal_Hospitals();
            }
    }
    else if(b==7)
    {
        return health();
    }
    else
        {
            printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return health();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
}
void Mymensingh_Hospitals()
{
    printf("\nHERE IS SOME  HOSPITALS INFORMATION FROM MYMENSINGH\n");
    int m;
    printf("\nWhich district you want to see?\n\n1. Mymensingh\n2. Netrokona\n3. Jamalpur\n4. Sherpur\n\n");
    printf("Press 5 To Go Back\n\n");
    scanf("%d", &m);
    system("CLS");

    if(m == 1)
    {
        printf("\n*Mymensingh Medical College & Hospital\nPhone Number: 01768-027115\nLocation: Char Para, Medical Rd, Mymensingh 2200\nDistance: 3.5 k.m. from Mymensingh\n");
        printf("\n*Nexus Hospitals Bangladesh\nPhone Number: 01796-586561\nLocation: Nexus Hospital Building, Dhaka-Mymensingh Rd, Mymensingh 2200\nDistance: 1.7 k.m. from Mymensingh\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Mymensingh_Hospitals();
            }
    }
    else if(m == 2)
    {
        printf("\n*Netrokona General Hospital\nPhone Number: 01730-324788\nLocation: Netrokona 2400\nDistance: 37.7 k.m. from Mymensingh\n");
        printf("\n*Netrokona Ideal Hospital\nPhone Number: 01741-024064\nLocation: Netrokona\nDistance: 38.8 k.m. from Mymensingh\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Mymensingh_Hospitals();
            }
    }
    else if(m == 3)
    {
        printf("\n*250 Bed Jamalpur General Hospital\nPhone Number: 01711632276\nLocation: Jamalpur\nDistance: 61.2 k.m. from Mymensingh\n");
        printf("\n*Jamalpur Central Hospital\nPhone Number: 01746-023077\nLocation: Jamalpur\nDistance: 60 k.m. from Mymensingh\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Mymensingh_Hospitals();
            }
    }
    else if(m == 4)
    {
        printf("\n*Sherpur Sadar Hospital\nPhone Number: 01776-745185\nLocation: Sherpur 2100\nDistance: 67.2 k.m. from Mymensingh\n");
        printf("\n*Sherpur Doctors Hospital\nPhone Number: 01772-226665\nLocation: Sherpur\nDistance: 68.1 k.m. from Mymensingh\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Mymensingh_Hospitals();
            }
    }
    else if(m==5)
    {
        return health();
    }
    else
       {
           printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return health();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
       }
}
void Sylhet_Hospitals()
{
    printf("\nHERE IS SOME  HOSPITALS INFORMATION FROM SYLHET\n");
    int s;
    printf("\nWhich district you want to see?\n\n1. Sylhet\n2. Sunamganj\n3. Moulvibazar\n4. Habiganj\n\n");
    printf("Press 5 To Go Back\n\n");
    scanf("%d", &s);
    system("CLS");

    if(s == 1)
    {
        printf("\n*Sylhet MAG Osmani Medical College Hospital\nPhone Number: 0821-713667\nLocation: Medical College Rd, Sylhet\nDistance: 2 k.m. from Sylhet\n");
        printf("\n*Mount Adora Hospital\nPhone Number: 01711-580147\nLocation: Mount Adora Hospital, Nayasarak Rd, Sylhet 3100\nDistance: 1 k.m. from Sylhet\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Sylhet_Hospitals();
            }
    }
    else if(s == 2)
    {
        printf("\n*Sunamganj Sadar Hospital\nPhone Number: 0871-55251\nLocation: Hospital Rd, Sunamganj\nDistance: 63.1 k.m. from Sylhet\n");
        printf("\n*R & M General Hospital\nPhone Number: 01715-027395\nLocation: Shologhor Rd, Sunamganj\nDistance: 62.9 k.m. from Sylhet\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Sylhet_Hospitals();
            }
    }
    else if(s == 3)
    {
        printf("\n*Moulvibazar Sadar Hospital\nPhone Number: 0861-53038\nLocation: Dhaka - Moulvibazar Highway, Moulvibazar 3200\nDistance: 59.8 k.m. from Sylhet\n");
        printf("\n*Hope Private Hospital\nPhone Number: 01726-447601\nLocation: Moulvibazar\nDistance: 60.1 k.m. from Sylhet\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Sylhet_Hospitals();
            }
    }
    else if(s == 4)
    {
        printf("\n*Habiganj Adhunik Zilla Sadar Hospital\nPhone Number: 01716-260211\nLocation: Habiganj\nDistance: 83.7 k.m. from Sylhet\n");
        printf("\n*Chander Hasi Hospital Limited\nPhone Number: 01767-100300\nLocation: Freedom Fighter Complex, Old Hospital Rd, Habiganj 3300\nDistance: 83.4 k.m. from Sylhet\n");
        int out;
            printf("\n\n\t\t\t\tPress '1' to return- ");
            scanf("%d",&out);
            if(out==1)
            {
                system("CLS");
                return Sylhet_Hospitals();
            }
    }
    else if(s==5)
    {
        return health();
    }
    else
        {
            printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return health();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
        }
}
void help()
{
    system("CLS");
    int digit;

    printf("~~~~~~~~~~ HELPLINE ~~~~~~~~~~\n");
    printf(" 1.Bangladesh police helpline \n 2.Bangladesh fire service helpline\n 3.Bangladesh health care helpline\n 4.Bangladesh tourist police helpline.\n\n ");
    printf("Press 5 To Get Back\n\n");
    printf("CHOOSE ANY NUMBER :");

    scanf("%d",&digit);

    switch (digit)
    {
    case 1:
        system("CLS");
        printf("\t\t\n\n\n~~~~WELCOME TO BANGLADESH POLICE HELPLINE SECTOR.~~~~\n\n For national emergency service dial 999\n\n\n");
        int back;
        printf("Press 1 To Get Back\n\n");
        scanf("%d",&back);
        if(back==1)
        {
            return help();
        }
        break;
    case 2:
        system("CLS");
        printf("\t\t\n\n~~~~WELCOME TO BANGLADESH FIRE SERVICE HELPLINE SECTOR.~~~~\n\n ~For emergency dial 02-9555555\n\n\n");
        int back2;
        printf("Press 1 To Get Back\n\n");
        scanf("%d",&back2);
        if(back2==1)
        {
            return help();
        }
        break;

    case 3:
        system("CLS");
        printf("\t\t\n\n~~~~WELCOME TO BANGLADESH HEALTH CARE SECTOR.~~~~\n\n~Dial 16263 and get advised from Doctor about of diseases.\n\n\n");
        int back3;
        printf("Press 1 To Get Back\n\n");
        scanf("%d",&back3);
        if(back3==1)
        {
            return help();
        }
        break;
    case 4:
        system("CLS");
        printf("\t\t\n\n~~~~WELCOME TO BANGLADESH TOURIST POLICE HELPLINE SECTOR.~~~~\n\n~Please dial 01769690740 for call the tourist police.\n\n\n");
        int back4;
        printf("Press 1 To Get Back\n\n");
        scanf("%d",&back4);
        if(back4==1)
        {
            return help();
        }
        break;
    case 5:
        system("CLS");
        return hridoyvaia();
        break;
    default:
        printf("~~~~Not a valid number.~~~~\n\n");
    }
}
void about()
{
     printf("\n\n\n\t\t\t\t\t\t\t\t~~~~ABOUT US~~~~\n\n");
    printf("~> Welcome to our project.\n\n~> This project consists of plethora of information about Bangladesh tourism and many more things.\n\n~> The actual motto of this project is to help tourists to find tourist places,hotels,banks,A.T.M Booths,convert currency etc. by having a short glance over our project.\n\n~> Hope it will help everyone to find out their favorite tourist and also to check out their necessary stuffs\n\n\n");
    printf("\n For more details,please contact us.\n\n>>1.Syed Shafkatul Hassan\n>>Phone:+8801552418687\n");
    printf("\n>>2.Moksudul Islam Rifat\n>>Phone:+8801726337900\n");
    printf("\n>>3.Mohaimin Al Sayeed\n>>Phone:+8801627061094\n");
    printf("\n>>4.Biggo Bushon Routh\n>>Phone:+8801729807254\n");
    printf("\n>>5.Kamrun Nahar\n>>Phone:+8801981006695\n");
    printf("\n>>6.Zeenat Sultana Nishat\n>>Phone:+8801625229344\n\n\n");
    printf("\t\t\t\t\t\t\t\tCurator Of The Project:\n\n\t\t\t\t\t\t\t\t>>> Md.Saidur Rahman Kohinoor\n\n\n");
    printf("\t\t\t\t\t\t\t\tMonitor of The Project:\n\n");
    printf("\t\t\t\t\t\t\t\t>>> Hridoy Chowdhury\n\n\n\n\n");
    printf("\t\t\t\t\t\t\tSpecial Thanks To Our Estimable Sir And Senior Monitor\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t  <<<<<< THANK YOU >>>>>>\n\n\n\n");
    int back;
    printf("Press 1 To Get Back\n\n >>> ");
    scanf("%d",&back);
    if(back==1)
    {
        system("CLS");
        return hridoyvaia();
    }
    else
    {
         printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the previous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("CLS");
          return hridoyvaia();
        }
        else if(n==2)
        {
          system("CLS");
          return main();
        }
    }
}
void Barisal1()
{
    system("CLS");
    printf("\nWelcome to Barishal Division\n");
    printf("\nBarisal Division is one of the eight administrative divisions of Bangladesh. Located in the south-central part of the country, it has an area of 13,644.85 sq k.m., and a population of 8,325,666 at the 2011 Census. It is bounded by Dhaka Division on the north, the Bay of Bengal on the south, Chittagong Division on the east and Khulna Division on the west. The administrative capital, Barishal city, lies in the Padma River delta on an offshoot of the Arial Khan River. Barisal division is criss-crossed by numerous rivers that earned it the nickname 'Dhan-Nodi-Khal, Ei tine Borishal' (rice, river and canal built Barisal).\n\n");

    int a;
    printf("\nWhat you would like to see?\n 1. Hotels & Resorts\n 2. Money Exchange Point\n 3. Bank\n 4. ATM Booth\n 5. Districts\n\n");
    printf("\n\nPress '6' to go to the previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Enter the number:");
    scanf("%d", &a);
    system("CLS");
    if(a == 1)
    {
        Hotel6();
    }
    else if(a == 2)
    {
        system("CLS");
        printf("\nHere is the details of some Money Exchange points\n");
        printf("\n1. PaymentBD.com - Barisal Branch\nLocation: BM College Rd, Barishal 8200\n");
        printf("\n2. MoneyGram\nLocation: Notun Bazaar Police Station, Hospital Rd, Barishal 8200\n");
        printf("\n3. MoneyGram\nLocation: Fatema Center, 523 Sadar Rd, Barishal\n");
        int shafkat;
        printf("Press any number to exit the program\n");
        printf("\nPress '1' to go to the previous page\nPress Number:");
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return Barisal1();
        }
    }
    else if(a == 3)
    {
        printf("\nHere is the details of some banks\n");
        printf("\n1. AB Bank Limited\nLocation: Barisal Branch, Monsur Mansion (1st Floor), 101 Sadar Rd, Barishal\n");
        printf("\n2. Trust Bank Limited\nLocation: Barisal Branch, S Rahman Market (Ground floor), 78 Sadar Rd, Barishal 8200");
        printf("\n3. First Security Islami Bank Limited, Barguna Branch\nLocation: Shahabuddin Plaza, Holding No:3127, Bangabandhu Road, Barguna, Barishal\n");
        printf("\n4. Grameen Bank, Barguna Branch\nLocation: Barguna, Barishal\n");
        printf("\n5. Pubali Bank Limited, Bhola Branch\nLocation: Bhola, Barishal 8300\n");
        printf("\n6. Bank Asia Kirtipasha Bazar Agent Outlet\nLocation: Kirtipasha, Jhalokathi Sadar, Jhalokathi, Kirtipasha Bridge, Barishal\n");
        printf("\n7. National Bank Limited\nLocation: 120 Rajonigondha Vobhon, Sador Road, Natun Bazar, Patuakhali, Sadar Rd, Patuakhali, Barishal\n");
        printf("\n8. Dutch Bangla Bank limited, Pirojpur Branch\nLocation: Pirojpur Pourashava, Pirojpur, Barishal\n");
        printf("\n\nPress any number to exit the program\n");
        printf("Press '1' to go to the previous page\nPress Number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return Barisal1();
        }
    }
    else if(a == 4)
    {
        printf("\nHere is the details of some ATM Booths\n");
        printf("\n1. Jamuna Bank Limited ATM\nLocation: Ghani Bhaban, BM College Rd, Barishal 8200\n");
        printf("\n2. Islami Bank Bangladesh Omnibus ATM\nLocation: Bhanga-Barisal Highway, Barishal\n");
        printf("\n3. BRAC Bank Limited ATM\nLocation: Sadar Rd, Barishal 8200\n");
        printf("\n4. City Bank ATM Booth\nLocation: Raja Bahadur Rd, Barishal 8200\n");
        printf("\n5. Dutch-Bangla Bank ATM\nLocation: Sadar Rd, Barishal\n");
        printf("\n\nPress any number to exit the program\n");
        printf("\nPress 1 to go to the previous page\nPress Number:");
        int shafkat;
        scanf("%d",&shafkat);
        if(shafkat==1)
        {
            system("CLS");
            return Barisal1();
        }
    }
    else if(a == 5)
    {
        hi4();
    }
    else if(a == 6)
    {
        division();
    }
}

void Hotel6()
{
    int h;
    printf("\nWhich Hotel you want to see?\n 1. Hotel Grand Park Barisal\n 2. Hotel Charu Residential\n 3. Hotel South Bangla\n 4. Hotel Aronno Bilash Residence\n 5.Sikder Resort & Villas\n\n");
     printf("\nPress '6' to back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    scanf("%d", &h);
    system("CLS");
    if(h == 1)
    {
        printf("\nHotel Grand Park Barisal\n");
        printf("Address: Bell's Park, Band Road, Barishal 8200\n");
        printf("Distance: 3.3 k.m. from Barishal\n");
        printf("Contact Number: 01777735175\n");
        printf("\n*Deluxe Double Room = 11,850 BDT per Night\n*Superior Twin Room = 11,850 BDT per Night\n*Family Suite = 19,750 BDT per Night\n");
    }
    else if(h == 2)
    {
        printf("\nHotel Charu Residential\n");
        printf("Address: Barishal\n");
        printf("Distance: 3.4 k.m. from Barishal\n");
        printf("Contact Number: 01770262163\n");
        printf("\n*Deluxe Double Room = 4,014 BDT per Night\n*Deluxe Twin Room = 4,014 BDT per Night\n*Family Room = 4,515 BDT per Night\n");
    }
    else if(h == 3)
    {
        printf("\nHotel South Bangla\n");
        printf("Address: Sadar Road kuakata, Kalapara, Patuakhali\n");
        printf("Distance: 111 k.m. from Barishal\n");
        printf("Contact Number: 01707622220\n");
        printf("\n*Economy Double Room = 2,520 BDT per Night\n*Double Room = 2,699 BDT per Night\n*Deluxe Double Room = 3,499 BDT per Night\n");
    }
    else if(h == 4)
    {
        printf("\nHotel Aronno Bilash Residence\n");
        printf("Address: Barisal - Patuakhali Rd, Kuakata\n");
        printf("Distance: 112 k.m. from Barishal\n");
        printf("Contact Number: 01911777456\n");
        printf("\n*Deluxe Family Room = 2,681 BDT per Night\n*Deluxe Double Room = 3,281 BDT per Night\n*Deluxe Double or Twin Room = 3,088 BDT per Night\n");
    }
    else if(h == 5)
    {
        printf("\nSikder Resort & Villas\n");
        printf("Address: Opposite of ECO Park, Kuakata, Patuakhali\n");
        printf("Distance: 115 k.m. from Barishal\n");
        printf("Contact Number: 01700802726\n");
        printf("\n*Deluxe Twin Room = 12,185 BDT per Night\n*Deluxe Quadruple Room = 14,622 BDT per Night\n*Deluxe Villa = 29,243 BDT per Night\n*Premium Quadruple Room = 17,058 BDT per Night\n");
    }
    else if(h==6)
    {
        Barisal1();
    }
    int shafkat;
    printf("Press 1 to go to the previous page\nPress any other key to exit the program\n\nPress the number:");
    scanf("%d",&shafkat);
    if(shafkat==1)
    {
        system("CLS");
        return Hotel6();
    }

}

void Barishal()
{
    int b;
    system("cls");
    printf("\nWelcome to Barishal District\n");
    printf("\nWhich Tourist spot you want to see?\n1. Lakhutia Zamindar Bari\n2. Guthia Baitul Aman Jame Masjid Complex\n3. Barisal Divisional Museum\n4. Planet Park\n5.Koloshkathi\n press '6' to go to the privous page \n\n");
    scanf("%d", &b);
    system("cls");
    if(b == 1)
    {

        printf("\nLakhutia Zamindar Bari is one of the oldest heritages of Barishal. This Zamindar Bari or palace is located at Lakhutia village, 8 k.m. north of Barishal city. The Zamindari legacy of that region is said to be established in the 18th century by Raja Rupchondro Roy. However, Lakhutia Zamindar Bari was built much later. In the 19th century, Raja Raychondro Roy, Grandson of Raja Rupchondro Roy is credited to have built the palace.\n");
        printf("Location: Lakhutia, Babuganj upazila, Barishal\n");
        printf("Distance: 9.5 k.m. from Barishal\n\n\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }

    }
    else if(b == 2)
    {
        printf("\nGuthia Baitul Aman Jame Masjid has been built in Guthia union at Barisal district. The mosque covers an area of 14 acres. It is not only a center of prayer but also a place for visiting. Guthia Mosque has not any traditional or ancient history. It was built in 2003. Sharfuddin Ahmed Senut built the mosque. The cost of construction of this mosque is about 20 crore taka which was the solo donation of Sharfuddin Ahmed. On October 20, 2006, the mosque was inaugurated by praying Jumma Prayer. Since then many visitors from different places in the country have been visiting the mosque every day.\n");
        printf("Location: Barishal\n");
        printf("Distance: 14.7 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 3)
    {
        printf("\nBarisal Divisional Museum has been established in the old Collectorate building of the district. The building itself is a historical monument that was built in the British era. The government of Bangladesh declared the building as a protected archaeological site in 2003. In 2005, the work of transforming the building into a museum has been started. There are 9 galleries in the Museum. The galleries display the pictures of many archaeological and historical landmarks of almost 1.5 thousand years old.\n");
        printf("Location: Fazlul Haque Ave, Barishal\n");
        printf("Distance: 2.1 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 4)
    {
        printf("\nPlanet Park is the only amusement park listed in Barisal. Parents visit this place with their children because it is a good place for children to play and enjoy themselves. Even adults come to this place for refreshment or walk with their love one. Entry fee is only 20 taka so everyone can entry in this beautiful park.\n");
        printf("Location: Band Rd, Barishal 8200\n");
        printf("Distance: 2.6 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 5)
    {
        printf("\nKoloshkathi is an ancient town. Thirteen zamindars live in Koloshkathi. In fact, the history of Koloshkathi is the history of zamindari. In the early 1800s, Zamindar Janaki Vallabh Roy Chowdhury established Koloshkathi. In fact, Koloshkathi is not called a separate zamindar's house, it is an ancient city. Much like the Panam Nagar of Sonargaon. Here the zamindar houses are scattered. There is another old house next to the main zamindar's house. Most of the Hindus live here.\n");
        printf("Location: Koloshkathi Union, Bakerganj, Barisal\n");
        printf("Distance: 21.3 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b==6)
    {
        system("CLS");
        return hi4();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\npress any key to  end the program\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Barishal();
        }
        else if(n==2)
        {
          system("SLB");
          return Barisal1();
        }
    }
}

void Barguna()
{
    int b;
    system("cls");
    printf("\nWelcome to Barguna\n");
    printf("\nWhich Tourist spot you want to see?\n1. Bibi Chini Shahi Mosque\n2. Bhawal National Park\n3. Taltali Para Zeyarama Thirimingala Buddhist Temple\n4. Haringhata\n5. The Laldia forest and beach\n\n");
    printf("press 6 to go to the privous page\npress the number:");
    scanf("%d", &b);
    system("CLS");
    if(b == 1)
    {
        printf("\nBibi Chini Shahi Mosque, is one of the historical places in our country. In 1659, A Muslim saint named Hazrat Shah Neyamat Ullah (Rah.) came here from Persia for Perching Islam in this region. The village and the mosque named after the name of his daughter 'Hayache Bibi Chini'. The mosque is 33 ft long, 33 ft width and the wall of the mosque are 6 ft wide.\n");
        printf("Location: Bibi Chini, Betagi Upazila, Barguna\n");
        printf("Distance: 41.4 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 2)
    {
        printf("\nSonar char or Sonakata is located in Barguna district, 32 km from a beach in the Bay of Bengal to the south Amatali. Sonakatata own mahima luminous beauty and amazing beaches. High-water green belts 7/8 feet of water in the bottom of the wind. This is an astounding natural scene. Safe bathing at the sea beach, sunrise and sunset from the same place in San bathasaha overview can be seen.\n");
        printf("Location: Barguna\n");
        printf("Distance: 113 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 3)
    {
        printf("\nTaltali Para Zeyarama Thirimingala Buddhist Temple is one of the most beautiful sites of Taltali Upozila proper. Looking like a gold-plated monument, the Temple is the spiritual and communal heart of the few thousands Rakhines living here for a long time.\n");
        printf("Location: Amtali Taltali Sonachar Rd, Taltali, Barguna\n");
        printf("Distance: 99.3 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 4)
    {
        printf("\nHaringhata is one of the most spectacular visiting places in Pathorghata area. Here, a beautiful forest is situated in the lap of the sea. Besides the forest and the sea, one can also observe the congregation of several deer at this spot. It is a remarkably pleasant sight of blue waters of the sea, green trees of the forest and beautiful deer roaming around in the area.\n");
        printf("Location: Patharghata, Barguna\n");
        printf("Distance: 115 from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 5)
    {
        printf("\nThe Laldia forest and beach is a beautiful place. It is a place free from the noisy. The beach is on the side of the ever green forest. This place is not too familiar to the tourists, because of this no crowd is seen here. There is no accommodation here, because of this the visitors of this beach will have to come back in the daytime.\n");
        printf("Location: Pathorghata, Barguna\n");
        printf("Distance: 110 from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b==6)
    {
        system("CLS");
        return hi4();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nPress any other key to exit the program\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Barishal();
        }
        else if(n==2)
        {
          system("SLB");
          return Barisal1();
        }
    }
}

void Bhola()
{
    int b;
    system("cls");
    printf("\nWelcome to Bhola\n");
    printf("\nWhich Tourist spot you want to see?\n1. Bir Sreshtho Mostafa Kamal Memorial Museum\n2. Monpura landing station\n3. Char kukri Mukri\n4. Wonder Kingdom\n5. Jacob watchtower\n\n");
     printf("press 6 to go to the privous page\npress the number:");
    scanf("%d", &b);
    system("CLS");
    if(b == 1)
    {
        printf("\nBangladesh Government made this memorial in memory of Bir Shrestho Mostafa Kamal in his fatherland Moutupi mouja which is under Alinagar union in Bhola district. A lot of memorial points of 1971 are here. Library, auditorium and the memories which come to mind to travel away the majesty of the image. In museum the memorial marks of war history are preserved.\n");
        printf("Location: Alinagar Union, Bhola\n");
        printf("Distance: 50.2 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 2)
    {
        printf("\nMonpura landing station is create on 500 meters inner in the river. Not only tourists, local peoples are also come here passing time from afternoon to night. If you seating here at night, you have felling you flotation deep in the Meghna river. Because, around the water in your seating place and you have seat little on the water. Water flow of river and wave sometimes shaking the station, that time you have feeling that, you are going to float in the river.\n");
        printf("Location: Hajirhat Launch Ghat, Hajirhat, Bhola\n");
        printf("Distance: 120 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 3)
    {
        printf("\nA natural beauty rising on heart of Bhola. People know it as 'Dip Konna' too. A good place for traveler who love nature as you can enjoy natural beauty of Mangrove Forest, Wildlife and sea. This island is familiar to everyone cause of its natural beauty. It is an assumption that the island is four to five hundred years old and not so highly modernized.\n");
        printf("Location: Bhola\n");
        printf("Distance: 130 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 4)
    {
        printf("\nAfter liberation of Bangladesh, there are no any visiting or tourism places to recreation in Bhola district. Recently man made a park Called 'Wonder Kingdom' to pass leisure period and for the children's. This park is not natural but an amusing.\n");
        printf("Location: Char Noabad, Sadar thana, Bhola\n");
        printf("Distance: 47.7 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(b == 5)
    {
        printf("\nJacob watchtower is located in Char Fasson upazila of Bhola district.This spectacular watchtower is being constructed and hopefully open for all by this year. The height of this tower is 215 feet that means about 18 storied building's height. The construction cost of this tower is 20 crore taka. Locally this tower is also known as Char Fasson watch tower.\n");
        printf("Location: Char Fasson Upazila, Bhola\n");
        printf("Distance: 115 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
     else if(b==6)
    {
        system("CLS");
        return hi4();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\npress any other key to exit the program\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Barishal();
        }
        else if(n==2)
        {
          system("SLB");
          return Barisal1();
        }
    }
}

void Jhalokati()
{
    int j;
    system("cls");
    printf("\nWelcome to Jhalokati\n");
    printf("\nWhich Tourist spot you want to see?\n1. Kirtipasha Zamindar Bari\n2. Mia Bari Mosque\n3. Famous kuriana Guava Garden\n4. Hazrat Daud Shah Mazar\n5. Saturia Zamindar House\n\n");
    printf("press '6' to go to the privous page\npress the number:");
    printf("Enter the number:");
    scanf("%d", &j);
    system("CLS");
    if(j == 1)
    {
        printf("\nKirtipasha Zamindar Bari is located at Kirtipasha Bazar Road, Kirtipasha, Jhalokati. This is probably a century old house. Now a days, it is abandoned and in a dilapidated condition. For most of the cases only the walls are standing, and the floors or ceilings are disappeared.\n");
        printf("Location: Kirtipasha Bazar Road, Kirtipasha Union, Jhalokati\n");
        printf("Distance: 49.4 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(j == 2)
    {
        printf("\nMia Bari Mosque is an old mosque from the Barisal district. The mosque is located at the Mia Bari of that area. It is believed that the mosque was built during 18th century. They have painted the mosque recently, and also doing some sort of restoration now. And thus it lost its antiquity entirely.\n");
        printf("Location: Karapur, Jhalokati\n");
        printf("Distance: 30.7 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(j == 3)
    {
        printf("\nFamous kuriana Guava Garden is a riverside garden where thousands of Boats are full of with fresh and ripe guava. By focusing this garden's Guavas, there is 200 years old Guava floating market. It is a very famous and busy market. Specially you will like the way of travelling. You must choose the boat ride to reach that place. The journey was awesome. Boat passed through canal & small river. Guava garden are stands both side of the river.\n");
        printf("Location: Atghar Kuriana Union, Jhalokati\n");
        printf("Distance: 37 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(j == 4)
    {
        printf("\nIt is known that Hazrat Daud Shah (R), who devoted himself to the great work of propagating Islam during the Turkish-Afghan rule, established three mosques at Jhalokati Port, Sutalari and Nalchiti. At that time, these two mosques gained a special reputation as one of the centers for the propagation of Islam. His Mazar is located in a village called Sugandha in Jhalokati, a few kilometers west of Barisal city. Inside this beautiful shrine, the words of the Holy Quran are inscribed on his grave.\n");
        printf("Location: Nabogram , Jhalokati Sadar, Jhalokati\n");
        printf("Distance: 14.8 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(j == 5)
    {
        printf("\nSaturia Zamindar House, also known as Mia Bari. It is located at Saturia village under Rajapur upazila of Jhalakathi (formerly Bakerganj) district, behind Bekutia ferry terminal. Built nearly 300 years ago, it is one of the oldest zamindar (landlord) houses of the district.\n");
        printf("Location: Rajapur Upazila, Jhalokati\n");
        printf("Distance: 44.1 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(j==6)
    {
        system("CLS");
        return hi4();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\npress any other number to end the program\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Barishal();
        }
        else if(n==2)
        {
          system("SLB");
          return Barisal1();
        }
    }
}

void Patuakhali()
{
    int k;
    system("cls");
    printf("\nWelcome to Kuakata\n");
    printf("\nWhich Tourist spot you want to see?\n1. Kuakata Sea Beach\n2. Fatrar Char\n3. Ilish park and resort\n4. Kuakata Buddhist Temple\n5. Char Vijay\n\n");
    printf("press '6' to go to the previous page\npress the number:");
    scanf("%d", &k);
    system("CLS");
    if(k == 1)
    {
        printf("\nKuakata beach is a beautiful beach in the southern part of Bangladesh. It is located in Patuakhali district of Barisal Division. It is known as the 'daughter of the sea'. It is believed that in the 18th century, the Arakans migrated to this region from Burma after being driven out by the Mughal rulers. They dug a lot of wells (Kua in Bengali) to meet the need of drinking water. Probably the name Kuakata has been derived from digging of Kua. Kuakata is a spacious sandy beach where both sunrise and sunset can be enjoyed. It was a part of the greater Sundarbans. This beach is 18 kilometers long and 3.5 kilometers wide. The beach is surrounded by green trees.\n");
        printf("Location: Kalapara, Patuakhali\n");
        printf("Distance: 118 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(k == 2)
    {
        printf("\nFatrar char is the nice tourist place near Kuakata beach. From Kuakata traveler may visit the Fatrar Chor. Fatrar Chor is the part of the Sundarban forest. Fatrar Char is also known as Fatrar Bon. As the Fatrar Char is the part of Sundarban so it is mangrove forest. Fatrar Bon is fairly big forest in Kuakata. There are many Timber trees available here. The tree of this forest in very hard and strong. And the wood of this trees are very long lasting and also costly. A wood business is started at that place and these woods are supplied in all over the country.\n");
        printf("Location: Kuakata, Patuakhali\n");
        printf("Distance: 111 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(k == 3)
    {
        printf("\nIlish park and resort is situated in Kolapara area of Kuakata in Patuakhali district. Ilish is the Bengali term of hilsha fish which is the national fish of Bangladesh. The reason for the name of this park Ilish because there is an Ilish statue which is 72 feet loong and this statue is a restaurant itself. This is the largest hilsha fish statue in world. Tourists and visitors can enjoy sea foods and drinks inside the Ilish shaped restaurant.\n");
        printf("Location: Kolapara, Kuakata, Patuakhali\n");
        printf("Distance: 112 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(k == 4)
    {
        printf("\nKuakata Buddhist Temple has the largest Buddhist statue in South Asia. If you visit this Buddhist Temple, you'll witness the statue of Gautam Buddha as well as the 200 years old temple near to it. You will find hundred years old ancient tradition and cultural heritage of traditional Rakhain tribal families.\n");
        printf("Location: Kuakata, Patuakhali\n");
        printf("Distance: 112 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(k == 5)
    {
        printf("\nA fascinating island called Char Vijay has risen in the deep sea 40 km away from Kuakata beach. The area of the island is about 5 thousand acres. Red crabs and thousands of guest birds roam the sky and the char is monotonous. The char has been visible since five years ago.\n");
        printf("Location: Latachapli, Kuakata coast, Patuakhali\n");
        printf("Distance: 117 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress any other numbe to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(k==6)
    {
        system("CLS");
        return hi4();
    }
     else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Barishal();
        }
        else if(n==2)
        {
          system("SLB");
          return Barisal1();
        }
    }
}

void Pirojpur()
{
    int n;
    system("cls");
    printf("\nWelcome to Pirojpur\n");
    printf("\nWhich Tourist spot you want to see?\n1. Bhandaria Shishu Park\n2. Parer Haat Zamindar Bari\n3. Rayerkati Zamindar bari\n4. Majher Char\n5. Baleswar DC Park\n\n");
    printf("press '6' to go to the privous page\npress the number:");
    scanf("%d", &n);
    system("CLS");
    if(n == 1)
    {
        printf("\nBhandaria Shishu Park is the only amusement park listed in Pirojpur. This is a best place to refresh mind. Specially for children and the young people who may make unforgettable moment of memory. A very attractive riverside place to visit with friends and family in the afternoon.\n");
        printf("Location: College Road, Bhandaria, Pirojpur\n");
        printf("Distance: 46.9 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(n == 2)
    {
        printf("\nParer Haat Zamindar Bari Eighteen kilometer away from Zianagar subdistrict, Pirojpur. It is the Zamindar Bari of Zamindar Surya Bahadur Bajpaye. It is heard that he had a familial relation with the ex prime minister of India Atal Bihari Bajpaye.\n");
        printf("Location: Zianagar, Pirojpur\n");
        printf("Distance: 59.6 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(n == 3)
    {
        printf("\nAround 300 years ago, a landlord family established Rayerkati Zamindar bari by their name. Parliament, ball-room, guest house and many Hindu temples were constructed near that landlord house. The number of places were amounting to almost 200. Among them, 40-50 were large. In 1658, Kaali (Hindu God) Mandir or temples were established here and The biggest Shiva Linga is also located here, weight is around 1000 kg.\n");
        printf("Location: Pirojpur - Sriramkathi Rd, Pirojpur Pourashava, Pirojpur\n");
        printf("Distance: 53.3 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(n == 4)
    {
        printf("\nMajher Char, an island in the river Baleshwar of the district. It is a beautiful place. It is adjacent to the Sundarbans, was created inside the river Baleshwar in around 1950. In 1965, the then Pakistan government distributed the land among the homeless people. Although this char is under serious threat of being washed away due to continuous erosion.\n");
        printf("Location: Betmore Razpara union, Mathbaria upazila, Pirojpur\n");
        printf("Distance: 91.9 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(n == 5)
    {
        printf("\nBaleswar DC Park is at Pirojpur Sadar Upazila and situated exactly beside the River Baleswar. It required visitors to buy a ticket (probably 10 Taka per person) before entering. There are several walking footpaths available inside. There are a lot of flowers (mostly rose) around the paths. There is a tower at the one side of the park. It is high enough to allow visitors to see 360 degree around. That tower help visitors to enjoy the beauty of the Baleswar river completely.\n");
        printf("Location: Pirojpur Sadar Upazila, Pirojpur\n");
        printf("Distance: 62.2 k.m. from Barishal\n");
        int p;
        printf("press 1 to go to the privous page\npress any other key to exit the program\npress the number:");
        scanf("%d",&p);
        if(p==1)
        {
            system("ClS");
            return hi4();
        }
    }
    else if(n==6)
    {
        system("CLS");
        return hi4();
    }
    else
    {
        printf("Sorry the input is not correct!");
        int n;
        printf("\npress 1 to go to the privous page\npress 2 to go to the first page\npress any other key to exit the program\nEnter the number:");
        scanf("%d",&n);
        if(n==1)
        {
          system("SLB");
          return Barishal();
        }
        else if(n==2)
        {
          system("SLB");
          return Barisal1();
        }
    }
}




void hi4(){
int d,m,a;
        printf("\nWhich district's tourist place you want to see?\n 1. Barishal\n 2. Barguna\n 3. Bhola\n 4. Jhalokati\n 5. Patuakhali\n 6. Pirojpur\n");
        printf("\n\nPress any other key to exit the program");
        printf("\nYou can press '7'  to go to the privius page");
        printf("\nEnter the number:");
        scanf("%d",&d);
        if(d == 1)
        {
           Barishal();

        }
        else if(d == 2)
        {
            Barguna();
        }
        else if(d == 3)
        {
            Bhola();
        }
        else if(d == 4)
        {
            Jhalokati();
        }
        else if(d == 5)
        {
            Patuakhali();
        }
        else if(d == 6)
        {
            Pirojpur();
        }
        else if(d==7)
        {
            system("CLS");
            return Barisal1();
        }
    }
void khulna1()
{
    system("CLS");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t ##KHULNA DIVISION##\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf(">>Khulna Division is one of the eight divisions of Bangladesh.\n>>It has an area of 22,285 km2(8,604 sq mi) and a population of 15,563,000 at the 2011 Census (preliminary returns).\n>>Its headquarters and largest city is Khulna city in Khulna District.\n>>The Khulna division borders the North 24 Parganas district and South 24 Parganas district of West Bengal to the west, the Rajshahi Division to the north,the Dhaka division and the Barisal division to the east,and has a coastline on the Bay of Bengal to the south.\n>>It is part of the Ganges River delta or Greater Bengal Delta. Other rivers include the Madhumati River, the Bhairab River and the Kopotokkho River.\n>>The region also includes several islands in the Bay of Bengal.\n");
    printf(">>The division was formed in 1960.\n>>Khulna Division consists of the following ten districts(zilas),subdivided into 59 sub-districts(upazilas).\n\n");
    printf("Which One Would You Like To See?\n");
    printf("1.Bank and ATM Booth\n2.Hotels   or\n3.Districts under Khulna.\n\n");
    printf("Press 4 To Get Back\n\n");
    int n;
    printf("Enter Any Number: ");
    scanf("%d",&n);
    system("cls");
    if(n==1)
    {
        banksl();
    }
    if(n==2)
    {
        hotels();
    }
    if(n==3)
    {
        districts();
    }
    if(n==4)
    {
        return division();
    }
}

void banksl()
{

    printf("\n\n\n##Banks or ATM Booth for Money Exchanging:\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    printf("1.Uttara Bank Limited ATM Money Exchange.\nAddress : Upper Jessore Rd, Khulna, Bangladesh.\n\n2.One Bank\nAddress:JK Tower, Holding No:79 Khan-A-Sabur Road, Ward 23, Khulna.\n\n3.Exim Bank\nAddress:A Hossain Plaza, 4 Sir Iqbal Road, Khulna.\n\n4.Bangladesh Krishi Bank Khulna Corporate Branch\nAddress:Khulna 16 Sir Iqbal Road Khulna 9000.\n\n5.BRAC Bank Limited\nAddress: BRAC Bank Khulna Branch, The Daily Probaho Bhaban, 3 KDA Ave, Khulna.\n\n6.Western Union Money Transfer Daulotpur Khulna\nAddress: Daulatpur.\n\n7.Bank Asia ATM\nAddress: 28, 147 Sir Iqbal Rd, Khulna 9100.\n\n8.Trust Bank Limited ATM\nAddress: Khulna Shipyard, Khulna, Shipyard Rd, Khulna 9201.\n\n9.United Commercial Bank Limited ATM\nAddress: 12, 13 Khan Jahan Ali Rd, Khulna 9100.\n\n10.City Bank Limited ATM\nAddress: 7 Sir Iqbal Road, Khulna Sadar, Khulna, Sir Iqbal Rd, Khulna.\n\n11.Trust Bank Limited ATM\nAddress: Sailors Colony Market, Khulna (opposite of Sk Abu Naser Hospital, Mujgunni R/A), Khulna, Refugee Colony Rd, Khulna.\n\n12.Prime Bank Limited\nAddress:7 Old Jessore Rd, Khulna.\n\n13.Southeast Bank Limited ATM\nAddress: Noor Jahan Plaza Holding #155,Sir Iqbal Road Ward #21,Khulna.\n\n14.Bangladesh Commerce Bank Limited\nAddress:727 Jessore Road Daulatpur Khulna - Jessore - Dhaka Hwy, Khulna 9202\n\n");
    int r;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&r);
    if(r==1)
    {
        system("CLS");
        khulna1();
    }
}

void hotels()
{

    printf("\n\n\n##Hotels In Khulna:\n^^^^^^^^^^^^^^^^^^^\n1.Hotel Tiger Garden\n2.Hotel Castle Salam\n3.Hotel Royal International\n4.Pushpo Bilash Rest House\n5.Hotel City Inn Ltd\n6.Hotel Western Inn International\n\n");
    int x;
    printf("Press '7' to go to the previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Which Hotel You Would Like To See?\n");
    printf("Enter any number: ");
    scanf("%d",&x);
    system("cls");
    if(x==1)
    {

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t   1.Hotel Tiger Garden\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t  ^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n>>Tiger Garden Int Hotel Khulna is located at 1 Kda Avenue, 1.1 miles from the center of Khulna.\n>>Phone:01769-056368\n>>Sixty Dome Mosque is the closest landmark to Tiger Garden Int Hotel Khulna.\n");
        printf(">>This Hotel is 35.3 miles from Jessore airport and 47.6 miles from Barisal airport.\n\n");
        printf("\n#Rooms:\n1.TIGER SUITE-10,000(BDT)-(Per Night)\n2.DELUXE SUITE-6,000(BDT)-(Per Night)\n3.EXECUTIVE SUITE FAMILY ROOM (3 Beds)-4,000(BDT)-(Per Night)\n4.EXECUTIVE SUITE TWIN-3500(BDT)-(Per Night)\n5.EXECUTIVE SUITE COUPLE-3200(BDT)-(Per Night)\n6.SUPERIOR DELUXE TWIN-3300(BDT)-(Per Night)\n7.SUPERIOR DELUXE SINGLE-3000(BDT)-(Per Night)\n");
        printf("\n#Facilities:1.Free High Speed WiFi\n2.Lift\n3.ATM Booth\n4.Bank\n5.Air /Bus/Train Ticketing\n6.Spacious Beautiful Lobby\n7.100 Vehicle Parking Facility\n");
        printf("\nReview:Rooms are good\nStaffs are friendly and helpful\nroom service was good\n");

        int r;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&r);
        if(r==1)
        {
            system("CLS");
            return hotels();
        }
    }
    if(x==2)
    {
        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t 2.Hotel Castle Salam\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n>.Hotel Castle Salam is located at G-8 K,da Avenue Khulna, 0.1 miles from the center of Khulna.\n>>Phone:041-720160\n>>Sixty Dome Mosque is the closest landmark to Hotel Castle Salam.\n");
        printf(">>This Hotel is 36.3 miles from Jessore airport and 47 miles from Barisal airport.\n\n");
        printf("\n#Rooms:\n1.Standard Single-2100(BDT)-(Per Night)\n2.Superior Single-3400(BDT)-(Per Night)\n3.Superior Double-4200(BDT)-(Per Night)\n4.Junior Suite Single-3200(BDT)-(Per Night)\n5.Executive Suite-5000(BDT)-(Per Night)\n6.King Suite-5800(BDT)-(Per Night)\n7.Presidential Suite-8500(BDT)-(Per Night)\n8.Presidential Apartment-34000(BDT)-(Per Night)\n");
        printf("\n#Facilities:\n1.LOBBY LOUNGE\n2.ROOF TOP INFINITY POOL\n3.FITNESS CENTRE\n4.WOMEN’S SALON\n5.MEN’S BARBER SHOP\n6.AIRPORT PICK-UP & DROP-OFF\n7.ON-SITE PARKING\n8.LAUNDRY SERVICES\n9.24/7 IN-ROOM DINING\n10.CHAUFFEURED RENTAL CAR SERVICES\n");
        printf("\n#Review:Rooms are good\nStaffs are friendly and helpful\nroom service was good\n");
        int r;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&r);
        if(r==1)
        {
            system("CLS");
            return hotels();
        }

    }
    if(x==3)
    {

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t 3.Hotel Royal International\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n>>Hotel Royal International is located at A-33, K.D.A. Avenue, 0.2 miles from the center of Khulna.\n>>Phone:01718-679900\n>>Sixty Dome Mosque is the closest landmark to Hotel Royal International.\n");
        printf(">>This Hotel is 36.3 miles from Jessore airport and 47.1 miles from Barisal airport.\n\n");
        printf("\n#Rooms:\n1.Standard Triple Room-(BDT)4,464-(Per Night)\n2.Standard Triple Room-BDT 4,989-(Per Night)\n3.Standard Triple Room-BDT 5,252-(Per Night)\n4.Executive Suite-BDT 6,145-(Per Night)\n5.Executive Suite-BDT 6,468-(Per Night)\n6.Executive Suite-BDT 7,197-(Per Night)\n7.Executive Suite-BDT 7,229-(Per Night)\n8.Executive Suite-BDT 7,610-(Per Night)\n9.Executive Suite-BDT 8,467-(Per Night)\n");
        printf("\n#Facilities:\n1.Parking\n2.Breakfast\n3.Wi-Fi\n4.Air conditioning\n");
        printf("\n#Review:Rooms are good\nStaffs are friendly and helpful\nroom service was good\n");

        int r;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&r);
        if(r==1)
        {
            system("CLS");
            return hotels();
        }
    }
    if(x==4)
    {

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t 4.Pushpo Bilash Rest House\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n>>Pushpo Bilash Rest House is located at Outer Bypass Road Nabik Tower, Sonadanga, 3.5 miles from the center of Khulna.>>Sixty Dome Mosque is the closest landmark to Pushpo Bilash Rest House.\n");
        printf(">>Pushpo Bilash Rest House is 32.9 miles from Jessore airport and 49.2 miles from Barisal airport.\n\n");
        printf("\n#Rooms:\n1.Deluxe Rooms-3300(BDT)-(per Night)\n2.Deluxe Double-3400(BDT)-(per Night)\n3.Twin Room with City View-3500(BDT)-(per Night)\n");
        printf("\n#Facilities:1.Free private parking is possible on site \n2.24-hour front desk\n3.Room service\n4.No Wi-Fi\n");
        printf("\n#Review:Rooms are good\nStaffs are friendly and helpful\nRoom service was good\n");

        int r;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&r);
        if(r==1)
        {
            system("CLS");
            return hotels();
        }
    }
    if(x==5)
    {

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t 5.Hotel City Inn Ltd\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n>>Hotel City Inn Ltd is located at B-1, Mojid Sarony, Kda C/A, 1.2 miles from the center of Khulna.\n>>Phone:04128-34067.\n>>Sixty Dome Mosque is the closest landmark to Hotel City Inn Ltd.\n");
        printf(">>Hotel City Inn Ltd is 35.2 miles from Jessore airport and 47.8 miles from Barisal airport.\n\n");
        printf("\n#Rooms:\n1.Deluxe Family-4,200.00(BDT)-(Per night)\n2.Deluxe Couple-3,381.0(BDT)-(per night)\n3.City Suite-3,000.00(BDT)-(Per night)\n4.Suite Single-3,500.00(BDT)-(Per night)\n5.Suite Couple-4,000.00(BDT)-(Per night)\n6.Executive Suite-6,038.00(BDT)-(Per Night)\n7.Standard Single-2,174.00(BDT)-(Per Night)\n8.Standard Couple -2,898.00(BDT)-(Per Night)\n9.Tiger Suite-24,150.00(BDT)-(Per Night)\n10.Suite Twin-5,072.00(BDT)-(Per Night)\n");
        printf("\n#Facilities:\n1.Buffet Breakfast,Newspaper,Fruit Basket (on Arrival)Fitness Center & Wi-Fi Facilities\n\n");
        printf("\n#Review:Rooms are good\nStaffs are friendly and helpful\nroom service was good\n");

        int r;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&r);
        if(r==1)
        {
            system("CLS");
            return hotels();
        }
    }
    if(x==6)
    {

        printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t 6.Hotel Divine Centre Ltd\n ");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("\n>>This Business class Hotel and leisure resort is conveniently located  atChowgacha - Churamonkathi road, Jessore 7410 Bangladesh.\n>>Phone:01854-172014\n>>This hotel is 25 km from the ancient district town Jessore and Jessore Airport,in the heart of green vally of Chowgacha Upazila.\n");
        printf("\n#Rooms:\n1.Deluxe Double Room-(BDT)8,338.00(Per night)\n2.Luxury Double Room-(BDT) 9,646.00(Per night)\n3.Super Deluxe Suite-(BDT)15,969.00(Per night)\n4.Superior Twin Room-(BDT)15,969.00(Per night)\n");
        printf("\n#Facilities:1.Free parkingj\n2.Free High Speed Internet\n3.Free breakfast\n4.Children Activities (Kid / Family Friendly)\n5.Airport transportation\n");
        printf("\n#Review:Rooms are good\nStaffs are friendly and helpful\nroom service was good\n");
        int r;
        printf("\t\t\t\t\tPress '1' To Return...>>> ");
        scanf("%d",&r);
        if(r==1)
        {
            system("CLS");
            return hotels();
        }
     if(x==7)
        system("CLS");
        khulna1();
    }
    if(x==7){
        system("CLS");
        khulna1();
    }
}


void districts()
{

    printf("\n\nKhulna division, in the southwest of the country, is made up of marshland, dense jungle and numerous rivers, which once formed natural barriers against invasion from the west or east. Khulna division proudly claims the Sundarbans (Beautiful Forest), an enormous network of waterways through waterlogged jungle that is haven for wild life. The monuments and mosques scattered around Bagerhat also make a worthwhile excursion.\n\n");
    printf("\n##Districts Under Khulna Division:\nThere are 10 districts under Khulna Division:\n\n1.Chuadanga\n2.Jessore\n3.Jhinaidah\n4.Khulna\n5.Kushtia\n6.Magura\n7.Meherpur\n8.Narail\n9.Shatkhira\n10.Bagerhat\n");
    printf("Press '11' to go to the previous page\n");
    printf("\nWhich Place You Would Like To See?\n");
    printf("Press any other key to exit the program\n");
    int n;
    printf("\nEnter any number: ");
    scanf("%d",&n);
    system("cls");
    if(n==1)
    {
        ho:

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 1.Chuadanga\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Chuadanga:\n\n1.The Freedom Fighter's Mass Grave.\n2.Gholdari Jami Mosque.\n3.Gholdari Neel Kuthi.\n4.Carew & Company Bangladesh Limited\n5.Three domed Chuadanga Bara Mosque\n\n");
        printf("press 6 to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int v;
        printf("\nEnter any number: ");
        scanf("%d",&v);
         system("cls");
        if(v==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.The Freedom Fighter's Mass Grave:\n\nThe Freedom Fighter's Mass Grave is located at Dhopakhali,Uthali,ibannagar,Chuadanga.It covers a large area and It is one of the top attraction in Chuadanga District.\n");
        }
        if(v==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Gholdari Jami Mosque:\n\nGholdari Jami Mosque is located at Gholdari, Alamdanga, Chuadanga.It is an Old Mosque built in 17th century.It is one of the top attraction in Chuadanga District.\n");
        }
        if(v==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Gholdari Neel Kuthi:\n\nGholdari Neel Kuthi is located at Gholdari, Alamdanga, Chuadanga.It is an old kutir bt it has a great tourist attraction..Many people came here to visit this palace.\n");
        }
        if(v==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Carew & Company Bangladesh Limited:\n\nCarew & Company Bangladesh Limited is located at Darsana - Mujibnagar Rd, Darshana, Chuadanga.It was established by private industrialists in 1938 and has a sugar mill, one Distillery and one Pharmaceutical unit under its ownership.Machinery & apparatus of the sugar mill were supplied by M/S Blairs Ltd. of Glasgow,U.K. It ongoing trial production in 1938-39.\n");
        }
        if(v==5){
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Three domed Chuadanga Bara Mosque:\n\nThree domed Chuadanga Bara Mosque is located at Chuadanga Sadar, Chuadanga.This is a very beautyful Mosque and buit in 17th century.It is one of the top attraction in Chuadanga District.\n");
        }
        if(v==6)
        {
            system("CLS");
            districts();
        }
    int r;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&r);
    if(r==1)
    {
        system("CLS");
        goto ho;
    }
    }


    else if(n==2)
    {
        ho2:

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 2.Jessore\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Jessore:\n\n1.Michael Madhusudan Dutt Memorial\n2.Godkhali Flower Garden\n3.Benapole Border Gate\n4.Imam Bara\n\n");
        printf("press '5' to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int m;
        printf("\nEnter any number: ");
        scanf("%d",&m);

        if(m==1)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Michael Madhusudan Dutt Memorial:\n\nThe birth place of the celebrated poet Micheal Modhusudan Dutta, by most accounts the first modern poet of Bangla Literature. He was born on 25 January, 1825 and died on 29 June, 1873. On the birth anniversary of the poet, a fair called MODHUMELA is celebrated every year. Bangladesh Parjatan Corporation has built a rest-house and other tourist facilities in the place.The distance from Jessore City is 44 km. Jessore District, Khulna Division, Bangladesh.\n");
        }
        if(m==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Godkhali Flower Garden:\n\nGodkhali Flower Garden in Jessore District in Khulna Division . 12 km far  from  Benapol Border.Now it's popular as Flower Capital of Bangladesh.There more then 5000 farmer farming few km so many type of local  and foreign flower.\n");
        }
        if(m==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Benapole Border Gate:\n\nBenapole is a boundary city in Bangladesh, the furthermost frequently used border when roaming in the middle of Kolkata in addition to Dhaka.Many people are travel to kolkata or other palce from Bangladesh by train.\n");
        }
        if(m==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Imam Bara:\n\nAn old small edifice named Haji Muhammad Mohsin Imambara is located in the Jessore town. For your information, Haji Muhammad Mohsin was one of the greatest magnanimous, philanthropist, and munificent person during his time. This old house was built by her step sister named Munnujan Khanom who was a wealthy woman (later Mohsin inherited her wealths). It was build during the year 1802. Later department of archaeology has declared this as a protected edifice.\n");
        }
        if(m==5)
        {
            system("CLS");
           districts();
        }
   int r;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&r);
    if(r==1)
    {
        system("CLS");
        goto ho2;
    }
    }
    else if(n==3)
    {
        ho3:

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 3.Jhinaidah\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under jhinaidah:\n\n1.Birshrestha Hamidur Rahman Museum\n2.Graveyard of Kamanna 27 Martyrs\n3.Jor Bangla Mosque\n4.The Biggest Banyan Tree\n\n");
         printf("press '5' to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int k;
        printf("\nEnter any number: ");
        scanf("%d",&k);

        if(k==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Birshrestha Hamidur Rahman Museum:\n\nBirshrestha Hamidur Rahman Museum is located at Khardo Khalishpur, Moheshpur , Jhenaidah. This is the only museum listed in Jhenaidah.Shaheed Muktijoddha and Bir Sreshtho Sepoy Mohammad Hamidur Rahman’s birthday today. He was born on February 2, 1953 in Khardo Khalishpur village in Moheshpur thana of the Jhenaidah District. Later, the village is renamed as Hamid Nagar. He is the youngest among the Bir Shresthos. During the Liberation War, he was only 18 years old.\n");
        }
        if(k==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Graveyard of Kamanna 27 Martyrs:\n\nGraveyard of Kamanna 27 Martyrs is located at Kamanna village, Shailkupa. 27 martyrs are buried here who sacrificed their lives at Kamanna village of Sailkupa upazila in Jhenidah on November 26 in 1971.People of this palace also celebrate the martyrs death anniversary every year. n");
        }
        if(k==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Jor Bangla Mosque:\n\nJor Bangla Mosque is located at Barobazar, Kaliganj, Jhenaidah.Jor Bangla Mosque is one of the prominent ancient mosque from Baro Bazar. Beside the mosque, a medium sized water tank is available which is known as Ondho Pukur, it means blind pond in English. The builder of the mosque dug this one to aid washing(Muslim ritual which is must before a prayer) for the people before the prayers.\n");
        }
        if(k==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.The Biggest Banyan Tree:\n\nThe Biggest Banyan Tree is located at Mollikpur, Kaliganj, Jhenaidah.The largest and oldest banyan tree in Asia is located at Bethuli Mouza in Maliyat Union, 10 km east of Kaliganj city, 25 km from Jhenaidah district headquarters. The banyan tree currently exists across 11 acres of land. It is especially known as the banyan tree of Sweetala Mallikpur. The tree is two hundred years old. The tree-lined tree along the road is a place of rest for the traveler.\n");

        }
        if(k==5)
        {
            districts();
        }
    int r;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&r);
    if(r==1)
    {
        system("CLS");
        goto ho8;
    }
    }
    else if(n==4)
    {
        ho4:

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 4.Khulna\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Khulna:\n1.Sundarbans\n2.Khanjahan Ali Bridge\n3.Hiron Point\n4.Khulna Museum\n5.Rabindra Complex\n\n");
        printf("press '6' to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int t;
        printf("\nEnter any number: ");
        scanf("%d",&t);

        if(t==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Sundarbans:\n\nSundarbans is the largest mangrove forest in the world. It extends across Khulna, Satkhira, Bagerhat, Patuakhali and Barguna districts of Bangladesh. The Sundarbans literally means in Bengali - beautiful forest. But the Sundarbans may have been named after the Sundori tree as well, which grows abundantly there.Here you can enjoy the monkey's screaming, chirping of the birds and peacock, folks of deer, howl, owl, bee and a roar of the famous Royal Bengal Tiger. There are also 330 species of tree, 270 species of birds, 14 species of reptiles, 42 species of wild animals and 32 species of shrimp and of 200 species of fishes found in Sundarbans. Because of the scenic beauty of Sundarbans, tourists are attracted to visit the forest. Indeed, the number of tourists in the Sundarbans has increased in recent years more than ever. The best time in a year for Sundarbans tour is from mid-October to April.\n");
        }
        if(t==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Khanjahan Ali Bridge:\n\nKhan Jahan Ali Bridge is a bridge built near Khulna city on the Rupsa River. It is also known as Rupsa Bridge. The distance of the bridge from Khulna city is 4.80 km. This bridge can be called the gateway of Khulna city because the bridge connects the southern districts, especially the Mongla seaport with Khulna city. Besides connecting Khulna district and Bagerhat district, this bridge is playing an important role in the country's economy.\n");
        }
        if(t==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Hiron Point:\n\nHiron Point is a protected wildlife sanctuary in the south of the Sundarbans. Sundarbans is the largest mangrove forest in the world. It is located on the west bank of Kunga River in Khulna district which is in the southern part of Bangladesh. Another name of Hiron point is Nilkamal. UNESCO has recognized Hiron point as a World Heritage site.\n");
        }
        if(t==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Khulna Museum:\n\nKhulna Divisional Museum is located in the center of Khulna city in Sonadanga Majid Sorani, on the roundabout at Shib Bari. When you enter the museum, you will find many pictures of the Liberation War of Bangladesh arranged beside the leading upstairs. In the first floor, you’ll find hundreds of years old Shiva Statue, old-time household materials like utensils, ornaments, tools etc, which were used by ancient landlords.\n");
        }
        if(t==5)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Rabindra Complex:\n\nRabindra Complex is located at Dakkhindihi, Phultala, Khulna.It is one of the houses of Kabiguru Rabindranath Tagore.This Rabindra Memorial Complex built in memory of the Great Poet Rabindranath Tagore. It was the  house of Rabindranath Tagores in-laws, which was converted into a memorial complex after renovation.Now the two storied building has been decorated and renovated after receiving a government fund and was turned into a museum and photo gallery. Some rare photos of Rabindranath Tagore is showcased here. Some important documents about Tagore’s publications are also displayed here. \n");
        }
        if(t==6)
        {
            districts();
        }
    int r;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&r);
    if(r==1)
    {
        system("CLS");
        goto ho4;
    }
    }


    else if(n==5)
    {
        ho5:

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 5.Kushtia\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Kushtia:\n1.Rabindranath Tagores Shilaidaha Kuthibari\n2.Tagore Lodge\n3.Lalon Academy and Shrine\n4.Hardinge Bridge\n5.Lalon Shah Bridge\n\n");
        printf("press '6' to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int y;
        printf("\nEnter any number: ");
        scanf("%d",&y);

        if(y==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Rabindranath Tagores Shilaidaha Kuthibari:\n\nRabindranath Tagore's Shilaidaha Kuthibari is full with the memory of the poet Rabindranath Tagore. It is situated in 15 kilometers north of Kushtia town under Kumarkhali upazila at Khorshedpur in Shilaidaha union.The whole building is now open for visitors as a museum. The portraits of Rabindranath Tagore, poet Rabindranath, zamindar Rabindranath, farmer’s friend Rabindranath as well as Rabindranath's picture of different ages are displayed on the ground floor and first floor of the museum. Besides, the museum is decorated with the artworks and his used furniture.This is one of the main attraction in kushtia district. \n");
        }
        if(y==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Tagore Lodge:\n\nTagore Lodge is located at Mohini Mills, Kushtia Sadar, Kushtia.Tagore Lodge, the ancestral house of Nobel laureate poet Rabindranath Tagore in Kushtia town has been converted into Tagore Museum. The museum also houses a library.At a cost of Tk 13 lakh, Kushtia municipality turned the lodge to a museum. The museum is drawing visitors now. Different cultural events are also held at the museum on various occasions.Tourists from across the country as well as from overseas are coming to see this structure that is of significant historic value.This is one of the main attraction in kushtia district.\n");
        }
        if(y==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Lalon Academy and Shrine:\n\nLalon Academy and Shrine is situated on the banks of the river Kaliganga in the village of Cheuria in Kumarkhali upazila of Kushtia district, which is known as the capital of literature and culture of this region. The Baul emperor Lalon Shah is buried in Chaueria village. After his death, the disciples built the shrine of Lalon which is locally called Lalon Akhra.The place where the tomb is situated is very nice. It has been developed now with a VIP Auditorium, an indoor and an outdoor Auditorium, a complex building of Lalon Academy, a car parking area, a market and a museum. There is also a beautifull garden inside of the area.This is one of the main attraction in kushtia district.\n");
        }
        if(y==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Hardinge Bridge:\n\nHardinge Bridge is located at Bheramara , Kushtia.Hardinge Bridge is a steel railway bridge over the river Padma located at Ishwardi, Pabna and Bheramara, Kushtia in Bangladesh. It is named after Lord Hardinge, who was the Viceroy of India from 1910 to 1916. The bridge is 1.8 kilometres long.The steel railway bridge is one of the many British structures in the country. From now, 138 years ago, the bridge plan was proposed by Eastern Bengal Railway in 1889 for better rail communication of the Indian subcontinent, especially Assam, according to official records.This is one of the main attraction in kushtia district.\n");
        }
        if(y==5)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Lalon Shah Bridge:\n\nLalon Shah Bridge is located at Bheramara , Kushtia.Lalon Shah Bridge, locally known as Pakshey Bridge is a road bridge in Bangladesh over the river Padma, situated between Ishwardi Upazila of Pabna on the east, and Bheramara Upazila of Kushtia on the west.The bridge is 1,800 metres (5,900 ft) long and is the second longest road bridge of the country, after Bangabandhu Bridge.It is situated parallel to and south (downstream) of Hardinge Bridge. This is one of the main attraction in kushtia district.\n");

        }
        if(y==6)
        {
            districts();
        }

   int r;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&r);
    if(r==1)
    {
        system("CLS");
        goto ho5;
    }
    }
    else if(n==6)
    {
        ho6:


        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 6.Magura\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Magura:\n1.Raza Sitaram Palace\n2.Ichakhada Neelkuthi\n3.Sreepur Jomidar Bari\n4.Arpara Eco Park\n5.Siddheshwari Moth\n\n");
        printf("press '6' to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int r;
        printf("\nEnter any number: ");
        scanf("%d",&r);

        if(r==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Raza Sitaram Palace:\n\nThis palace is 28 km from Magura Sadar, the house of Raja Sitaram Ray is located in Mohammadpur sub-district. Raja Sitaram Ray was an independent king.Raja Sitaram Ray (1658–1714) was a sovereign king. Raja Shitaram Palace has now almost been destroyed, but holds the history of many years in every corner of its building. He rebelled against the Mughal Empire and established a short-lived sovereign Hindu dominion in Bengal. In his early life he initiated Shaktism as he came from a Shakta family. He set up capital in Mohammadpur where the palace is located and established a Dashabhuja Temple there. He rebelled against the Mughal rule and established a short-lived Hindu territory in Bengal.\n");
        }
        if(r==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Ichakhada Neelkuthi:\n\nIchakhada Neelkuthi is located at Ichakhada, Magura Sadar, Magura.It is one of the main attraction in amgura district. Many people came here to visit this ancient place.\n");
        }
        if(r==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Sreepur Jomidar Bari:\n\nSreepur Jomidar Bari is located at Sreepur , Magura.The building is only 15 km away from the district town holding a smooth road communication. The entrance gate of the building is now in a vulnerable condition. Numbers of cracks have already developed on the building wall. Plaster is falling down from the ceiling.History tells during the regime of Baro Bhuiyan Pratapaditya was the king of Jessore region. In favour of Protapaditya Zaminder Sharada Ranzan Choudhuri performed the duty of zaminder in Sreepur area of the district. In this connection, Udayditya, son of Protapiditya, married Bibha Pal Choudhuri, daughter of Sharada Ranzan. Then Sharada Ranzan constructed the building with the financial help of Protapaditya.\n");
        }
        if(r==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Arpara Eco Park:\n\nArpara Eco Park is located at Arpara, Shalikha, Magura. This is the only nature attraction listed in Magura.It has a great secneric value.People came here and enjoy their leisure time.\n");
        }
        if(r==5)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Siddheshwari Moth:\n\nSiddheshwari Moth is located at Athara Khada, Magura Sadar, Magura.It is an old place but has a great secneric value.May people came here to see this place.This is one of yhe great attractions of magura districts.\n");

        }
        if(r==6)
        {
            system("CLS");
            districts();
        }
   int q;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&q);
    if(q==1)
    {
        system("CLS");
        goto ho6;
    }

    }
    else if(n==7)
    {
        ho7:

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 7.Meherpur\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Meherpur:\n1.Mujibnagar Memorial Monument and Complex\n2.Mujibnagar Smritishoudh\n3.Meherpur Shahid Smritishoudh\n4.Meherpur Poura Graveyard\n5.Aamjhupi Neel Kuthi\n\n");
        printf("press '6' to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int e;
        printf("\nEnter any number: ");
        scanf("%d",&e);

        if(e==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Mujibnagar Memorial Monument and Complex:\nMujibnagar Memorial Monument and Complex is located at Mujibnagar, Meherpur.A memorial complex covering 20.10 acres (8.13 ha) has been built at the site where the ministers of that first government took their oaths. Throughout the war with the Pakistan Army, the Mujibnagar government would serve as the nominal head of the pro-independence guerrilla militias, mainly the Mukti Bahini.The historic Mujibnagar is a very important part of our glorious history of independence that we achieved in 1971. This place is widely known to the researchers, academicians and journalists at home and abroad.Mujibnagar now is a town in the Meherpur district of Bangladesh. Meherpur was earlier a part of Kushtia dsitrict. The place Boidyanathtola was later renamed Mujibnagar by the proclamation of independence, in honour of the Father of the Nation Bangabandhu Sheikh Mujibur Rahman who declared Bangladesh independence through his historic 7th March Speech.\n");
        }
        if(e==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Mujibnagar Smritishoudh:\nMujibnagar Smritishoudh is located at Mujibnagar, Meherpur.Mujibnagar Smriti Saudha (Memorial) At the initial stage of the War of Liberation, the government in exile of the People's Republic of Bangladesh took oath at village Baidyanathtala in Meherpur district on 17 April 1971. Baidyanatala was renamed as mujibnagar after the name of Bangabandhu Sheikh Mujibur Rahman. Later a memorial monument was constructed to commemorate the place of oath.Immediately after the War of Liberation the Government of Bangladesh took initiative to make Mujibnagar memorable. On 31 August 1973 the government gave an instruction to construct a memorial at Mujibnagar. During the observance of Mujibnagar Day on 17 April 1974, Syed Nazrul Islam, the acting President of the Bangladesh Government in exile during the liberation war, formally inaugurated the project.\n");
        }
        if(e==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Meherpur Shahid Smritishoudh:\nMeherpur Shahid Smritishoudh is located in Meherpur.\n");
        }
        if(e==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Meherpur Poura Graveyard:\nMeherpur Poura Graveyard is located at Meherpur Sadar, Meherpur. \n");
        }
        if(e==5)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Aamjhupi Neel Kuthi:\nAamjhupi Neel Kuthi is located at Aamjhupi, Meherpur Sadar, Meherpur.\n");

        }
        if(e==6)
        {
            system("CLS");
            districts();
        }


   int w;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&w);
    if(w==1)
    {
        system("CLS");
        goto ho7;
    }
    }
    else if(n==8)
    {
        ho8:


        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 8.Narailn\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Narail:\n1.Shaheed Bir Nur Mohammad Sheikh Complex\n2.Kalia Palace\n3.Narail Palace\n4.S M Sultan Memorial Gallery\n5.Badha Ghat\n\n");
        printf("press '6' to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int p;
        printf("\nEnter any number: ");
        scanf("%d",&p);

        if(p==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Shaheed Bir Nur Mohammad Sheikh Complex:\n\nShaheed Bir Nur Mohammad Sheikh Complex is located at Nur Mohammad Nagar, Narail Sadar, Narail.Sheikh, Birsrestha Nur Mohammad (1936-1971) Lance Nayek of East Pakistan Rifles (EPR) and a martyr in the war of liberation. Nur Mohammad Sheikh was born on 26 February 1936 at village Mahiskhali in Narail district. An orphan in childhood he had to sell his paternal landed property for his livelihood.This complex was built to show respct to him. \n");
        }
        if(p==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Kalia Palace:\n\nKalia Palace is located at Naragati, Kalia, Narail.\n");
        }
        if(p==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Narail Palace:\n\nNarail Palace is located at Murapara, Narail Sadar, Narail. \n");
        }
        if(p==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.S M Sultan Memorial Gallery:\n\nS M Sultan Memorial Gallery is located in Narail. This is the only museum listed in Narail.The art gallery in Narail at S. M. Sultan Memorial contains collection of his paintings. A significant portion of first and second floor is occupied by his paintings. This artist was concerned about preserving his works. S. M. Sultan had a boat by which he used to have a pleasure trip over the river Chitra. This boat was placed beside his house, also beside the river itself. A boat race locally known as Nouka Baich used to hold every year at River Chitra. It is probably during the birth day of the artist. It will be best if you can visit the place during that time.\n");
        }
        if(p==5)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Badha Ghat:\n\nBadha Ghat is located in Narail.Badha Ghat is located next to the river Chitra. It was built by the Zamindar of Narail. His residence was close from Badha Ghat. Though a Zamindar built it, it was called Rajbari Ghat also by the local people. Zamindar used to pass his afternoon in this Ghat pretty often. The Victoria College of Narail City is also close to this ghat. \n");

        }
        if(p==6)
        {
            system("CLS");
            districts();
        }

    int h;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&h);
    if(h==1)
    {
        system("CLS");
        goto ho8;
    }
    }
    else if(n==9)
    {
        ho9:


        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 8.Shatkhira\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Shatkhira:\n1.Ruposhi Debhata Mangrove Tourist Center\n2.Parabajpur Mosque\n3.Mozaffer Garden Park\n4.Jahajghata Naval Fort\n5.Ishwaripur Hammam Khana\n\n");
        printf("press '6' to go back to previous page\n");
        printf("Press any key to exit the program\n");
        int o;
        printf("\nEnter any number: ");
        scanf("%d",&o);

        if(o==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Ruposhi Debhata Mangrove Tourist Center:\n\nRuposhi Debhata Mangrove Tourist Center is located at Debhata, Satkhira.The magnificent forest at the frontier and banks of Satkhira's Ichhamati river are gradually increasing in popularity as well as the beauty is growing.By going there one can enjoy the beauty of the nature. As it is based on the idea of Sunderbans , day by day its demand is increasing.\n");
        }
        if(o==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Parabajpur Mosque:\n\nParabajpur Mosque is located at Mukundapur, Satkhira Sadar, Satkhira.It is one of the old heritage of Shatkhira district.\n");
        }
        if(o==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Mozaffer Garden Park:\n\nMozaffer Garden Park is located in Satkhira. This is the only amusement park listed in Satkhira.The park is situated on 60 acres of fine property. It is in the heart of Satkhira, only two hours away from the Sundarbans with all the transport facilities, but they are enough away from the crowd of the busy town. The area is fairly open with numerous trees to provide our customers with both sun and shade and the most desired greeneries and fresh air.There is a resort and also a zoo inside the park.\n");
        }
        if(o==4)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Jahajghata Naval Fort:\n\nJahajghata Naval Fort is located at Jahajghata , Shyamnagar, Satkhira.Jahajghata Naval fort is an ancient building at Moutola, Satkhira which was made in 1567. But the building as very fine decoration it still looks so young that you can't say that it was made in 1567. The decoration of the fine art of the wall will take you to your dream world. The extraordinary beauty will make you feel more than just being surprised. The fine natural beauty has also enriched the beauty of the total things. The big trees beside it say the age of the nature.\n");
        }
        if(o==5)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Ishwaripur Hammam Khana:\n\nIshwaripur Hammam Khana is located at Satkhira - Kalaroa Road, Satkhira.This  Hammamkhana built in the late sixteenth century by Maharaja Pratapaditya.It has a great attraction value and many people visit here.\n");

        }
        if(o==6)
        {
            system("CLS");
            districts();
        }

   int a;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&a);
    if(a==1)
    {
        system("CLS");
        goto ho9;
    }
    }
    else if(n==10)
    {
        ho10:

        printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Bagerhat\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~\n\n");
        printf("\n#Top Tourist Spots Under Bagerhat:\n1.Shaat Gombuj Mosque\n2.Khan Jahan Dighi\n3.Khan Jahan Ali's Tomb\n4.Chandra Mahal Eco Park\n5.Bagerhat Museum\n\n");
        int b;
        printf("\nEnter any number: ");
        scanf("%d",&b);
        if(b==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tn1.Shaat Gombuj Mosque:\n\nShaat Gombuj Mosque is located at Bagerhat-Khulna Road, Bagerhat - 9300.This Mosque is near the northwestern outskirts of Dhaka in the Mohammadpur area.It is a fine example of the provincial Mughal style of architecture introduced in Bangladesh in the 17th century. The mosque's most notable features are its seven bulbous domes crowning the roof and covering the main prayer hall. Probably erected by Governor Shaista Khan, the monument stands in a romantic setting on a buttressed 15-foot-high bank overlooking an extensive flood plain.\n");
        }
        if(b==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Khan Jahan Dighi:\n\nKhan Jahan Dighi is located on the southern side of Hazrat Khan Jahan Ali (Rh)s Shrine occupying about 200 bighas of land. Hazrat Khan Jahan Ali (Rh) released few crocodiles in this dighi. Two large-sized crocodiles named Kala Pahar and Dhala Pahar were very famous crocodiles in Khan Jahan dighi. But they have died later. Some sweet water crocodiles were also released in the dighi. People coming to visit the shrine feed the crocodiles with ducks, hens, sheep and goats. Dighi's main ramp is spacious and beautiful.\n");
        }
        if(b==3)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Khan Jahan Ali's Tomb:\n\nKhan Jahan Ali's Tomb is located in Bagerhat. Besides this landmark, there are eight more landmarks listed in Bagerhat.Tomb of Khan Jahan stands on a high artificial mound, as mainly known as the Dargah complex of Khan Jahan. The complex consists of the square tomb building of Khan Jahan himself; a case of Muhammad Tahir, his diwan; a single-domed mosque and the so-called kitchen. It measures as 13.7 meters height and 9.1 meters width. The four exterior angles of the building are maintained with solid circular towers. There are four walls which have a thickness of 2.4 meter, have stone casings up to the height of about 0.9 meter for preventing the building from ground moisture. The ground moisture is common in the humid climate of south Bengal. It is located on the northern bank of the so-called Thakur dighi and is surrounded by an outer wall of 67.1 meter from east to west and 64.7 meter from north to south.\n");
        }
        if(b==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Chandra Mahal Eco Park:\n\nChandra Mahal Eco Park is located at Chandra-Mahal Road, Bagerhat. This is the only amusement park listed in Bagerhat.One of the busy tourism spot is chandromohol eco .it's got a great place.in the middle of mongla-bagerhat-khulna highway.everyday people gather here for visit this place.The Mahal was built after the name of Chandra wife of a landlord. \n");
        }
        if(b==5)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Bagerhat Museum:\n\nBagerhat Museum is located on the southeastern corner of Shat Gambuj Masjid (60 dome mosque) in Bagerhat. It was built in 1995 to preserve the memory of Khan Jahan Ali and the Muslim culture of the area.This is the only museum listed in Bagerhat.It is a one storied building. It has two large galleries to display antiques. Antiques found in Bagerhat are categorized into two parts. One of them are the earthen materials and another is wooden and slate (rock/stone). There is a photo gallery too to display the rare photos of artifacts and ruined architectural structures.\n");

        }

   int s;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&s);
    if(s==1)
    {
        system("CLS");
        goto ho10;
    }

    }

   else if (n==11)
   {
        khulna1();
   }

}
void Mymensingh()
{
    system("CLS");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t ### WELLCOME TO MYMENSINGH DIVISION ###\n");
    printf("\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("\n\n## Some Information About Mymensingh District:\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf(">> Mymensingh division is one of the eight administrative divisions of Bangladesh.\n\n>> It has an area of 10,485 square kilometres(4,048 sq mi)and a population of 11370000 of the 2011 census.\n\n>> It was created in 2015 from districts previously comprising the northern part of Dhaka Division.\n\n>> Its headquarters are in Mymensingh city in Mymensingh District.\n\n>> The Greater Mymensingh region was created as a Mymensingh district by the British Indian government in 1787.\nLater it was reorganized in  two phases into six districts: \nMymensingh,Kishoreganj,Netrakona,Jamalpur,Tangail and Sherpur.\nBut now in present time Kishoreganj and Tangail are not part of Mymensingh.\nSo Mymensingh is comprised of four districts.\n");

    printf("\n\n\n\nNow Which One You Would Like To See?\n");
    printf("\n 1.Banks,ATM Booths or Money Exchanging Points\n 2.Hotels   or\n 3.Districts Under Mymensingh Division.\n\n");
    printf("Press 4 To Go Back\n\n");
    int n;
    printf("\n\nEnter Any Number: ");
    scanf("%d",&n);
    system("cls");
    if(n==1)
    {
        banksm();
    }
    if(n==2)
    {
        hotelsm();
    }
    if(n==3)
    {
        districtsm();
    }
    if(n==4)
    {
        return division();
    }
}



void banksm()
{
    printf("\n\n\n## Banks or Atm Booth for Money Exchanging:\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    printf("1.National Bank Limited,Mymensingh Branch\nAddress: 29/1 Nishikanta Gosh Road, Durgabari, Mymensingh.\n\n2.Bangladesh Krishi Bank Haluaghat Branch\nAddress: Haluaghat - Phulpur Rd, Haluaghat 2260,Mymensingh.\n\n3.Mamun Money Changer\nAddress: Ground Floor, 27 Ram Babu Rd, Mymensingh 2200, Bangladesh\n\n4.City Bank ATM Booths\nAddress: House No.20, Choto Bazar, Mymensingh\n\n5.Dutch Bangla Bank ATM\nAddress: Court Road,Mymensingh\n\n6.Dutch Bangla Bank Limited Atm\nAddress: Madan-Kaliajuri Road,Mymensingh\n\n7.Islami Bank ATM,\nAddress: Tarakandi,Sarishabari Road,Mymensingh\n\n8.AB Bank Limited\nAddess: Al-Madina Shopping Complex, Seedstore Bazar, Bhaluka, Dhaka-Mymensingh Hwy,2240\n\n9.Al-arafa islami bank\nAddess: Choto Bazar Road 2200,Mymensingh\n\n10.First Security Islami Bank Limited\nAddess: Jamirdia Masterbari, Bhaluka, Dhaka-Mymensingh Hwy, 2240\n\n11.Janata Bank Mohanganj\nAddess: Mymensingh-Sunamganj Road\n\n12.National Bank Limited\nAddess: Dhaka-Mymensingh Hwy, Trishal 2220\n\n\n\n\n");
    printf("Press 13 to go back to previous page\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number:");
    int n;
    scanf("%d",&n);
    if(n==13)
    {
        system("CLS");
        Mymensingh();
    }
}
void hotelsm()
{
    system("CLS");
    int in;
    printf("\n\n\nPress '1' To Enter\n\n");
    printf("Press '2' To Get Back\n\n");
    printf("Press any other key to exit the program\n");
    printf(">>> ");
    scanf("%d",&in);
    if(in==1)
    {
        system("CLS");
        ji:
        printf("\n\n\n## Hotels In Mymensingh:\n^^^^^^^^^^^^^^^^^^^^^^^^^\n");
        printf("1.Eastern Heritage Resort\n\n2.Hotel X-Dhaka\n\n3.Hotel Silver Castle\n\n4.Dream Square Resort Gazipur\n\n5.Hotel Mustafiz International\n\n6.Hotel Amir International\n\n");
        printf("\n\nWhich One You Would Like To See?\n");
        printf("\n\nPress '7' to go to the previous page\n");
        printf("Press any other key to exit the program\n");
        printf("Enter Number: ");
        int x;
        scanf("%d",&x);
        system("CLS");
        if(x==1)
        {
             system("CLS");

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 1.Eastern Heritage Resort\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>This hotel is located at the opposite of BGB headquarter,Khagdohor,Mymensingh,Bangladesh.\n>>Phone:01977-128515\n>>This resort is 116 km from Hazrat Shahjalal International Airport.\n\n");
            printf("#Rooms:\n1.Double Room(Grammo Bilash)-BDT 4,000(Per Night)\n2.Double Room(Brishty Bilash)-BDT 4,300(Per Night)\n3.Double Room(Surjo Bilash)-BDT 6,000(Per Night)\n4.Cottage-BDT 8,000(Per Night)\n");
            printf("\n#Facilities:\n1. Free Wi-Fi\n2.Free breakfast\n3.Accessible\n4.Air-conditioned\n5.Free parking\\n6.Pool\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nRoom service was good\n");
            int r;
            printf("\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            system("cls");
            if(r==1)
            {
                system("CLS");
                goto ji;
            }
        }
        if(x==2)
        {
             system("CLS");

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 2.Hotel X\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^\n");
            printf("\n>>Hotel X is located at Dhaka - Mymensingh Highway, 1741 Rajendrapur Chowrasta Bus Stops, 1741 Bisaiya Kuribāri, Bangladesh.\n>>Phone: 01844-019236\n>>Hazrat Shahjalal International Airport,Dhaka is 29 km from this hotel.\n\n");
            printf("\n#Rooms:\n1.Standard Single Room-BDT 3500(Per Night)\n2.Deluxe Double Room-BDT 4000(Per Night)\n3.Deluxe Twin Room-BDT 5000(Per Night)\n4.Suite-BDT 6000(Per Night)\n\n");
            printf("\n#Facilities:\n1.Hi-Speed Wi-Fi.\n2.Access to our Screening Room Film Series (based upon availability)\n3.Access to 10XTO's Primary Fitness Centre Gym.\n4.In-Room Bottled Water.\n5.Library and Business Centre Access.\n6.Year-Round, Heated, Rooftop Swimming Pool.\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");
            int r;
            printf("\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            system("cls");
            if(r==1)
            {
                system("CLS");
                goto ji;
            }
        }
        if(x==3)
        {
             system("CLS");

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 3.Hotel Silver Castle\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>This Hotel is located at Taltola,Mymensingh - Tangail Road,Mymensingh,Bangladesh.\n>>Phone: 01741-188007\n>>The nearest airport is Dehradun Airport, 57 miles from Hotel Silver Castle.\n");
            printf("\n#Rooms:\n1.Double Room-BDT 6,300-(Per night)\n2.Deluxe Double Room-BDT 6,900-(Per night)\n3.Family Suite-BDT 16,400-(Per night)\n4.Twin Room-BDT 6,800-(Per night)\n5.Deluxe Twin Room-BDT 14000-(Per night)\n\n");
            printf("\n#Facilities:\n1.Air-conditioned\n2.Laundry service\n3.Kid-friendly\n4.Hot tub\n5.Spa\n6.Bar.\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");
            int r;
            printf("\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            system("cls");
            if(r==1)
            {
                system("CLS");
                goto ji;
            }
        }
        if(x==4)
        {
             system("CLS");

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 4.Dream Square Resort Gazipur\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>This resort is located at Nayonpur Bazar, Chalkpara, Medical more, Mawna Union.\n>>Phone:01407-004607\n>>This resort is about 51 km far from hazrat Shahjalal International Airport.\n\n");
            printf("\n#Rooms:\n1.STANDARD ROOM-BDT 5500(per night)\n2.DELUXE ROOM MUD HOUSE-BDT 5000(per night)\n3.DELUXE TWIN BED-BDT 7000(per night)\n4.DREAM DELUXE-BDT 7000(per night)\n5.DELUXE ROOM TRIPLE BED-BDT 8500(per night)\n6.DREAM EXECUTIVE-BDT 10000(per night)\n7.SUPERIOR ROOM-BDT 35000(per night)\n8.PREMIUM ROOM-BDT 8000(per night)\n9.EXECUTIVE ROOM-BDT 10000(per night)\n10.JUNIOR SUITE ROOM-BDT 13000(per night)\n11.EXECUTIVE SUITE-BDT 45000(per night)\n\n");
            printf("\n#Facilities:\n1.24th hours Generator Backup within 5 second\n2.CCTV full premises\n3.Free Wi-Fi zone\n4.Swimming pool\n5.Boating\n6.Large Green Play ground\n7.Air-condition Room\n8.Laundry\n9.Green Eco-Park\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");
            int r;
            printf("\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            system("cls");
            if(r==1)
            {
                system("CLS");
                goto ji;
            }
        }
        if(x==5)
        {
             system("CLS");

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 5.Hotel Mustafiz International\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>This Hotel is located at 6/3(B), Gangadas Guha Road(In between Town Hall and Fire Service),Mymensingh-2200,Bangladesh.\n>>Phone: 01715-133507\n>>This hotel is about 127 km far from hazrat Shahjalal International Airport.\n\n");
            printf("\n#Rooms:\n1.Single Room(AC)-BDT 5,000-(Per Night)\n2.Deluxe Room(AC)-BDT 6,400-(Per Night)\n3.Single Room(Non AC)-BDT 3,300-(Per Night)\n4.Economy Double Room-BDT 4,300-(Per Night)\n5.Royal Suite-BDT 8,500-(Per Night)\n");
            printf("\n#Facilities:\n1.Air-conditioned\n2.Laundry service\n3.Kid-friendly\n4.Hot tub\n5.Spa\n6.Bar.\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");
            int r;
            printf("\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            system("cls");
            if(r==1)
            {
                system("CLS");
                goto ji;
            }
        }
        if(x==6)
        {
             system("CLS");

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 6.Hotel Amir International\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>This Hotel is located at 46/A, Palika Shopping Centre, Station Road, Mymensingh 2200,Bangladesh.\n>>Phone: 01711-167948\n>>This hotel is about 107 km far from hazrat Shahjalal International Airport.\n\n");
            printf("\n#Rooms:\n1.Standard Single Room(AC)-BDT 6,300-(Per Night)\n2.Deluxe Twin Room(AC)-BDT 7,000-(Per Night)\n3.Royal Suite-BDT 8,500-(Per Night)\n");
            printf("\n#Facilities:\n1.Hot bath\n2.Children Activities (Kid / Family Friendly)\n3.4.Air conditioning\n5.Minibar\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");
            int r;
            printf("\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            system("cls");
            if(r==1)
            {
                system("CLS");
                goto ji;
            }
        }
        if(x==7)
        {
            hotelsm();
        }
    }
    else if(in==2)
    {
        system("CLS");
        Mymensingh();
    }
}


void districtsm()
{
    system("CLS");
    int g;
    printf("\n\n\nPress '1' To Enter\n\n");
    printf("Press '2' To Get Back\n\n");
    printf("Press any other key to exit the program\n");
    printf("Press the number");
    printf(">>> ");
    scanf("%d",&g);
    if(g==1)
    {
        system("CLS");
        printf("\n\n\nMymensingh Division is popular for tourist destinations.The major types of tourist attractions listed here are museums and landmarks.Then there is also nature attractions listed in Mymensingh Division.");
    printf("\nThere are total 4 districts under Mymensingh Division.\n\n\n");
        ni:
        system("CLS");
        printf("\n\n\nWhich District You Would Like To See?\n");
        printf("1.Mymensingh District\n\n2.Netrokona District\n\n3.Jamalpur District   &\n\n4.Sherpur District\n\n");
        printf("\n\nPress '5' to go to the previous page\n");
        printf("Press any other key to exit the program\n");
        int v;
        printf("Enter Any Number:");
        scanf("%d",&v);
        system("CLS");
        if(v==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 1.Mymensingh District\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~\n\n");

            printf("\n#Top Tourist Spots Under Mymensingh District:\n1.Shilpacharya Zainul Abedin Sangrahashala\n2.Mymensingh Museum\n3.Alexander Castle\n4.Soshi Lodge\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Shilpacharya Zainul Abedin Sangrahashala:\n\nThis is an art museum in Mymensingh, Bangladesh. Established in 1975, it contains the collections of the artist Shilpacharya Zainul Abedin (1914–1976). The art gallery was established in Mymensingh as this is where the artist spent his early days. Abedin, a pioneer of the country's modern art movement, created works of art on subject matters such as the Bengal famine of 1943 and the peoples' independence.The museum is located in the area of Shaheeb Quarter Park on the bank of the Old Bramaputra River.\n\n");



            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Mymensingh Museum:\n\nThe museum, which began as an important regional institution for preservation of locally collected historical evidence, lacks proper preservation. Its objective is to preserve the rare and unique relics of local architecture, sculpture, metal works, utensils, handwritten scripts on paper and leaf, and commercial products. Collected from the palaces of Mymensingh District zamindars\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Alexander Castle:\n\nAlexander Castle is one of the most amazing and renowned structure in Mymensingh District. It was built by Maharaja Suryo Kanta Acharya Chowdhury in 1879 in the memory of the 1st zilla magistrate of Mymensingh Mr. N .S Alexander at the time of Jubili festival. It covers an area of 27.155 acres.It is a nice small archaic building having two Greek statue at both sides of the front gate. Though the arms of those statues are currently broken, but still those looks great. The whole building is placed over a high plinth, probably to avoid the flood from the nearness river.\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Soshi Lodge:\n\nnShoshi Lodge is located at the center of Mymensingh city which is also known as the Residential Palace of  Moharaja Shoshi Kanto Acharya. This palace is very close to the river Brahmaputra which is being used as Women Teachers Training College from the year 1952.Later Zamindar Shoshi Kanto Acharya re-built this building with many additional features in the year 1905 and did more renovation work in 1911. This unique classical architecture and its surrounding will certainly attract a traveler to explore this place recurrently.\n\n");


            int r;
            printf("\n\n\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                goto ni;
            }
        }
        else if(v==2)
        {
            ni1:

            system("CLS");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 2.Netrokona District\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Netrokona District:\n1.Bijoypur China Matir Pahar\n2.China Matir Lake\n3.Hajong Mata Shohid Rasimoni Srityshoudh\n4.Roailbari Fort\n5.Birishiri Cultural Academy\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Bijoypur China Matir Pahar:\n\nBijoypur China Matir Pahar is located in Durgapur, Netrakona.Hill of China Clay located at Bijoypur, Durgapur in Netrokona District. Netrakona is situated in the northern part of Bangladesh, near the Meghalayan border. Along with enjoying the blue lake of birisiri, you can explore the china clay hill around the lake area.There are several hillocks around the lake. You can climb few of those to get the feelings of hiking.After reaching in Durgapur, you can hire a rickshaw to visit the hill & lake. Fix the rickshaw puller for 300 taka, and asked him to come at 7:00 at morning. This may be the only vehicle to reach at the China Clay Lake and Hill.\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.China Matir Lake:\n\nChina Matir Lake is located at Durgapur - Birishiri - Shamganj Rd, Durgapur, Netrakona.This is a small lake, you can say this is a pond as well. Normally the water from a pond used to be muddy, or greenish during winter. But this one is having blue color just because the china clay. This blue pond is generated after digging out china clay. According to the local people, the depth of the small pond is somewhere around 60-80 feet.China clay comprises of lot of chemical compounds. The taste of the water is kind of bitter. May be the lake water has plenty of copper sulphet which can make the water color blue.\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Hajong Mata Shohid Rasimoni Srityshoudh:\n\nHajong Mata Shohid Rasimoni Srityshoudh is located at Birisiri Durgapur Rd, Durgapur, Netrakona.This monument is built to the honour of Hajongmata Rashimani devi.Historical landmark for hazang tribe. Rash moni was considered as their mother. And was brutally kills in January 31, 1946 during procession (Tonk Andolon) between Hazang people and susong king.The Shushong King/Jomidar was the owner of all lands and local people were only allowed to cultivate there. They were forced to pay a portion from their crops, no matter how good or bad the harvest is. This cruel rule just crippled the farmers economically. So they have decided to stand against the ruler under the banner of Hajong Roshimoni\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Roailbari Fort:\n\nRoailbari Fort is located in Kendua, Netrakona.Roailbari Fort at Kendua in Netrokona has been disclosing new information about architectural up gradation. The archeological department has began re-digging of the site. Roailbari Fort, an archaeologically important site, is situated at Roailbari union of Kendua upazila in Netrokona district of Bangladesh.In 1987 Roailbari was declared as archeological site situated beside Betai River 13 kilometer far from Kendua town. The construction date and time is not yet found. Pods made of mud, Terab of burnt soil, red colored brick etc are found from this fort as well.\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Birishiri Cultural Academy:\n\nBirishiri Cultural Academy is located in Durgapur, Netrakona.Birishiri Tribal Cultural Academy, Durgapur. A tribal cultural academy is situated at the place. It is the only cultural academy in the North-East region of Bangladesh. The tribal groups are mainly hajong, Garo, Achik, Mandi etc. Different cultural festival take place here.It is also one of the very charming place.Many people come here and enjoy.\n\n");

            int r;
            printf("\n\n\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                goto ni;
            }

        }
        else if (v==3)
        {
            ni2:

            system("CLS");
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 3.Jamalpur District\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Jamalpur District:\n1.Luis Village\n2.Jamuna Fertilizer Company Ltd\n3.Doyamoyee Mandir\n4.Gandhi Ashram and Fredom Struggle Museum\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Luis Village:\n\nLuis Village is located in Jamalpur Sadar, Jamalpur.The park incorporates a type of amusement facilities for youngsters from all age teams. Bumper Cars, The Virgin C spherical, Swing Charger, Mini Train, Family Train, marvel Chill, Z.Coaster, occasional Kapasi Satellite, fourteen additional Rider Arrangements for fun Joe Louis Village Park. within the summer of full inexperienced, this park offers aliment outlets with improved restaurants, rest homes, convention centers. there's a pool and water rider arrangement. completely different programs of any family or business ar simply ascertained here. additionally here is that the hand search of the renowned art of Jamalpur and obtaining here. The park is open each morning from 10am to 8pm. The entry value here is barely one hundred Bangladeshi monetary unit. \n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Jamuna Fertilizer Company Ltd:\n\nJamuna Fertilizer Company Ltd is located at Tarakandi Sarishabari Rd, Tarakandi, Sarishabari , Jamalpur.is a Bangladesh government owned fertilizer company based in Jamalpur District. It was under the Bangladesh Chemical Industries Corporation of the Ministry of Industries. Khan Javed Anwar is the Managing Director of Jamuna Fertilizer Company Limited.It is one of the largest fertilizer factories in Bangladesh.Jamuna Fertilizer Company Limited was established in 1991 with technical support from Mitsubishi Heavy Industries by Bangladesh Chemical Industries Corporation.\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Doyamoyee Mandir:\n\nDoyamoyee Mandir is located in Jamalpur Sadar, Jamalpur.The temple is very old. An estimated 300 years ago, the ancient king Sri Krishna and his wife Dayamayi temple were established. The ancient temple located near the zero point of Jamalpur city.Its construction was done in conjunction with ancient civilization and architecture of modern architecture. In order to see the temple, many devotees and devotees come from far and wide to see the temple every day. In this place, people of Hindu community daily worship various prayers every day. And every year during the Ostmi Mela, the names of different Gods are named.\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Gandhi Ashram and Freedom Struggle Museum:\n\nThe Ashram is a historic sanctuary that was established in Jamalpur, Bangladesh in the 1930s following the principles of non-violence and non-cooperation as set forth by Mahatma Gandhi. After the partition of India in 1947 and the emergence of Pakistan, the Ashrams school, vocational training centers, health facilities, and other infrastructures were demolished. Only the office cottage survived the brutal attack, and it remains the center of all activities of the Ashram. The Freedom Struggle Museum was established alongside the Ashram in 2007 to uphold the history of the Bangladesh Liberation War in 1971.\n");


            int r;
            printf("\n\n\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                goto ni;
            }
        }
        else if(v==4)
        {
            ni3:

            system("CLS");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Sherpur District\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Sherpur District:\n1.Madhutila Eco Park\n2.Ghazni Leisure Center\n3.Pouney Tin Ani Zaminder Bari\n4.Nalitabari Rubber Dam\n5.Noyani Zamindar Bari and Temple\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Madhutila Eco Park:\n\nMadhutila Eco Park is located in Sherpur - 2110.Modhutila Eco Park is at Nalitabari, Sherpur. Modhutila Eco Park is also situated in the border. In the Indian part, Tura hill is situated in the same place. It is in Jhinaigati Thana of Sherpur. It takes 30 mins to reach there from Sherpur. This is a nice place with lots of species of trees and animals. After visiting Gazni, you should visit Modhutila as you go to Sherpur. Visitor can see there Meghlay, plants, animals, waterfall, lake etc.Modhutila Ecopark is unknown tourist place for maximum people of other districts. It has outstanding natural beauty and pleasant environment for recreation.\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Ghazni Leisure Center:\n\nGhazni Leisure Center is located in Jhenaigati , Sherpur.Ghazni Leisure Cente is an amaging place to spent time.It will blow your mind.This place is very charming and attractive.\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Pouney Tin Ani Zaminder Bari:\n\nPouney Tin Ani Zaminder Bari is located at Nabinagar, Sherpur.It is a historic place.People come here to visit this Jamidar bari.\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Nalitabari Rubber Dam:\n\nNalitabari Rubber Dam is located in Nalitabari, Sherpur.This is a big project and it is made to utilize and save the water.\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Noyani Zamindar Bari and Temple:\n\nNoyani Zamindar Bari and Temple is located in Sherpur Sadar, Sherpur.It is a historic place.People come here to visit this Jamidar bari.\n\n");

            int r;
            printf("\n\n\n\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                goto ni;
            }
        }
        else if(v==5)
    {
        districtsm();
    }
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tHope You Like It\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t*****#Thank You#*****");
    }

    else if(g==2)
    {
        system("CLS");
        Mymensingh();
    }

}
void ccon()
{
   int b,g;
   float d[]={12.42,1.15,84.80,0.0058,0.51,15.71,0.22,1.12,4.02,0.81,1.75,5.38,2.30,0.0037,0.043,0.00020,100.43,11.20,100.43,5.20,0.037,0.064,0.073,0.023,0.78,100.43,1.13,0.66,1.53,3.01,0.023,0.071,22.53,64.21,9.18,0.0083,22.61,1.10,20.61,24.08,0.14,14.71,1.18,0.72,0.34,0.0003,0.1531,0.022,61.17,0.094,0.153,0.1531,0.46,0.1531,0.1531,0.11,20.54,0.11,0.20,4.24,84.80,100.43,0.16,10.92,0.1531,0.1531,0.15,84.80,0.021,0.651,0.089,0.0087,0.1531,0.80,30.69,12.28,100.43,0.044,86.86,11960,100.43,3.68,1.45,9.60,100.43,49.88,23.09,0.28,32.79,8.21,3.44,24.49,24.67,100.43,92.70,0.0087,0.1531,0.012,0.0093,50.98,0.85,62.35,0.056,84.80,1.07,2.45,24.25,13.42,62.26,0.153,0.043,100.43,100.43,9.13,0.14,24.49,56.53,100.43,0.43,220.25,277.56,84.80,2.29,13.24,26.33,5.65,2,0.029,51.08,0.18,0.80,100.43,23.29,0.60,5.12,5,04,1.64,7.37,0.153,100.43,1.62,5.04,100.43,0.1531,224.91,0.153,12.50,100.43,84.80,2.13,0.48,5.04,40.15,100.43,0.41,0.20,1.15,10.40,100.43,100.43,11.37,0.90,100.43,62.28,42.06,84.76,5.50,0.62,0.75,41.90,0.004,32.65,31.37,61.37,31.37,31.37,84.80,37.35,4.73,31.37,100.43,31.37,84.80,31.37,92.70,100.43,100.43,84.80,61.17,61.17,100.43};
   float e,f,h;
   printf("  ");printf("0.China(Chinese Yuan )                     1.India(Indian Rupee )                  2.United States of America(USA)(USD )   3.Indonesia(Indonesian Rupiah )\n");
   printf("  ");printf("4.Pakistan(Pakistani Rupee )               5.Brazil(Brazilian Real )               6.Nigeria(Nigerian Naira )              7.Russia \n");
   printf("  ");printf("8.Mexico(Mexican Peso)                     9.Japan(Japanese Yen )                  10.Philippines(Philippine Peso )        11.Egypt(Egyptian Pound ) \n");
   printf("  ");printf("12.Ethiopia(Ethiopian Birr )               13.Vietnam(Vietnamese Dong )            14.DR Congo(Congolese Franc )           15.Iran(Iranian Rial )\n");
   printf("  ");printf("16.Germany(Euro)                           17.Turkey(Turkish Lira )                18.France(Euro )                        19.United Kingdom(UK)(pound)\n");
   printf("  ");printf("20.Thailand(Thai Baht )                    21.Italy(Euro )                         22.South Africa(South African Rand )    23.Tanzania(Tanzanian Shilling )\n");
   printf("  ");printf("24.Myanmar(Myanmar Kyat )                  25.South Korea(South Korean Won )       26.Colombia(Colombian Peso )            27.Kenya(Kenyan Shilling )\n");
   printf("  ");printf("28.Spain(Euro )                            29.Argentina(Argentine Peso )           30.Algeria(Algerian Dinar )             31.Sudan(Sudanese Pound ) \n");
   printf("  ");printf("32.Ukraine(Ukrainian Hryvnia )             33.Uganda(Ugandan Shilling )            34.Iraq(Iraqi Dinar )                   35.Poland(Polish Zloty to )\n");
   printf("  ");printf("36.Canada(Canadian Dollar )                37.Morocco(Moroccan Dirham )            38.Uzbekistan(Uzbekistan Som )          39.Saudi Arabia(Saudi Riyal )\n");
   printf("  ");printf("40.Afghanistan(Afghan afghani )            41.Malaysia(Malaysian Ringgit )         42.Peru(Sol to)                         43.Angola(Angolan Kwanza ) \n");
   printf("  ");printf("44.Ghana(Ghanaian Cedi )                   45.Mozambique(Mozambican Metical )      46.Nepal(Nepalese Rupee )               47.Yemen(Yemeni Rial)\n");
   printf("  ");printf("48.Venezuela(Venezuelan Bolivar )          49.Ivory Coast(West African CFA Franc)  50.Madagascar(Malagasy Ariary t)        51.Australia(Australian Dollar)\n");
   printf("  ");printf("52.North Korea(North Korean Won )          53.Cameroon(Central African CFA Franc)  54.Niger(West African CFA Franc)        55.Sri Lanka(Sri Lankan Rupee )\n");
   printf("  ");printf("56.Burkina Faso(West African CFA Franc )   57.Mali(West African CFA Franc)         58.Chile(Chilean Peso)                  59.Romania(Romanian Leu )\n");
   printf("  ");printf("60.Malawi(Malawian Kwacha )                61.Kazakhstan(Kazakhstani Tenge)        62.Zambia(Zambian Kwacha)               63.Ecuador(USD)\n");
   printf("  ");printf("64.Netherlands(Euro )                      65.Syria(Syrian Pound)                  66.Guatemala(Guatemalan Quetzal)        67.Senegal(West African CFA Franc)\n");
   printf("  ");printf("68.Chad(Central African CFA Franc )        69.Somalia(Somali Shilling)             70.Zimbabwe(USD)                        71.Cambodia(Cambodian Riel)\n");
   printf("  ");printf("72.South Sudan(South Sudanese Pound )      73.Rwanda(Rwandan Franc)                74.Guinea(Guinean Franc)                75.Benin(West African CFA Franc \n");
   printf("  ");printf("76.Haiti(Haitian Gourde )                  77.Tunisia(Tunisian Dinar)              78.Bolivia(Bolivian Boliviano)          79.Belgium(Euro )\n");
   printf("  ");printf("80.Burundi(Burundian Franc )               81.Cuba(Cuban Peso)                     82.Jordan(Jordanian Dinar)              83.Greece(Euro )\n");
   printf("  ");printf("84.Czech Republic(Czech Koruna )           85.Dominican Republic(Dominican Peso)   86.Sweden(Swedish Krona)                87.Portugal(Euro )\n");
   printf("  ");printf("88.Azerbaijan(Azerbaijani Manat )          89.United Arab Emirates(Dirham)         90.Hungary(Hungarian Forint)            91.Belarus(Belarusian Ruble )\n");
   printf("  ");printf("92.Tajikistan(Tajikistani Somoni )         93.Honduras(Honduran Lempira)           94.Israel(Israeli New Shekel)           95.Papua New Guinea(Papua New Guinean Kina)\n");
   printf("  ");printf("96.Austria(Euro)                           97.Switzerland (Swiss Franc )           98.Sierra Leone(Sierra Leonean Leone)   99.Togo(West African CFA Franc)\n");
   printf("  ");printf("100.Paraguay(Paraguayan Guarani)           101.Laos(Laotian Kip)                   102.Bulgaria(Bulgarian Lev)             103.Serbia(Serbian Dinar)\n");
   printf("  ");printf("104.Libya(Libyan Dinar)                    105.Lebanon (Lebanese Pound)            106.El Salvador(USD)                    107.Kyrgyzstan(Kyrgyzstani Som)\n");
   printf("  ");printf("108.Nicaragua(Nicaraguan Cordoba)          109.Turkmenistan(Turkmenistan Manat)    110.Denmark (USD)                       111.Singapore(Singapore Dollar)\n");
   printf("  ");printf("112.Central African Republic (CFC)         113.Congo(Congolese Franc)              114.Finland (Euro)                      115.Slovakia(Euro)\n");
   printf("  ");printf("116.Norway(Norwegian Krone)                117.Costa Rica(Costa Rican Colon)       118.Palestine (Israeli New Shekel)      119.New Zealand(New Zealand Dollar)\n");
   printf("  ");printf("120.Ireland(Euro)                          121.Liberia(Liberian Dollar)            122.Oman (Omani Rial)                   123.Kuwait(Kuwaiti Dinar)\n");
   printf("  ");printf("124.Panama(USD)                            125.Mauritania(Mauritanian Ouguiya)     126.Croatia(Croatian Kuna )             127.Georgia(Georgian Lari)\n");
   printf("  ");printf("128.Eritrea(Eritrean Nakfa)                129.Uruguay(Uruguayan Peso)             131.Mongolia(Mongolian Tugrik)          131.Bosnia and Herzegovina(Bosnia and Herzegovina Convertible Mark)\n");
   printf("  ");printf("132.Bosnia and Herzegovina                 133.Armenia(Armenian Dram)              134.Albania(Albenian LekLith)           135.Qatar(Qatari Rial)\n");
   printf("  ");printf("136.Jamaica(Jamaican Dollar)               137.Moldova(Moldovan Leu)               138.Lithuania(Euro)                     139.Gambia(Gambian Dalasi)\n");
   printf("  ");printf("140.Botswana(Botswana Pula)                141.Gabon (Central African CFA Franc)   142.Slovenia (Euro)                     143.North Macedonia(Macedonian Denar)\n");
   printf("  ");printf("144.Lesotho(Lesotho Loti)                  145.Latvia (Euro)                       146.Bahrain(Bahraini Dinar)             147.Guinea � Bissau(West African CFA Franc)\n");
   printf("  ");printf("148.Bahrain(Bahraini Dinar)                149.Equatorial Guinea(CAFC)             150.Trinidad and Tobago(TTD)            151.Estonia(Euro)\n");
   printf("  ");printf("152.East Timor(USD)                        153.Mauritius(Mauritian Rupee)          154.Djibouti(Djiboutian Franc)          155.Eswatini(Euro)\n");
   printf("  ");printf("156.Fiji(Fijian Dollar)                    157.Cyprus(Euro)                        158.Guyana(Guyanaese Dollar)            159.Comoros(Comorian Franc)\n");
   printf("  ");printf("160.Bhutan(Bhutanese Ngultrum)             161.Solomon Island(Euro)                162.Luxembourg(Euro)                    163.Montenegro(Euro)\n");
   printf("  ");printf("164.Suriname(Surinamese Dollar)            165.Cape Verde(Cape Verde Escudo)       166.Malta(Euro)                         167.Brunei(Brunei Dollar)\n");
   printf("  ");printf("168.Belize(Belize Dollar)                  169.Bahamas(Bahamian Dollar)            170.Maldives(Maldivian Rufiyaa)         171.Iceland(Icelandic Krona)\n");
   printf("  ");printf("172.Vanuatu(Vanuatu vatu)                  173.Barbados(Barbados Dollar)           174.Sao Tome and Principe(STPD)         175.Samoa(Samoan Tala)\n");
   printf("  ");printf("176.Saint Lucia(East Caribbean Dollar)     177.Kiribati(Australian Dollar)         178.Grenada(East Caribbean Dollar)      179.Saint Vincent and the Grenadines (East Caribbean Dollar)\n");
   printf("  ");printf("180.F.S.Micronesia(USD)                    181.Tonga(Tongan Pa’anga)             182.Seychelles(Seychellois Rupee)       183.Antigua and Barbuda(East Caribbean Dollar)\n");
   printf("  ");printf("184.Andorra(Euro)                          185.Dominica(East Caribbean Dollar)     186.Marshall Islands(USD)               187.Saint Kitts and Nevis(East Caribbean Dollar)\n");
   printf("  ");printf("188.Liechtenstein(Swiss Franc)             189.Monaco(Euro)                        190.San Marino(Euro)                    191.Palau(USD)\n");
   printf("  ");printf("192.Nauru(Australian Dollar)               193.Tuvalu(Australian Dollar)           194.Vatican City(Euro)\n");
   printf("From which country money do you want to convert?\n");
   scanf("%d",&b);
   printf("Enter the amount you want to convert:");
   scanf("%f",&e);
   f=d[b]*e;
   int country_name;
   printf("  ");printf("0.China(Chinese Yuan )                     1.India(Indian Rupee )                  2.United States of America(USA)(USD )   3.Indonesia(Indonesian Rupiah )\n");
   printf("  ");printf("4.Pakistan(Pakistani Rupee )               5.Brazil(Brazilian Real )               6.Nigeria(Nigerian Naira )              7.Russia \n");
   printf("  ");printf("8.Mexico(Mexican Peso)                     9.Japan(Japanese Yen )                  10.Philippines(Philippine Peso )        11.Egypt(Egyptian Pound ) \n");
   printf("  ");printf("12.Ethiopia(Ethiopian Birr )               13.Vietnam(Vietnamese Dong )            14.DR Congo(Congolese Franc )           15.Iran(Iranian Rial )\n");
   printf("  ");printf("16.Germany(Euro)                           17.Turkey(Turkish Lira )                18.France(Euro )                        19.United Kingdom(UK)(pound)\n");
   printf("  ");printf("20.Thailand(Thai Baht )                    21.Italy(Euro )                         22.South Africa(South African Rand )    23.Tanzania(Tanzanian Shilling )\n");
   printf("  ");printf("24.Myanmar(Myanmar Kyat )                  25.South Korea(South Korean Won )       26.Colombia(Colombian Peso )            27.Kenya(Kenyan Shilling )\n");
   printf("  ");printf("28.Spain(Euro )                            29.Argentina(Argentine Peso )           30.Algeria(Algerian Dinar )             31.Sudan(Sudanese Pound ) \n");
   printf("  ");printf("32.Ukraine(Ukrainian Hryvnia )             33.Uganda(Ugandan Shilling )            34.Iraq(Iraqi Dinar )                   35.Poland(Polish Zloty to )\n");
   printf("  ");printf("36.Canada(Canadian Dollar )                37.Morocco(Moroccan Dirham )            38.Uzbekistan(Uzbekistan Som )          39.Saudi Arabia(Saudi Riyal )\n");
   printf("  ");printf("40.Afghanistan(Afghan afghani )            41.Malaysia(Malaysian Ringgit )         42.Peru(Sol to)                         43.Angola(Angolan Kwanza ) \n");
   printf("  ");printf("44.Ghana(Ghanaian Cedi )                   45.Mozambique(Mozambican Metical )      46.Nepal(Nepalese Rupee )               47.Yemen(Yemeni Rial)\n");
   printf("  ");printf("48.Venezuela(Venezuelan Bolivar )          49.Ivory Coast(West African CFA Franc)  50.Madagascar(Malagasy Ariary t)        51.Australia(Australian Dollar)\n");
   printf("  ");printf("52.North Korea(North Korean Won )          53.Cameroon(Central African CFA Franc)  54.Niger(West African CFA Franc)        55.Sri Lanka(Sri Lankan Rupee )\n");
   printf("  ");printf("56.Burkina Faso(West African CFA Franc )   57.Mali(West African CFA Franc)         58.Chile(Chilean Peso)                  59.Romania(Romanian Leu )\n");
   printf("  ");printf("60.Malawi(Malawian Kwacha )                61.Kazakhstan(Kazakhstani Tenge)        62.Zambia(Zambian Kwacha)               63.Ecuador(USD)\n");
   printf("  ");printf("64.Netherlands(Euro )                      65.Syria(Syrian Pound)                  66.Guatemala(Guatemalan Quetzal)        67.Senegal(West African CFA Franc)\n");
   printf("  ");printf("68.Chad(Central African CFA Franc )        69.Somalia(Somali Shilling)             70.Zimbabwe(USD)                        71.Cambodia(Cambodian Riel)\n");
   printf("  ");printf("72.South Sudan(South Sudanese Pound )      73.Rwanda(Rwandan Franc)                74.Guinea(Guinean Franc)                75.Benin(West African CFA Franc \n");
   printf("  ");printf("76.Haiti(Haitian Gourde )                  77.Tunisia(Tunisian Dinar)              78.Bolivia(Bolivian Boliviano)          79.Belgium(Euro )\n");
   printf("  ");printf("80.Burundi(Burundian Franc )               81.Cuba(Cuban Peso)                     82.Jordan(Jordanian Dinar)              83.Greece(Euro )\n");
   printf("  ");printf("84.Czech Republic(Czech Koruna )           85.Dominican Republic(Dominican Peso)   86.Sweden(Swedish Krona)                87.Portugal(Euro )\n");
   printf("  ");printf("88.Azerbaijan(Azerbaijani Manat )          89.United Arab Emirates(Dirham)         90.Hungary(Hungarian Forint)            91.Belarus(Belarusian Ruble )\n");
   printf("  ");printf("92.Tajikistan(Tajikistani Somoni )         93.Honduras(Honduran Lempira)           94.Israel(Israeli New Shekel)           95.Papua New Guinea(Papua New Guinean Kina)\n");
   printf("  ");printf("96.Austria(Euro)                           97.Switzerland (Swiss Franc )           98.Sierra Leone(Sierra Leonean Leone)   99.Togo(West African CFA Franc)\n");
   printf("  ");printf("100.Paraguay(Paraguayan Guarani)           101.Laos(Laotian Kip)                   102.Bulgaria(Bulgarian Lev)             103.Serbia(Serbian Dinar)\n");
   printf("  ");printf("104.Libya(Libyan Dinar)                    105.Lebanon (Lebanese Pound)            106.El Salvador(USD)                    107.Kyrgyzstan(Kyrgyzstani Som)\n");
   printf("  ");printf("108.Nicaragua(Nicaraguan Cordoba)          109.Turkmenistan(Turkmenistan Manat)    110.Denmark (USD)                       111.Singapore(Singapore Dollar)\n");
   printf("  ");printf("112.Central African Republic (CFC)         113.Congo(Congolese Franc)              114.Finland (Euro)                      115.Slovakia(Euro)\n");
   printf("  ");printf("116.Norway(Norwegian Krone)                117.Costa Rica(Costa Rican Colon)       118.Palestine (Israeli New Shekel)      119.New Zealand(New Zealand Dollar)\n");
   printf("  ");printf("120.Ireland(Euro)                          121.Liberia(Liberian Dollar)            122.Oman (Omani Rial)                   123.Kuwait(Kuwaiti Dinar)\n");
   printf("  ");printf("124.Panama(USD)                            125.Mauritania(Mauritanian Ouguiya)     126.Croatia(Croatian Kuna )             127.Georgia(Georgian Lari)\n");
   printf("  ");printf("128.Eritrea(Eritrean Nakfa)                129.Uruguay(Uruguayan Peso)             131.Mongolia(Mongolian Tugrik)          131.Bosnia and Herzegovina(Bosnia and Herzegovina Convertible Mark)\n");
   printf("  ");printf("132.Bosnia and Herzegovina                 133.Armenia(Armenian Dram)              134.Albania(Albenian LekLith)           135.Qatar(Qatari Rial)\n");
   printf("  ");printf("136.Jamaica(Jamaican Dollar)               137.Moldova(Moldovan Leu)               138.Lithuania(Euro)                     139.Gambia(Gambian Dalasi)\n");
   printf("  ");printf("140.Botswana(Botswana Pula)                141.Gabon (Central African CFA Franc)   142.Slovenia (Euro)                     143.North Macedonia(Macedonian Denar)\n");
   printf("  ");printf("144.Lesotho(Lesotho Loti)                  145.Latvia (Euro)                       146.Bahrain(Bahraini Dinar)             147.Guinea � Bissau(West African CFA Franc)\n");
   printf("  ");printf("148.Bahrain(Bahraini Dinar)                149.Equatorial Guinea(CAFC)             150.Trinidad and Tobago(TTD)            151.Estonia(Euro)\n");
   printf("  ");printf("152.East Timor(USD)                        153.Mauritius(Mauritian Rupee)          154.Djibouti(Djiboutian Franc)          155.Eswatini(Euro)\n");
   printf("  ");printf("156.Fiji(Fijian Dollar)                    157.Cyprus(Euro)                        158.Guyana(Guyanaese Dollar)            159.Comoros(Comorian Franc)\n");
   printf("  ");printf("160.Bhutan(Bhutanese Ngultrum)             161.Solomon Island(Euro)                162.Luxembourg(Euro)                    163.Montenegro(Euro)\n");
   printf("  ");printf("164.Suriname(Surinamese Dollar)            165.Cape Verde(Cape Verde Escudo)       166.Malta(Euro)                         167.Brunei(Brunei Dollar)\n");
   printf("  ");printf("168.Belize(Belize Dollar)                  169.Bahamas(Bahamian Dollar)            170.Maldives(Maldivian Rufiyaa)         171.Iceland(Icelandic Krona)\n");
   printf("  ");printf("172.Vanuatu(Vanuatu vatu)                  173.Barbados(Barbados Dollar)           174.Sao Tome and Principe(STPD)         175.Samoa(Samoan Tala)\n");
   printf("  ");printf("176.Saint Lucia(East Caribbean Dollar)     177.Kiribati(Australian Dollar)         178.Grenada(East Caribbean Dollar)      179.Saint Vincent and the Grenadines (East Caribbean Dollar)\n");
   printf("  ");printf("180.F.S.Micronesia(USD)                    181.Tonga(Tongan Pa’anga)             182.Seychelles(Seychellois Rupee)       183.Antigua and Barbuda(East Caribbean Dollar)\n");
   printf("  ");printf("184.Andorra(Euro)                          185.Dominica(East Caribbean Dollar)     186.Marshall Islands(USD)               187.Saint Kitts and Nevis(East Caribbean Dollar)\n");
   printf("  ");printf("188.Liechtenstein(Swiss Franc)             189.Monaco(Euro)                        190.San Marino(Euro)                    191.Palau(USD)\n");
   printf("  ");printf("192.Nauru(Australian Dollar)               193.Tuvalu(Australian Dollar)           194.Vatican City(Euro)\n");
   int k;
   scanf("%d",&k);
   for(int a=0;a<=200;a++)
   {
       if(a==k)
       {
           h=f/d[a];
           printf("%f\n",h);
       }
   }
   int asd;
   printf("Press '1' to go back to previous page\n");
   printf("Press any other key to exit the program\n");
   printf("Press the number:");
   scanf("%d",&asd);
   if(asd==1)
   {
       system("CLS");
       hridoyvaia();
   }


}
