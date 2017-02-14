#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>

int main(int argc, char** argv) {
  puts("shlisp v0.0.1");
  puts("Press Ctrl + C to exit REPL\n");

  while (1) {
    // Get user input from prompt and add to history.
    char* input = readline("shlisp> ");
    add_history(input);

    // Echo input back to user and free input.
    printf("You wrote \"%s\"\n", input);
    free(input);
  }

  return 0;
}
