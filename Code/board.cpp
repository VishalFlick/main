#include<iostream>

int main()
{
	char board[3][3];
	board[0][0] = 'x';
	board[0][1] = 'x';
	board[0][2] = 'x';
	board[1][0] = 'x';
	board[1][1] = 'x';
	board[1][2] = 'x';
	board[2][0] = 'x';
	board[2][1] = 'x';
	board[2][2] = 'x';

	for(int i = 0; i < 3; i++)
	{
		std::cout<<board[i][0]<<" "<<board[i][1]<<" "<<board[i][2]<<"\n";
	}
	return 0;
}