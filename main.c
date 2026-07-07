#include <stdio.h>

// flags - 
// -f -> to use commands with flashdecks 
// -n -> to use commands with notes
// -b -> browse all notes / flashcard decks
// -r <note/flashdeck name> -> open note / flashdeck 
// -e <note/flashdeck name> -> edit note / flashdeck
// -a <note/flashdeck name> -> create note / flashdeck
// -d <note/flashdeck name> -> delete note / flashdeck
// -h -> display help


int main(int argc, char *argv[]) {
	if (argc < 2){
		printf("Please enter valid flag, use -h flag for man pages.");
	}
	for (int i = 1; i < argc; i++){
		if (argv[i][0] == '-') {
			switch(argv[i][1]) {
				case 'f':
					printf("Flashcards Mode");
					break;
				case 'n':
					printf("Notes Mode");
					break;
				case 'b':
					printf("Browse");
					break;
				case 'r':
					printf("Read");
					break;
				case 'e':
					printf("Edit");
					break;
				case 'a':
					printf("Create");
					break;
				case 'd':
					printf("Delete");
					break;
				case 'h':
					printf("Help");
					break;
			}
		}
	}
	return 0;
}