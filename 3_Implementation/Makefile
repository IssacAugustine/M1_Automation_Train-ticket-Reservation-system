SRC = Reservation_System.c\
src/Reservation_System.c
INC = inc
Reservation_System.exe : $(SRC) 
    gcc $^ -I$(INC) -o $@

run : Reservation_System.exe
    ./Reservation_System.exe

clean:
    del Reservation_System.exe
