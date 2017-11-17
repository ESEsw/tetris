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

     while(1)
     {
         fread(&temp_result, sizeof(struct result), 1, fp);
         if(!feof(fp))
         {
             if(!strcmp(temp_result.name, name))
             {
                 find = 1;
                 printf("\n\t========================================================");
                 printf("\n\t\t%s\n\t\t\t\t%ld\t%d. %d. %d. | %d : %d\n", temp_result.name, temp_result.point, temp_result.year, temp_result.month, temp_result.day, temp_result.hour, temp_result.min);
             }
         }
         else
         {
             break;
         }
     } 
