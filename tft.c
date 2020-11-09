#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void level_up(int *level, int *ex);
 
void each_level_probability(int level);
 
void print_out_champion(int cost);
 
int ex(int level);
 
 
char *Champion1[12] = {"Garen", "Nami", "Nidalee", "Diana", "Maokai", "Vayne", "Yasuo", "Elise", "Wukong", "Tahm Kench", "Twisted Fate", "Fiora"};
 
char *Champion2[14] = {"Lulu", "Vi", "Veigar", "Sylas", "Tresh", "Aphelios", "Annie", "Jarvan IV", "Janna", "Jax", "Zed", "Teemo", "Pyke", "Hecarim"};
 
char *Champion3[12] = {"Nunu&Willump", "Lux", "Xin Zhao", "Yummi", "Akali", "Irelia", "Evelynn", "Jinx", "Katarina", "Kalista", "Kindred", "Kennen"};
 
char *Champion4[11] = {"Riven", "Morgana", "Sejuani", "Shen", "Ahri", "Aatrox", "Ashe", "Warwick", "Cassiopeia", "Jhin", "Talon"};
 
char *Champion5[7] = {"★Lilia", "★Sett", "★Lee Sin", "★Yone", "★Ezreal", "★Zilean", "★Kayn"};
 
 
 
int main (void)
 
{
 
 int level = 1;
 int exp = 0;
 
 char key; 
 
 
 srand(time(NULL));
 
 
 while(1)
 
 { 
 
  scanf("%c", &key);
 
 
  if (key == 'p') break;
  
  if (key == 'q') level_up(&level,&exp);
 
  if (key == 'r')
 
  {
 
   // system("cls");
   printf("level : %d    %d/%d\n", level, exp,ex(level));
   each_level_probability(level);
 
  }  
 
 }
 
}
 
int ex(int level)
{
 int Ex = 0;
 
 if(level == 1)
 {
  Ex = 1;
  return Ex;
 }
 
 if(level == 2)
 {
  Ex = 2;
  return Ex;
 }
 
 if(level == 3)
 {
  Ex = 6;
  return Ex;
 }
 
 if(level == 4)
 {
  Ex = 10;
  return Ex;
 }
 
 if(level == 5)
 {
  Ex = 20;
  return Ex;
 }
 
 if(level == 6)
 {
  Ex = 36;
  return Ex;
 }
 
 if(level == 7)
 {
  Ex = 56;
  return Ex;
 }
 
 if(level == 8)
 {
  Ex = 80;
  return Ex;
 }
 
 if(level == 9)
 {
  Ex = 0;
  return 0;
 }
}
 
 
void level_up(int *level, int *ex)
 
{
 if (*level == 1 )
 {
  printf("level : %d\n", *level);
  *level+=1;
  printf("%d/%d\n ", 1, 1);
  return;
 }
 
 if (*level == 2 )
 {
  printf("level : %d\n", *level);
  *level+=1;
  printf("%d/%d\n ", 2, 2);
  return;
 }
 
 if (*level == 9 )
 {
  printf("MAX!!");
  return;
 }
 
 *ex+=4;
 
 if (*level == 3 )
 { 
  if (6<=*ex)
  {
   *level+=1; 
   *ex-=6;
   printf("level : %d\n", *level);
   printf("%d/%d\n", *ex,6);
  }
  
  else
  {
   printf("level : %d\n", *level);
   printf("%d/%d\n ", *ex, 6);
  }
  return;
   
 }
 
 if (*level == 4 )
 {
  printf("level : %d\n", *level);
  if (10<=*ex)
  {
   printf("%d/%d\n", *ex,10);
   *level+=1; 
   *ex-=10;
  }
  
  else printf("%d/%d\n ", *ex, 10);
  return;
   
 }
 
 if (*level == 5 )
 {
  printf("level : %d\n", *level);
  if (20<=*ex)
  {
   printf("%d/%d\n", *ex,20);
   *level+=1; 
   *ex-=20;
  }
  
  else printf("%d/%d\n ", *ex, 20);
  return;
   
 }
 
 if (*level == 6 )
 {
  printf("level : %d\n", *level);
  if (36<=*ex)
  {
   printf("%d/%d\n", *ex,36);
   *level+=1; 
   *ex-=36;
  }
  
  else printf("%d/%d\n ", *ex, 36);
  return;
   
 }
 
 if (*level == 7 )
 {
  printf("level : %d\n", *level);
  if (56<=*ex)
  {
   printf("%d/%d\n", *ex,56);
   *level+=1; 
   *ex-=56;
  }
  
  else printf("%d/%d\n ", *ex, 56);
  return;
   
 }
 
 if (*level == 8 )
 {
  printf("level : %d\n", *level);
  if (80<=*ex)
  {
   printf("%d/%d\n", *ex,80);
   *level+=1; 
   *ex-=80;
  }
  
  else printf("%d/%d\n ", *ex, 80);
  return;
   
 } 
}
 
 
 
