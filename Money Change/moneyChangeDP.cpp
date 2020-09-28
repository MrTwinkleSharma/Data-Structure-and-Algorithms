#include <iostream>
#include<algorithm>
using namespace std;
int get_change(int money) {
   int coins[] = {1,5,7};
   
   //checking whether we reached at end means we have changed all money with our denominations
   if(money==0)
   return 0;
   
   int ans = -1;  // -1 is Just Indication or Flag to be used later
   
   // when coins are variable change 3 to number of coins
   for(int i=0;i<3;i++) 
   {
   	    if(money - coins[i] >= 0)
   	    {
   	    	int subAns = 0;   //Initializing with 0 or can say simply creating a variable which can hold the value of subAns of Problem
   			
			//Main Recursion 
			subAns = get_change(money-coins[i]);
			
			//if ans is not filled yet or filled but more subAns has more optimal answer then update it 
			if(subAns+1 < ans || ans ==-1)
			ans = subAns+1;
		}
   	    
   }
  return ans;
}

int main() {
  int m;
  std::cin >> m;
  
  // Final answer to be return by function
  int ans = get_change(m);
  std::cout << ans << '\n';
}
