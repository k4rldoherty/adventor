#include <stdio.h>

void print_overview() {
  printf("========================================\n");
  printf("          Advent of Code CLI Tool      \n");
  printf("========================================\n");
  printf("This CLI tool helps you set up and\n");
  printf("structure your Advent of Code projects\n");
  printf("efficiently. It provides commands to\n");
  printf("create project directories, generate\n");
  printf("template files, and manage your solutions.\n");
  printf("\n");
  printf("Key Features:\n");
  printf("- Create a new project for each day\n");
  printf("- Generate template code files in various languages\n");
  printf("- Organize your solutions by year and day\n");
  printf("- Easily navigate between projects\n");
  printf("========================================\n");
}

void print_help() {
  printf("========================================\n");
  printf("                Help Menu              \n");
  printf("========================================\n");
  printf("Available Commands:\n");
  printf("1. adventor generate <year> <day>   - Create a new project for the "
         "specified year and day\n");
  printf("2. adventor list                    - List all existing projects\n");
  printf("3. adventor clean <year> <day>      - Remove the project for the "
         "specified year and day\n");
  printf("4. adventor help                    - Display this help menu\n");
  printf("5. adventor exit                    - Exit the program\n");
  printf("\n");
  printf("For more information on a specific command,\n");
  printf("type 'adventor help <command_name>'.\n");
  printf("========================================\n");
}

void print_invalid_arg() {
  printf("========================================\n");
  printf("            Invalid Argument            \n");
  printf("========================================\n");
  printf("Error: The arguments provided are invalid.\n");
  printf("Please check the command syntax and try again.\n");
  printf("\n");
  printf("Usage:\n");
  printf("  adventor generate <year> <day>\n");
  printf("  adventor list\n");
  printf("  adventor help\n");
  printf("  adventor exit\n");
  printf("\n");
  printf("For more information, type 'adventor help'.\n");
  printf("========================================\n");
}
