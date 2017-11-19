int display_menu(void)
{
	int menu = 0;
	
	while(1)
	{
		system("clear");
		printf("\n\n\t\t\t\tText Tetris");
		printf("\n\t\t\t===========================");
		printf("\n\t\t\t\t GAME MENU\t\n");
		printf("\n\t\t\t===========================");
		printf("\n\t\t\t=\t1) GAME START\t      =");
		printf("\n\t\t\t=\t2) SEARCH RECORD\t   =");
		printf("\n\t\t\t=\t3) PRINT  RECORD\t   =");
		printf("\n\t\t\t=\t4) EXIT GAME\t\t     =");
		printf("\n\t\t\t===========================");
		printf("\n\t\t\t\t\t SELECT : ");
		scanf("%d",&menu);

		if(menu < 1 || menu > 4)
		{
			continue;
		}
		else
		{
			return menu;
		}
	}
	return 0;
}

