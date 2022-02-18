 #target : Dependencies
 #<TAB>Commands

 Build : project_main.c movie ticket booking.c test_movie ticket booking.c 
         gcc project_main.c movie ticket booking.c test_movie ticket booking.c -movie ticket booking.out
 Run : movie ticket booking.out
            ./movie ticket booking.out
 Clean :
        rm -rf *.o *.out *.i *.s