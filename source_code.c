
#include <stdio.h>
int main() {
    printf("B1 JUICE CORNER\n");
    printf("MENU:-\n1-APPLE-Rs.30\n2-MANGO-Rs.25\n3-LITCHI-Rs.35\n4-NARIYAL PAANI-Rs.30\n5-PAPAYA-Rs.40\n6-ORANGE-Rs.40\n7-KIWI-Rs.60\n8-GRAPES-Rs.45\n9-LIME-Rs.10\n10-ROSE MILK-Rs.15\n\n\n");
    printf("Enter the code for the juice you want to have?\n");
    int c,t,tt;
    scanf("%d",&c);
    switch (c)
    {
        case 1:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(30*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
    
     case 2:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(25*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
     case 3:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(35*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
     case 4:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(30*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
     case 5:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(40*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
     case 6:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(40*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
     case 7:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(60*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
     case 8:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(45*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
     case 9:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(10*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
     case 10:
        printf("enter quantity\n");
        scanf("%d",&t);
        printf("You need to pay 💰Rs.%d\n",(15*t));
        printf("Here is your juice ");
        
        while(t>0)
        {
    printf("🥤");t--;
        }
        
    break;
    default:
    printf("invalid input");
        
    }
    
    return 0;
}
