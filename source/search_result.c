int search_result(void)
{
 FILE *fp = NULL;
     char name[30];
     char ch;
     int find = 0;
 
     fp = fopen("result", "rb");
 
     if(fp == NULL)
         return 0;
 
     system("clear");
 
     printf("\n\n\t\t Enter the your ID : ");
     scanf("%s%*c", name);
 
     printf("\n\t\t\t\tText Tetris");
     printf("\n\t\t\t\t Game record\n\n");
     printf("\n\t\t Name \t\t record\t date \t\t time"); 
