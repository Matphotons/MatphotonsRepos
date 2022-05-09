#include<stdio.h>
#include<stdlib.h>
struct bookStore{
    int bookId;
    char bookName[30];
    char author[30];
    int copies;
};
struct dateStore{
    int month;
    int day;
    int year;
};
struct tranStore{
    int bookCode;
    char tranType;
    struct dateStore tranDate;
};

int main()
{
    int choice=1, i;
    char addflag;
    struct bookStore books[5];
    struct tranStore trans[10];

    while(choice !=4)
    {
        printf("\nSelect from Menu\n 1. Add book names\n 2. \n Record Issue/Return\n 3. Sort Transation\n 4. Exit \n\nEnter choic: ");
        scanf("%d", &choice);
        if(choice==1)
        {
            addflag='y';
            for(i=0; i<5 && addflag=='y'; i++)
            {
                books[i].bookId=i+1;

                printf("\n\nBook code: %d\n\nBook name: ", i+1);
                scanf("%s", &books[i].bookName);
                printf("\nAuthors: ");
                scanf("%s", &books[i].author);
                printf("\nNumber of  copies");
                scanf("%d", &books[i].copies);
                printf("\n\nContinue? (y/n):");
                printf("%c", &addflag);
            }   
        }
        else if(choice==2)
        {
            addflag='y';
            for(i=0; i<10 && addflag=='y'; i++ )
            {
                printf("\n\nBook code: ");
                scanf("%d", &trans[i].bookCode);
                printf("\nIssue or Return?(I/R): ");
                scanf("%c", &trans[i].tranType);
                printf("\nDate: ");
                scanf("%d %d %d", &trans[i].tranDate.month, &trans[i].tranDate.day, &trans[i].tranDate.year);
                printf("\n\nContinue?(y/n): ");
                scanf("%c", &addflag);
            }
        }
        else if(choice==3)
        {
            sorttran(trans);
        }
        return 0;
    }
     struct tranStore trans[10];
    {
        int i, j, tempcode;
        struct tranStore temptran;
        for(i=0; i<10; i++)
        {
            for(j=i+1; j<10; j++)
            {
                if(trans[i].bookCode>trans[j].bookCode)
                {
                    temptran=trans[i];
                    trans[i]=trans[j];
                    trans[j]=temptran;
                }
            }
        }
        for(i=0, j=0; i<10; j=0)
        {
            tempcode=trans[i].bookCode;
            while(trans[i].bookCode==tempcode && i<10)
            {
                j++;
                i++;
            }
            printf("\nBook code %d had %d transations", tempcode, j);
        }
 
    }
}