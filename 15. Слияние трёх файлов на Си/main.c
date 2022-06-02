
int main()
{
    FILE *file1, *file2, *file3, *output;

  char c;

  file1 = fopen(argv[1], "r");
  file2 = fopen(argv[2], "r");
  file3 = fopen(argv[3], "r");
  output = fopen(argv[4], "w");

  while ((c = fgetc(file1)) != EOF)
    fputc(c, output);
  while ((c = fgetc(file2)) != EOF)
    fputc(c, output);
  while ((c = fgetc(file3)) != EOF)
    fputc(c, output);

  fclose(file1);
  fclose(file2);
  fclose(file3);
  fclose(output);

  return 0;
}
