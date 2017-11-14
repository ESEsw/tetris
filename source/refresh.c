int refresh(int signum)
{
     static int downcount = 0;
     static int setcount = 0;
     static long speedcount = 0;
     static int countrange = 5;
     static int firststart = 0;
 
     char ch;
 
     srand((unsigned)time(NULL));
 
     if(firststart == 0)
     {
         block_number= rand()%7;
         if(firststart == 0)
             firststart++;
     }
 
     printf("\n score : %ld | speed : %d | top_record : %d", point, countrange, best_point);
 
     display_tetris_table();
     check_one_line();
 
     printf("\n game_pause : P");
 
     if(downcount == countrange-1)
     {
         point += 1;
         move_block(DOWN);
     }
 
     if(speedcount == 499)
     {
         if(countrange != 1)
             countrange--;
     }
 
     downcount++;
     downcount %= countrange;
     speedcount++;
     speedcount %= 500;
 
     if(x == 3 && y == 0)
     {
         if(collision_test(LEFT) || collision_test(RIGHT) || collision_test(DOWN) || collision_test(ROTATE))
         {
             printf("\n Game End! \n");
             downcount = 0;
