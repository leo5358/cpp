#include<iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	int cards[300]={}, new_cards[300]={};
	for(int i=0; i<N; i++)
	{
		cin >> cards[i];
	}
	for(int i=0; i<M; i++)
	{
		for(int c=0; c<N/2; c++)
		{
			new_cards[c*2] = cards[c];
			new_cards[c*2+1] = cards[c+N/2];
		}
		// for(int c=0; c<N; c++)
		// {
		// 	cards[c] = new_cards[c];
		// }
	}
	for(int i=0; i<N; i++)
	{
		cout << new_cards[i];
		if(i!=N-1) cout << " ";
	}
	cout << endl;


}