#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define scr_width 34
#define scr_height 15
enum kind {
	k_ducks,
	k_floats,
};
char *floats[] = {
	"^   ^   ^   ^   ^  ",
	"|---|---|---|---|--",
	"|---|---|---|---|--",
	"|---|---|---|---|--",
	(char *)1,
	"~~~~~~~~~~~~~~~~~~~",
	"#_#_#_#_#_#_#_#_#_#",
	"#_#_#_#_#_#_#_#_#_#",
	"#_#_#_#_#_#_#_#_#_#",
	"#_#_#_#_#_#_#_#_#_#",
	(char *)1,
	"===================",
	"ooolooolooolooolooo",
	"ooolooolooolooolooo",
	"ooolooolooolooolooo",
	(char *)1,
	"fffffffffffffffffff",
	"mmmnumber 4mmmmmmmm",
	"mmmmmmmmmmmmmmmmmmm",
	"ggggggggggggggggggg",
	(char *)1,
	"fffffffffffffffffff",
	"mmmmmmmmmmmmmmmmmmm",
	"mmmmmnumber 5mmmmmm",
	"ggggggggggggggggggg",
	(char *)0,
};
/* ascii-art.de/ascii/def/ducks.txt 
l*



   _                                    _
  (.)                                  (.)
 _(\|                                  |/)_
\>_)                                    (_</

pils










       .-"""-.   _.---..-;  
      :.)     ;""      \/   
__..--'\      ;-"""-.   ;._ 
`-.___.^.___.'-.____J__/-._J

bug











                                  _.._
                                 /   a\__,
                                 \  -.___/
                                  \  \
                             (\____)  \
                         |\_(         ))
                    _____|   (_        /________
                         _\____(______/__
                     gnv      ______











     *
 *         ,,,
      ____()() }
      ======= (
              \\      \
               \\____===.       based on a duck by Marvin Bedard
         ______)  (  )\(____
        /  ___/    \ [%]__  \
       //||  //     \     ||\\
      || ||__^^^    ^^^___|| ||
ejm97 ||/____\_/----\_/_____\||
      | ____________________ ||
      || ||               || ||
      || ||               || ||
      || ||               || ||
      ||                     ||





              _.-.
         __.-' ,  \
        '--'-'._   \
                '.  \
                 )-- \ __.--._
                /   .'        '--.
               .               _/-._
               :       ____._/   _-'
                '._          _.'-'
                   '-._    _.'
                       \_|/
                      __|||
         snd          >__/'






                        __
                      /` ,\__
                     |    ).-'
                    / .--'
                   / /
     ,      _.==''`  \
   .'(  _.='         |
  {   ``  _.='       |
   {    \`     ;    /
    `.   `'=..'  .='
      `=._    .='
   jgs  '-`\\`__
            `-._{






                     _          _
                     \`.__..--'' `.
                     ( _          ,\
                    ( <_< < <   `','`.
                     \ (_< < <    \   `.
                      `. `----'   (  q _p
                        `-._  _.-' `-(_''\
                         (_'))--,      `._\
                            `-._<
                                    hjw




   __
__(o )
===  |
   | \___/|
   \ \=== |
    \_\==/
      ||
     ===  tre





                                                      ____
                                                     /    `.
                                                    /-----.|          ____
                                                ___/___.---`--.__.---'    `--.
                                  _______.-----'           __.--'             )
                              ,--'---.______________..----'(  __         __.-'
                                        `---.___,-.|(a (a) /-'  )___.---'
                                                `-.>------<__.-'
            ______                       _____..--'      //
    __.----'      `---._                `._.--._______.-'/))
,--'---.__              -_                  _.-(`-.____.'// \
          `-._            `---.________.---'    >\      /<   \
              \_             `--.___            \ \-__-/ /    \
                \_                  `----._______\ \  / /__    \
                  \                      /  |,-------'-'\  `-.__\
                   \                    (   ||            \      )
                    `\                   \  ||            /\    /
                      \                   >-||  @)    @) /\    /
                      \                  ((_||           \ \_.'|
                       \                    ||            `-'  |
                       \                    ||             /   |
                        \                   ||            (   '|
                        \                   ||  @)     @)  \   |
                         \                  ||              \  )
                          `\_               `|__         ____\ |
                             \_               | ``----'''     \|
                               \_              \    .--___    |)
                                 `-.__          \   |     \   |
                                      `----.___  \^/|      \/\|
                                               `--\ \-._  / | |   (FL)
                                                   \ \  `'  \ \
                                            __...--'  )     (  `-._
                                           (_        /       `.    `-.__
                                             `--.__.'          `.       )
                                                                 `.__.-'
                           .   :   .
                        !   \  |  /
       ('<     ('<     (@< - BLAM! -   ('<     ('<     ('<     ('<
     (<=)    (<=)    (<=)   / | | \  (<=)    (<=)    (<=)    (<=)
     ,-T-------T-------T---'  : :  ` --T-------T-------T-------T--,
    (O        O       O       O       O       O       O       O   O)
     `L-------L-------L-------L-------L-------L-------L-------L---'
     (=>)    (=>)    (=>)    (=>)    (=>)    (=>)    (=>)    (=>)
    >,)     >,)     >,)     >,)     >,)     >,)     >,)     >,)

cww


                      | | / /
                    \         /
                   \__   ____  /
                  /   \ /    \  |
  /|             /     |      \ \
 / |____________/     /        | |_____________/////////
<  |____________|     |        |(______________       ()
 \ |           /   () | ()     | |             \\\\\\\\\
  \|           |    __|__      | |
              _|___/___  \___  | |
        __----         ----__\---\_
       /                        __ |
       \____-------------______/  \
          \_____| /____________
                |/  |   |
                    |   |

unknown

                         _____
                     _-~~     ~~-_//
                   /~             ~\
                  |              _  |_
                 |         _--~~~ )~~ )___
                \|        /   ___   _-~   ~-_
                \          _-~   ~-_         \
                |         /         \         |
                |        |           |     (O  |
                 |      |             |        |
                 |      |   O)        |       |
                 /|      |           |       /
                 / \ _--_ \         /-_   _-~)
                   /~    \ ~-_   _-~   ~~~__/
                  |   |\  ~-_ ~~~ _-~~---~  \
                  |   | |    ~--~~  / \      ~-_
                   |   \ |                      ~-_
                    \   ~-|                        ~~--__ _-~~-,
                     ~-_   |                             /     |
                        ~~--|                                 /
                          |  |                               /
                          |   |              _            _-~
                          |  /~~--_   __---~~          _-~
                          |  \                   __--~~
                          |  |~~--__     ___---~~
                          |  |      ~~~~~
                          |  |


unknown


                          .oo.
                         o8888o
                        o888888o
                        88888888o
                        "8888""88o
              .o8888o.   888(   `"
            .o88888888o  "888
           o888888888888. 888o
      8o  o8888888888888888888
       888888888888888888888888
        88888888888888888888888
         88888888888888888DSI8"
         David S. Issel







From: Dave Bird 

  Actually, there are N Smith's standard ducks [I think he called 
  them "swans"].  You can easily learn to make the standard 
  three lines of  (@_ ,  \\\ \, and <_____) then vary the eyes
  or body position a bit.

                                
                  (o.                   H
      _o)         |  . :             (o]H
  \\\__/      \\\_|  : :.        \\\_\  H
  <____).....<_____).:.::.......<_____).H

 *
 * */
