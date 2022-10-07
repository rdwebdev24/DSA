// FUNCTION - 1 TRANSFORM TEXT //
char TransformText(char s)
{
     if (s >= 'A' && s <= 'Z')
     {
          s = s - 'A' + 'a';
     }

     return s;
}

// FUNCTION - 2 CHECK PALINDROME //
bool CheckPalindrome(string s)
{
     int i = 0;
     int j = s.length() - 1;
     while (i < j)
     {
          if (s[i] >= ' ' && s[i] <= '@')
          {
               i++;
          }
          if (s[j] >= ' ' && s[j] <= '@')
          {
               j--;
          }
          if (TransformText(s[i]) == TransformText(s[j]))
          {
               i++;
               j--;
          }
          else
          {
               return false;
          }
     }
     return i >= j;
}

//  FUNCTION - 3 SORTING A STRING //

bool Anagram(string s, string t)
{
     sort(s.begin(), s.end());
     sort(t.begin(), t.end());
     int i = 0;

     if (s.length() != t.length())
     {
          return false;
     }
     while (i < s.length())
     {
          if (s[i] != t[i])
          {
               return false;
          }
          i++;
     }
     return i == s.length();
}

// FUNCTION - 4 PRINT DUPLICATES IN THE STRING //
void PrintDuplicates(string s)
{
     sort(s.begin(), s.end());
     int cnt = 1;
     for (int i = 0; i < s.length(); i++)
     {
          if (s[i] == s[i + 1])
          {
               cnt++;
          }
          else
          {
               if (cnt > 1)
               {
                    cout << s[i] << " occurs " << cnt << " times " << endl;
                    cnt = 1;
               }
          }
     }
}

// FUNCTION - 5 //

void swap(char *a, char *b)
{
     char temp = *a;
     *a = *b;
     *b = temp;
}

// FUNCTION - 6 //
string reverseOnlyLetters(string s)
{
     int i = 0;
     int j = s.size() - 1;
     while (i < j)
     {
          if (isalpha(s[i]) and isalpha(s[j]))
          {
               char temp = s[i];
               s[i] = s[j];
               s[j] = temp;
               i++;
               j--;
          }
          else if (isalpha(s[i]) and !isalpha(s[j]))
          {
               j--;
          }
          else if (!isalpha(s[i]) and isalpha(s[j]))
          {
               i++;
          }
          else
          {
               i++;
               j--;
          }
     }
     return s;
}

// FUNCTION - 7 //
bool panagram(string s)
{
     vector<int> check(26, 0);
     for (int i = 0; i < s.size(); i++)
     {
          // if(s[i]==' '){
          //      continue;
          // }
          int idx = s[i] - 'a';
          check[idx]++;
     }

     for (int i = 0; i < check.size(); i++)
     {
          if (check[i] == 0)
          {
               return false;
          }
     }
     return true;
}

// FUNCTION - 8 //
string removeDigit(string s, char digit)
{
     string maxstr = "0";
     int cnt = 0;
     for (int i = 0; i < s.size(); i++)
     {
          if (s[i] == digit)
          {
               string s1 = s.substr(0, i);
               string s2 = s.substr(i + 1, s.size());
               string newStr = s1 + s2;
               int k = 0, j = 0;
               while (k < newStr.size() && j < maxstr.size())
               {
                    if (newStr[k] == maxstr[j])
                    {
                         continue;
                    }
                    else if (newStr[k] > maxstr[j])
                    {
                         maxstr = newStr;
                         cout << maxstr << endl;
                         break;
                    }
                    else
                    {
                         maxstr = maxstr;
                         break;
                    }
                    ++k;
                    ++j;
               }
          }
     }
     return maxstr;
}