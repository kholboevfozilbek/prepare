
#include<iostream>
#include<string>

std::string how_much_i_love_you(int nb_petals);

int main()
{
    int n;
    std::cin >> n;

    std::cout << how_much_i_love_you(n) << " \n\n";

    return 0;
}

std::string how_much_i_love_you(int nb_petals) {
  std::string arr[6] = {
    "I love you",
    "a little",
    "a lot",
    "passionately",
    "madly",
    "not at all"
  };
  
  do 
  {
    for(int i=0; i<6; ++i)
    {
        --nb_petals;
        if(nb_petals == 0)
        {
            return arr[i];
        }
      
    }
  } while(nb_petals > 0);
  
}