char *ducks[] = {
	"__(o )       ",
	"===  |       ",
	"   | \\___/|  ",
	"   \\ \\=== |  ",
	"    \\_\\==/   ",
	"      ||     ",
	"     ===  tre",
	(char *)1,
	" _          _",
	" \\`.__..--'' `.",
	" ( _          ,\\",
	"( <_< < <   `','`.",
	" \\ (_< < <    \\   `.",
	"  `. `----'   (  q _p",
	"    `-._  _.-' `-(_''\\",
	"     (_'))--,      `._\\",
	"        `-._<",
	(char *)1,
	"ddddd",
	"dd3dd",
	"ddddd",
	(char *)1,
	"ddddd",
	"dd4dd",
	"ddddd",
	(char *)0,
};
struct {
	char *line_start;
	char line[scr_width*2];
} buffer[scr_height];

struct sprite_index {
	int duck;
	int floats;
};

void init_buffer(void)
{
	for(int i = 0; i < scr_height; ++i) {
		buffer[i].line_start = buffer[i].line;
		memset(buffer[i].line,'_',scr_width*2);
	}
}
void print_buffer(void)
{
	char newline = 10;
	for(int i = 0; i < scr_height; ++i) {
		fwrite(buffer[i].line_start, 1, scr_width, stdout);
		fwrite(&newline, 1, 1, stdout);
	}
}
void debug_print_buffer(void)
{
	char newline = 10;
	for(int i = 0; i < scr_height; ++i) {
		fwrite(buffer[i].line, 1, scr_width*2, stdout);
		fwrite(&newline, 1, 1, stdout);
	}
}
int rand_range(int a) /* [0,a] */
{
	int bit = log2(a) + 1;
	int mask = 0;
	while(bit)
		mask |= 1 << --bit;
	int ret;
	do {
		ret = rand() & mask;
	} while(ret > a);
	return ret;
}
char **index_to_sprite(char ***s, int i)
{
	while(i) {
		if( **s == (char *)0)
			return NULL;
		if( *((*s)++) == (char *)1)
			--i;
	}
	return *s;
}

