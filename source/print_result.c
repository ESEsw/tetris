 int print_result(void)
766 {
767     FILE *fp = NULL;
768     char ch = 1 ;
769 
770     fp = fopen("result", "rb");
771 
772     if(fp == NULL)
773         return 0;
774 
775     system("clear");
776 
777     printf("\n\t\t\t\tText Tetris");
778     printf("\n\t\t\t\t 게임 기록\n\n");
779     printf("\n\t\t이름\t\t점수\t 날짜\t\t 시간"); 