void print_out_champion(int cost)
 
{  
 
    int tw = 0, i;
 
   
 
    if (cost == 1)
 
    {  
 
        tw = rand()%11;
 
        i = 0;
 
        i+=tw;
 
    
 
        printf("%s", Champion1[i]);
 
        printf(" l ");
 
    }
 
 
 
 
 
    if (cost == 2)
 
    {  
 
        tw = rand()%13;
 
        i = 0;
 
        i+=tw;
 
    
 
        printf("%s", Champion2[i]);
 
        printf(" l ");
 
    }
 
   
 
    if (cost == 3)
 
    {  
 
        tw = rand()%11;
 
        i = 0;
 
        i+=tw;
 
    
 
        printf("%s", Champion3[i]);
 
        printf(" l ");
 
    }
 
   
 
    if (cost == 4)
 
    {  
 
        tw = rand()%10;
 
        i = 0;
 
        i+=tw;
 
    
 
        printf("%s", Champion4[i]);
 
        printf(" l ");
 
    }
 
   
 
    if (cost == 5)
 
    {  
 
        tw = rand()%6;
 
        i = 0;
 
        i+=tw;
 
    
 
        printf("%s", Champion5[i]);
 
        printf(" l ");
 
    }
 
}
 
 
 
void each_level_probability(int level)
 
 
 
