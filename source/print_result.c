int print_result(void)
{
     FILE *fp = NULL;
     char ch = 1 ;

     fp = fopen("result", "rb");

     if(fp == NULL)
         return 0;

     system("clear");

     printf("\n\t\t\t\tText Tetris");
     printf("\n\t\t\t\t Game record\n\n");
     printf("\n\t\t Name\t\t record\t date\t\t time"); 
