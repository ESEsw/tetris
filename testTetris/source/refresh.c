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
             setcount = 0;
             speedcount = 0;
             countrange = 5;
             firststart = 0;
             game = GAME_END;
         }
     }
 
     if(collision_test(DOWN))
     {
         if(setcount == 9)
         {
             block_number= next_block_number;
             next_block_number = rand()%7;
             block_state = 0;
             x = 3;
             y = 0;
         }
         setcount++;
         setcount %= 10;
     }
 
     ch = getch();
 
     switch(ch)
     {
         case 74     :
         case 106 :    move_block(LEFT);
                               break;
         case 76     :
         case 108 :    move_block(RIGHT);
                               break;
         case 75     :
         case 107 :    move_block(DOWN);
                                 break;
         case 73     :
         case 105 :    move_block(ROTATE);
                                 break;
         case 65  :
         case 97  :    drop();
                                 break;
          case 80  :
          case 112 :    downcount = 0;
                                  setcount = 0;
                                  speedcount = 0;
                                  countrange = 5;
                                  firststart = 0;
                                  game = GAME_END;
                                  break;
          default :     break;
    }
     return 0;
 }  


