/* tower s of hanoi */

#include<stdio.h>

int n,swap=0,count=0;

int checkd(int td)
{
 if(td==n-1)
  return 1;

 else
  return 0;
}

int check(int *ta,int *tnd,int cur[],int lat[])
{
 int tmp,*temp;

 if(cur[*ta]==n+1)
  {
   return 1;
  }
 
 else
  return 0;
}
 

move(int so[],int *dec,int si[],int *inc)
 {
 if(*inc==0 && si[*inc]==n+1)
  {
   si[*inc]=so[*dec];
   so[*dec]=n+1;
  }

 else
  {
   si[++*inc]=so[*dec];
   so[*dec]=n+1;
  } 

 }


int print(int a)
{
 if(a==n+1)
  return 0;
 
 else
  return a;
}


display(int cur[],int lat[],int d[])
 {
   int i;
  
  if(count==0)
   {
    printf("\n\nInitial arrangement");
    count++;
   }
  
  else
    printf("\n\nstep number : %d",count++); 
 
   if(swap%2==1)
    {
     printf("\n\n T1  T2  T3\n\n");

     for(i=n-1;i>=0;i--)
      {
       printf(" %d   %d   %d\n",print(lat[i]),print(cur[i]),print(d[i]));
      }
    } 

   else
    {
     printf("\n\n T1  T2  T3\n\n");

     for(i=n-1;i>=0;i--)
      {
       printf(" %d   %d   %d\n",print(cur[i]),print(lat[i]),print(d[i]));
      }
    }

 }


main()
{
 int a[100],nd[100],d[100];
 int i,j;
 int ta,tnd,td,tmp;
 int *cur,*lat,*temp;

 system("clear");

 printf("How many blocks do you wish to start with ? ");
 scanf("%d",&n);

 for(i=0,j=n;i<n;i++,j--)
  {
   a[i]=j;
   nd[i]=n+1;
   d[i]=n+1;
  }

 display(a,nd,d);

 ta=n-1;
 tnd=0;
 td=0;

 cur=a;
 lat=nd;

 while(1)
  {
   while(1)
    {
  
    if( (ta+1)%2==0)
     {
       // move1 begin
    
       if(cur[ta]<lat[tnd])
        {move(cur,&ta,lat,&tnd);if(ta!=0)ta--;}
       else
        {move(lat,&tnd,cur,&ta);if(tnd!=0)tnd--;}

       display(cur,lat,d);

       if(checkd(td))
        break;

       if(check(&ta,&tnd,cur,lat))
        {
         tmp=ta;
         ta=tnd;
         tnd=tmp;

         temp=cur;
         cur=lat;
         lat=temp;

         swap++;

         break;
        }
     
       // move1 end


       // move2 begin

       if(cur[ta]<d[td])
        {move(cur,&ta,d,&td);if(ta!=0)ta--;}
       else
        {move(d,&td,cur,&ta);if(td!=0)td--;}

       display(cur,lat,d);

       if(checkd(td))
        break;

       if(check(&ta,&tnd,cur,lat))
        {
         tmp=ta;
         ta=tnd;
         tnd=tmp;

         temp=cur;
         cur=lat;
         lat=temp;

         swap++;


         break;
        }

       // move2 end


       // move3 begin

       if(lat[tnd]<d[td])
        {move(lat,&tnd,d,&td);if(tnd!=0)tnd--;}
       else
        {move(d,&td,lat,&tnd);if(td!=0)td--;}

     display(cur,lat,d);

       if(checkd(td))
        break;

       if(check(&ta,&tnd,cur,lat))
        {
         tmp=ta;
         ta=tnd;
         tnd=tmp;

         temp=cur;
         cur=lat;
         lat=temp;

         swap++;

         break;
        }

       // move3 end
     }
      

    else
     {

       // move1 begin

       if(cur[ta]<d[td])
        {move(cur,&ta,d,&td);if(ta!=0)ta--;}
       else
        {move(d,&td,cur,&ta);if(td!=0)td--;}

       display(cur,lat,d);

       if(checkd(td))
        break;

       if(check(&ta,&tnd,cur,lat))
        {
         tmp=ta;
         ta=tnd;
         tnd=tmp;

         temp=cur;
         cur=lat;
         lat=temp;

         swap++;
          break;
        }
  
       // move1 end


       // move2 begin

       if(cur[ta]<lat[tnd])
        {move(cur,&ta,lat,&tnd);if(ta!=0)ta--;}
       else
        {move(lat,&tnd,cur,&ta);if(tnd!=0)tnd--;}

       display(cur,lat,d);

       if(checkd(td))
        break;

       if(check(&ta,&tnd,cur,lat))
        {
         tmp=ta;
         ta=tnd;
         tnd=tmp;

         temp=cur;
         cur=lat;
         lat=temp;

         swap++;

        break;
        }
 
       // move2 end


       // move3 begin

   
       if(lat[tnd]<d[td])
        {move(lat,&tnd,d,&td);if(tnd!=0)tnd--;}
       else
        {move(d,&td,lat,&tnd);if(td!=0)td--;}

       display(cur,lat,d);

       if(checkd(td))
        break;

       if(check(&ta,&tnd,cur,lat))
        {
         tmp=ta;
         ta=tnd;
         tnd=tmp;

         temp=cur;
         cur=lat;
         lat=temp;

         swap++;

         break;
        }

       // move3 end
     }
 
   }  //2nd while loop ends

  if(checkd(td))
   break;

 } // 1st while loop ends

  //  display(cur,lat,d);

  printf("\n\n                  THANK YOU ");

    
}














