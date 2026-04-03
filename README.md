Welcome to Minimalist World! 

This Custom Mini Shell coded in C gives you an interactive shell.
There is pretty much thing I planed for this shell. But for the first upgrade
I added the play command. You can play the musics you downloaded by just typing their names
Keeping the nostalgia of the terminal use.

Technical Requirements:

- Linux
- 'gcc' compiler
- `xdg-open` installed (usually included by default)

Setup:


1. Clone or download this repository to your system.

2. Add your musics into a single folder.

3. Type "vim program" to write click on "i" then copy your directory name to right side of BASE_PATH's xdg-open. Click on "esc" then type :wp enter and :q! enter. Now it is done
Example: #define BASE_PATH "xdg-open /home/glitch/Desktop/MusicsYour/";

4. Open a terminal in the project folder and compile the program with:

gcc program.c -o program

5. Type "play" to play a song

6. Name the song name. 
Example: "Gravity" for Gravity.mp3