int print_sprites(struct sprite_index s)
{
	const unsigned int duck_offset = 9;
	const unsigned int floats_offset = 8;

	//printf("%d %d\n",s.duck, s.floats);

	char **p = ducks;
	p = index_to_sprite(&p, s.duck);
	// assert p points to start of duck sprite
	int row = 0;
	while(*p != (char *)1) {
		//printf("%s\n",*(p++));
		memcpy(
			buffer[row++].line + scr_width + duck_offset,
			*(p++),
			strlen(*p)
		);
		if(*p == (char *)0)
			break;
	}
	p = floats;
	index_to_sprite(&p, s.floats);
	while(*p != (char *)1) {
		//printf("%s\n",*(p++));
		memcpy(
			buffer[row++].line + scr_width + floats_offset,
			*(p++),
			strlen(*p)
		);
		if(*p == (char *)0)
			break;
	}
}
void next_float_to_buffer(void)
{
	int i;
	static int num_ducks = 0;
	static int num_floats = 0;
	if(!(num_ducks && num_floats)) {
		char **p = floats;
		while(*p) {
			if(*p == (char *)1)
				++num_floats;
			++p;
		}
		p = ducks;
		while(*p) {
			if(*p == (char *)1)
				++num_ducks;
			++p;
		}
	}
	struct sprite_index sp = {
		.duck = rand_range(num_ducks),
		.floats = rand_range(num_floats),
	};
	print_sprites(sp);
}
void scroll_buffer(void)
{
	int cur_width = buffer[0].line_start - buffer[0].line;
	switch(cur_width) {
	case scr_width:
		for(int i = 0; i < scr_height; ++i) {
			memcpy(buffer[i].line, buffer[i].line_start, scr_width);
			buffer[i].line_start = buffer[i].line;
			memset(buffer[i].line + scr_width,' ',scr_width);
		}
		break;
	case 1:
		next_float_to_buffer();
		break;
	}
	for(int i = 0; i < scr_height; ++i)
		*(buffer[i].line_start)++ = '0';
}
void place_cursor(void)
{
	char seq[20];
	sprintf(seq, "[%dF", scr_height+1);
	fwrite(seq, 1, strlen(seq), stdout);
}

/*
void rand_range_test(void)
{
	srand(time(NULL));
	for(int i = 0; i < 20; ++i) {
		printf("%d\n",rand_range(7));
	}
}
*/

/* parade of ducks. right to left */
int main(void)
{
	/*         make scene 2x as wide as screen when half point is reached, copy everything to the first half and move pointers back
	row  col      */

	srand(time(NULL));

	init_buffer();
	buffer[0].line[0] = 'T';
	buffer[0].line[1] = 'G';
	buffer[0].line[2] = 'A';
	buffer[0].line[3] = 'C';
		int count = 0;
	while(1) {
		//printf("%d %d\n",count, buffer[0].line_start - buffer[0].line);
		//printf("1234567889abcdef123456789a\n");
		print_buffer();
		//debug_print_buffer();
		fflush(stdout);
		place_cursor();
		getc(stdin);
		++count;
		scroll_buffer();
	}

	return 0;
}
