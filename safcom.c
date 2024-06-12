#include <stdio.h>

int main()
{
    // variables declaration
    int choice;

    //*544# Menu
    printf("0.CRAZY OFFERS\n");
    printf("1.TikTok + YouTube\n");
    printf("2.Sh20=1.2GB, 1Hr\n");
    printf("3.Shine Kenya\n");
    printf("4.Sh.20=200MB, 24Hr\n");
    printf("5.MakeUrHOOK\n");
    printf("6.My Dealz\n");
    printf("7.Daily+FREE GAMES\n");
    printf("8.Weekly+FREE YouTube\n");
    printf("9.GO MONTHLY\n");
    printf("98.MORE\n\n");

    // choice input
    printf("Choice: \n");
    scanf("%d", &choice);
    printf("\n \n");

    // Control flow
    if (choice == 0)
    {
        // choice 0 menu
        printf("1.Sh20=1.2GB, 1hr + FREE GAME\n");
        printf("2.Sh20=200MB, 24hr + FREE GAME\n");
        printf("3.Sh50=1.5GB, 3hr + FREE GAME\n");
        printf("4.Sh100=2GB, 24hr\n");
        printf("5.Sh10=15min, 1Hr\n");
        printf("0.BACK 00:HOME 98:MORE\n\n");

        printf("Choice: \n");
        scanf("%d", &choice);
        printf("\n \n");

        if (choice == 1)
        {
            printf("Buy Sh20=1200MB, 1hr + FREE GAME using:\n");
            printf("1:Airtime\n");
            printf("2:MPESA\n");
            printf("0:BACK 00:HOME\n");
        }
        else if (choice == 2)
        {
            printf("Buy Sh20=200MB, 24hr + FREE GAME using:\n");
            printf("1:Airtime\n");
            printf("2:MPESA\n");
            printf("0:BACK 00:HOME\n");
        }

        else if (choice == 3)
        {
            printf("Buy Sh50=1500MB, 3hr + FREE GAME using:\n");
            printf("1:Airtime\n");
            printf("2:MPESA\n");
            printf("0:BACK 00:HOME\n");
        }

        else if (choice == 4)
        {
            printf("Buy Sh100=2000MB, 24hr using:\n");
            printf("1:Airtime\n");
            printf("2:MPESA\n");
            printf("0:BACK 00:HOME\n");
        }

        else if (choice == 5)
        {
            printf("Buy Sh10(15 Mins, 1hr) using:\n");
            printf("1:Airtime\n");
            printf("2:MPESA\n");
            printf("0:BACK 00:HOME\n");
        }

        else if (choice == 98)
        {
            printf("Night Hook Bundle(sh50=5GB midnight - 6am)\n");
            printf("0:BACK 00:HOME\n");
        }
    }
    else if (choice == 1)
    {
        // choice 0 menu
        printf("1.TikTok\n");
        printf("2.YouTube\n");
        printf("0:BACK 00:HOME\n");

        printf("Choice: \n");
        scanf("%d", &choice);
        printf("\n \n");

        if (choice == 1)
        {
            printf("Enjoy Trending Content on TikTok\n");
            printf("1:Ksh 10=1GB 1Hr\n");
            printf("2:Ksh 10=150MB 24Hrs\n");
            printf("3:Ksh 20=450MB 24Hrs\n");
            printf("4:Ksh 50=1.2GB 24Hrs\n");
            printf("5:AFCON Highlights\n");
            printf("0:BACK 00:HOME\n");
        }

        else if (choice == 2)
        {
            printf("Enjoy the best videos on YouTube\n");
            printf("1:Ksh 10(1GB YouTube for 1Hr)\n");
            printf("2:Ksh 10(150MB YouTube 24Hrs)\n");
            printf("3:Ksh 20(450MB YouTube 24Hrs)\n");
            printf("4:Ksh 50(1.2GB YouTube 24Hrs)\n");
            printf("0:BACK 00:HOME\n");
        }
    }

    else if (choice == 2)
    {
        printf("Buy Sh20=1200MB, 1hr + FREE GAME using:\n");
        printf("1:Airtime\n");
        printf("2:MPESA\n");
        printf("0:BACK 00:HOME\n");
    }

    else if (choice == 3)
    {
        printf("1:Sh20(10mins+100MB+FREE SKIZA)3hrs:\n");
        printf("2:Sh50(20mins+235MB+FREE Education)till midnight:\n");
        printf("0:BACK\n");
    }
}