{
 
 
 
 int i = 0, cnt = 0, pro = 0; 
 
 
 
 if (level == 1 || level == 2)
 
 
 
 {
 
  while(1) 
 
  {
 
   print_out_champion(1);
 
   cnt++;
 
   
 
   if(cnt==5) break;
 
  }
 
 
 
 }
 
 
 
 if (level ==3)
 
 {
 
  while(1) 
 
  {
 
   pro = rand()%1000;
 
 
 
   if(pro<750)
 
 
 
   {
 
    print_out_champion(1);
 
    cnt++;
 
   }
 
 
 
   else if(pro>=750)
 
   {
 
    print_out_champion(2);
 
    cnt++;
 
   }
 
   
 
   if(cnt==5) break;
 
 
 
  }
 
 
 
 }
 
 
 
 if (level == 4)
 
 {
 
  while(1) 
 
  {
 
   pro = rand()%1000;
 
   
 
   if(pro<550)
 
   {
 
    print_out_champion(1);
 
    cnt++;
 
   }
 
 
 
   else if(pro>=550&&pro<850)
 
   {
 
    print_out_champion(2);
 
    cnt++;
 
   }
 
 
 
   else if(pro>=850)
 
   {
 
    print_out_champion(3);
 
    cnt++;
 
   }
 
    
 
   if(cnt==5) break;
 
  }
 
 }
 
 
 
 if (level == 5)
 
 {
 
  while(1) 
 
  {
 
   pro = rand()%1000;
 
 
 
   if(pro<450)
 
   {
 
    print_out_champion(1);
 
    cnt++;
 
   }
 
   
 
   else if(pro>=450&&pro<750)
 
   {
 
    print_out_champion(2);
 
    cnt++;
 
   }
 
 
 
   else if(pro>=750&&pro<950)
 
   {
 
    print_out_champion(3);
 
    cnt++;
 
   }
 
    
 
   else if(pro>=950)
 
   {
 
    print_out_champion(4);
 
    cnt++;
 
   }
 
   
 
   if(cnt==5) break;
 
  }
 
 }
 
 
 
 if (level == 6)
 
 {
 
  while(1) 
 
  {
 
   pro = rand()%1000;
 
 
 
   if(pro<300)
 
   {
 
    print_out_champion(1);
 
    cnt++;
 
   }
 
   
 
   else if(pro>=300&&pro<650)
 
   {
 
    print_out_champion(2);
 
    cnt++;
 
   }
 
 
 
   else if(pro>=650&&pro<900)
 
   {
 
    print_out_champion(3);
 
    cnt++;
 
   }
 
    
 
   else if(pro>=900)
 
   {
 
    print_out_champion(4);
 
    cnt++;
 
   }
 
   
 
   if(cnt==5) break;
 
  }
 
 }
 
 
 
 
 
 
 
    if (level == 7)
 
 {
 
  while(1) 
 
  {
 
   pro = rand()%1000;
 
 
 
   if(pro<190)
 
   {
 
    print_out_champion(1);
 
    cnt++;
 
   }
 
   
 
   else if(pro>=190&&pro<540)
 
   {
 
    print_out_champion(2);
 
    cnt++;
 
   }
 
 
 
   else if(pro>=540&&pro<840)
 
   {
 
    print_out_champion(3);
 
    cnt++;
 
   }
 
    
 
   else if(pro>=840&&pro<990)
 
   {
 
    print_out_champion(4);
 
    cnt++;
 
   }
 
   
 
   else if(pro>=990)
 
   {
 
    print_out_champion(5);
 
    cnt++;
 
   }
 
   
 
   if(cnt==5) break;
 
  }
 
 }
 
 
 
 if (level == 8)
 
 {
 
  while(1) 
 
  {
 
   pro = rand()%1000;
 
 
 
   if(pro<140)
 
   {
 
    print_out_champion(1);
 
    cnt++;
 
   }
 
   
 
   else if(pro>=140&&pro<390)
 
   {
 
    print_out_champion(2);
 
    cnt++;
 
   }
 
 
 
   else if(pro>=390&&pro<740)
 
   {
 
    print_out_champion(3);
 
    cnt++;
 
   }
 
    
 
   else if(pro>=740&&pro<940)
 
   {
 
    print_out_champion(4);
 
    cnt++;
 
   }
 
   
 
   else if(pro>=940)
 
   {
 
    print_out_champion(5);
 
    cnt++;
 
   }
 
   
 
   if(cnt==5) break;
 
  }
 
 }
 
 
 
 
 
 
 
 if (level == 9)
 
 {
 
  while(1) 
 
  {
 
   pro = rand()%1000;
 
 
 
   if(pro<100)
 
   {
 
    print_out_champion(1);
 
    cnt++;
 
   }
 
   
 
   else if(pro>=100&&pro<250)
 
   {
 
    print_out_champion(2);
 
    cnt++;
 
   }
 
 
 
   else if(pro>=250&&pro<550)
 
   {
 
    print_out_champion(3);
 
    cnt++;
 
   }
 
    
 
   else if(pro>=550&&pro<850)
 
   {
 
    print_out_champion(4);
 
    cnt++;
 
   }
 
   
 
   else if(pro>=850)
 
   {
 
    print_out_champion(5);
 
    cnt++;
 
   }
 
   
 
   if(cnt==5) break;
 
  }
 
 }
 
} 