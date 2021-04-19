# NAVY
You all know the very famous Battleship game.
Well, I hope so.
You must code a terminal version of this game.
The two players are ONLY allowed to comunicate using the signals SIGUSER1 and SIGUSER2.

    USAGE
      ./navy [first_player_pid] navy_positions
    DESCRIPTION
      first_player_pid: only for the 2nd player. pid of the first player.
      navy_positions: file representing the positions of the ships.
 
The file passed as parameter must contain lines formatted the following way:
  LENGTH : FIRST_SQUARE : LAST_SQUARE
where LENGTH is the length of the ship, FIRST_SQUARE and LAST_SQUARE its first and last positions.
In this file, you must have 4 ships (of lengths 2,3,4 and 5).

You can try the game like so:

    - Open two terminals
    - Do a "make" in one of them
    - Run "./navy pos1" in one of them, a message will be display with a PID
    - On the other terminal run "./navy [the PID of the other terminal] pos2"
    - You can know play by entering the spot you want to attack :)[B-PSU-200_navy.pdf]
  

(https://github.com/lncdss/NAVY/files/6338472/B-PSU-200_navy.pdf)
