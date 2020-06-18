void transform_str(const char* str, int cout_str)
{
  char* alph[26]= {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
  char* big_alph[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
  char* other_char[3] = {" ",",","."};
  char* transform_str[999];
  int k = 0;
  for (int i=0;i<cout_str;i++)
  {
    for(int j=0;j<26;j++)
    {
      if (str[i] == *alph[j])
      {
        transform_str[k] = "a";
        k++;
        break;
      }
      if (str[i] == *big_alph[j])
      {
        transform_str[k] = "b";
        k++;
        break;

      }
      if (str[i] == *other_char[0])
      {
        transform_str[k] = "b";
        transform_str[k+1] = "b";
        transform_str[k+2] = "a";
        transform_str[k+3] = "b";
        transform_str[k+4] = "a";
        k=k+5;
        break;
      }
      if (str[i] == *other_char[1])
      {
        transform_str[k] = "b";
        transform_str[k+1] = "b";
        transform_str[k+2] = "b";
        transform_str[k+3] = "a";
        transform_str[k+4] = "a";
        k=k+5;
        break;
      }
      if (str[i] == *other_char[2])
      {
      transform_str[k] = "b";
      transform_str[k+1] = "b";
      transform_str[k+2] = "a";
      transform_str[k+3] = "b";
      transform_str[k+4] = "b";
      k=k+5;
      break;
      }
    }
  }
  for (int u=0;u<k;u++)
  {
    printf("%s",transform_str[u]);
  }
  //printf("%d\n",k);
  printf("\n");
  printf("%d\n",k);
  for (int d=0;d<k;d++)
  {
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'a' && *transform_str[d+2] == 'a' && *transform_str[d+3]== 'a' && *transform_str[d+4] == 'a')
    {
      printf("%c",'a');
      d=d+3;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'a' && *transform_str[d+2] == 'a' && *transform_str[d+3] == 'a' && *transform_str[d+4] == 'b')
    {
      printf("%c",'b');
      if (d+3<=k)
      {
        d=d+3;
      }

    }
    if (*transform_str[d] == 'a'&& *transform_str[d+1] == 'a' && *transform_str[d+2] == 'a' && *transform_str[d+3] == 'b' && *transform_str[d+4] == 'a')
    {
      printf("%c",'c');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'a' && *transform_str[d+2] == 'a' && *transform_str[d+3] =='b' && *transform_str[d+4] == 'b')
    {
      printf("%c",'d');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'a' && *transform_str[d+2] == 'b' && *transform_str[d+3] == 'a' && *transform_str[d+4] == 'a')
    {
      printf("%c",'e');
      d=d+4;
    }
    else
    if(*transform_str[d] =='a' && *transform_str[d+1] == 'a' && *transform_str[d+2] == 'b' && *transform_str[d+3] == 'a' && *transform_str[d+4] == 'b')
    {
      printf("%c",'f');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'a' && *transform_str[d+2]=='b' && *transform_str[d+3] =='b' && *transform_str[d+4] == 'a')
    {
      printf("%c",'g');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'a' && *transform_str[d+2] == 'b' && *transform_str[d+3] == 'b'&& *transform_str[d+4]=='b')
    {
      printf("%c",'h');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'b' && *transform_str[d+2] == 'a' && *transform_str[d+3] == 'a' && *transform_str[d+4] == 'a')
    {
      printf("%c",'i');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'b' && *transform_str[d+2] == 'a' && *transform_str[d+3] == 'a' && *transform_str[d+4] =='b')
    {
      printf("%c",'j');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'b' && *transform_str[d+2] =='a' && *transform_str[d+3] == 'b' && *transform_str[d+4] == 'a')
    {
      printf("%c",'k');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'b' && *transform_str[d+2] =='a' && *transform_str[d+3] =='b' && *transform_str[d+4] == 'b')
    {
      printf("%c",'i');
      d=d+4;
    }
    else
    if (*transform_str[d] =='a' && *transform_str[d+1] == 'b' && *transform_str[d+2] == 'b' && *transform_str[d+3] == 'a' && *transform_str[d+4] == 'a')
    {
      printf("%c",'m');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'b' && *transform_str[d+2] == 'b' && *transform_str[d+3] =='a' && *transform_str[d+4]=='b')
    {
      printf("%c",'n');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'b' && *transform_str[d+2] == 'b' && *transform_str[d+3] == 'b' && *transform_str[d+4] == 'a')
    {
      printf("%c",'o');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'a' && *transform_str[d+1] == 'b' && *transform_str[d+2] == 'b' && *transform_str[d+3] =='b' && *transform_str[d+4] == 'b')
    {
      printf("%c",'p');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'b' && *transform_str[d+1] == 'a' && *transform_str[d+2] == 'a' && *transform_str[d+3] == 'a' && *transform_str[d+4] == 'a')
    {
      printf("%c",'q');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'b' && *transform_str[d+1] == 'a' && *transform_str[d+2]=='a' && *transform_str[d+3] == 'a' && *transform_str[d+4] == 'b')
    {
      printf("%c",'r');
      d=d+4;
    }
    else
    if (*transform_str[d] == 'b' && *transform_str[d+1] == 'a' && *transform_str[d+2] == 'a' && *transform_str[d+3] == 'b' && *transform_str[d+4] == 'a')
    {
      printf("%c",'s');
      d=d+4;
    }
  }
}
