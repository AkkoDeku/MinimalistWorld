#include <stdio.h>
#include <stdlib.h>
#define BASE_PATH "xdg-open /home/glitch/Desktop/MusicsYour/";

int main(){

    char girdi[200];
    while (1){

	    printf("command? ");
	    fgets(girdi, sizeof(girdi), stdin);
            
	    for (int i = 0; i < 200; i++) {
		if (girdi[i] == '\n') {
		    girdi[i] = '\0';
		    break;
		}
	    }

	    char istenen[5] = "play";
            int sameinput = 1;

            for (int i = 0; i < 4; i++){
                if(istenen[i] != girdi[i]){
		   sameinput = 0;
		   break; //I made it faster
		}

	        if(girdi[4] != '\0'){
                    sameinput = 0;
		}
	    }
            
	    if (sameinput  == 1) {

		char music[100];
		printf("Music name: ");
		fgets(music, sizeof(music), stdin);

		int length = 0;

		for ( int i = 0; i < 100; i++){

		    if(music[i] == '\n') {
                    music[i] = '\0';
		    break;
		    }

		    length = length + 1;
		}

		char root[200] = BASE_PATH;
                int rootlen = 0;

		while(root[rootlen] != '\0'){
                   rootlen = rootlen + 1;
		}

		for (int i = 0; i < length; i++){
                    if(music[i] == '\0'){
                        break;
		    }
                     
		    root[rootlen] = music[i];
		    rootlen = rootlen + 1;

		}

		root[rootlen++] = '.';
                root[rootlen++] = 'm';
                root[rootlen++] = 'p';
                root[rootlen++] = '3';
                root[rootlen++] = ' ';
                root[rootlen++] = '&';
                root[rootlen] = '\0';

                system(root);
            } else {
                system(girdi);
            }

    }
    return 0;

}

