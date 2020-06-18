int my_strln(const char* s)
{
  int strlength = 0;
  while (s[strlength]!='\0')
  {
    strlength++;
  }
  return strlength;
}
