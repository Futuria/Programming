#include <bits/stdc++.h>
using namespace std;

int c,total;
string input;
map<char,int>m;

void points(string type, int pos,int end){
  //print card type
	printf("%s ",type.c_str());
  //print each card from the type. then add to count.
	for(int i = pos+1; i < end;i++){
		printf("%c ",input[i]);
		c+=m[input[i]];
	}
  //three conditions to calculate simpleton, doubleton, or void.
	if(end-pos==1)c+=3;
	if(end-pos==2)c+=2;
	if(end-pos==3)c+=1;
	printf("%d\n",c);
	total+=c;
	c = 0;
}

int main(){
  // pre define map of values correspond to each card.
  for(char i = 2; i <= '9';i++)
	m[i] = 0;
	m['J'] = 1;
	m['Q'] = 2;
	m['K'] = 3;
	m['A'] = 4;
  //input
	cin >> input;
  //output
	printf("Cards Dealt              Points\n");
  // find each position of each card type.
	int cl = input.find('C'), d = input.find('D'), h = input.find('H'), sp = input.find('S');
	points("Clubs",cl,d);
	points("Diamonds",d,h);
	points("Hearts",h,sp);
	points("Spades",sp,input.size());
  //output final line
	printf("			Total %d\n",total);
	return 0;
}
