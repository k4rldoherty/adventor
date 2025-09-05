#include "./output/output.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Command {
  char *name;
  void (*func)(int argCount, char **args);
} command_t;

// generate
// can have arguments for year and day
// or only year which will generate as many days as it can
// 25 in cases of completed years
// folder structure:
// make a folder <GENERATE_PATH>/advent-of-code/<YEAR>/<DAY>
void handle_generate(int argCount, char **args) {
  printf("calling %s generate with %d args\n", args[0], argCount);
  printf(":D");
}

void handle_help(int argCount, char **args) {
  printf("calling %s help with %d args\n", args[0], argCount);
  print_help();
}

void handle_reset(int argCount, char **args) {
  printf("calling %s reset with %d args\n", args[0], argCount);
}

// used to set the path that the generation will be carried out
// if it is not ran prior to a generation call, the default path will be
// selected
void handle_set_generate_path(int argCount, char **args) {
  printf("calling %s set-generate-path with %d args\n", args[0], argCount);
}

int main(int argc, char **argv) {
  command_t commands[] = {{"generate", handle_generate},
                          {"help", handle_help},
                          {"reset", handle_reset},
                          {"set-generate-path", handle_set_generate_path}};
  size_t commandLength = sizeof(commands) / sizeof(commands[0]);

  if (argc == 1) {
    print_overview();
    return EXIT_SUCCESS;
  }

  for (size_t i = 0; i < commandLength; i++) {
    if (strcmp(commands[i].name, argv[1]) == 0) {
      commands[i].func(argc, argv);
      return EXIT_SUCCESS;
    }
  }

  print_invalid_arg();
  return EXIT_SUCCESS;
}
