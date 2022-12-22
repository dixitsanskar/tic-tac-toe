

// tic tac  toe
#include<bits/stdc++.h>
using namespace std;
class player
{
  string n1, n2, w;
  char a[3][3];
public:
  int read ()
  {
    cout << "Enter name of player 1:" << endl;
    cin >> n1;
    cout << "Enter name of player 2:" << endl;
    cin >> n2;
    cout << n1 << " takes X \n" << n2 << " takes O" << endl;
    return 0;
  }
  int input ()
  {
    int u = 0;
    for (int y = 0; y < 3; y++)
      {
	for (int w = 0; w < 3; w++)
	  {
	    a[y][w] = '1' + u;
	    u++;
	  }
      }
    int choice[100];
    int k = 1;
    int cu = 1;
    int c, m;
    string n;
    char f;
    while (k != 0 && cu != 10)
      {
	if (cu % 2 == 0)
	  {
	    n = n1;
	    f = 'X';
	  }
	else
	  {
	    n = n2;
	    f = 'O';
	  }
	for (int i = 0; i < 3; i++)
	  {cout<<"\t";
	    for (int j = 0; j < 3; j++)
	      {
		cout <<" " <<a[i][j];
	      } cout << endl;
	  }
	int r = 1;
	while (r != 0)
	  {

	    cout << "Player :" << n <<
	      "'s chance :: Please select a no. to place " << f << endl;
	    cin >> c;

	    for (int l = 0; l < 9; l++)
	      {
		if (c == choice[l])
		  {
		    m = 0;
		    break;
		  }
		else
		  m++;
	      }
	    if (m > 0)
	      {
		if (c > 3)
		  a[1][c - 4] = f;
		else if (c > 6)
		  a[2][c - 7] = f;
		else if (c < 4)
		  a[0][c - 1] = f;
		r = 0;
	      }
	    else if (c < 0 && c > 9)
	      {
		cout << "invalid choice";
		r = 1;
	      }
	    else
	      {
		cout << "Choice already exist" << endl;
		r = 1;
	      }

	    choice[cu - 1] = c;
	  }
	cu++;
	if (cu >= 5)
	  {
	    if ((a[0][0] =='X'&& a[0][1] =='X'&& a[0][2] == 'X'
		)|| (a[0][0] =='X'&& a[1][0] =='X'&& a[2][0] == 'X'
		)|| (a[0][0] =='X'&& a[1][1] =='X'&& a[2][2] == 'X'
		)|| (a[1][0] == 'X'&&a[1][1] =='X'&& a[2][2] == 'X'
		)|| (a[2][0] =='X'&& a[2][1] =='X'&& a[2][2] == 'X'
		)|| (a[0][2] =='X'&& a[1][1] =='X'&& a[2][0] == 'X'
		)|| (a[0][2] == 'X'&&a[1][2] == 'X'&&a[2][2] == 'X'
		)|| (a[0][1] == 'X'&&a[1][1] == 'X'&&a[2][1] == 'X'))
	      {
	
		w = n1;
	return 0;
	      }
	    else if ((a[0][0] =='O'&& a[0][1] =='O'&& a[0][2] == 'O' )|| (a[0][0] =='O'&& a[1][0] =='O'&& a[2][0] == 'O')|| (a[0][0] =='O'&& a[1][1] =='O'&& a[2][2] == 'O') || (a[1][0] =='O'&& a[1][1] =='O'&& a[2][2] == 'O')|| (a[2][0] =='O'&& a[2][1] =='O'&& a[2][2] == 'O')|| (a[0][2] =='O'&& a[1][1] =='O'&& a[2][0] == 'O')|| (a[0][2] == 'O'&&a[1][2] == 'O'&&a[2][2] == 'O')|| (a[0][1] == 'O'&&a[1][1] =='O'&& a[2][1] == 'O'))
	      {
	
		w = n2;
			return 0;
	      }
	    else
	      {
		w = "No winner";

	      }
	  }

      }
    return 0;
  }


  void result ()
  {
      for (int i = 0; i < 3; i++)
	  {cout<<"\t";
	    for (int j = 0; j < 3; j++)
	      {
		cout <<"  " <<a[i][j];
	      } cout << endl;
	  }
    cout << "Winner of the game is : " << w << endl;

  }
};

int
main ()
{
  int n = 1;
  cout << "\t\t\t ******TIC-TAC-TOE game******" << endl;
  while (n != 0)
    {
      player p;
      p.read ();
      p.input ();
      p.result ();
      cout << "\t\t\t Press:";
      cout << "\t\t\t 1. Play Again" << endl;
      cout << "\t\t\t 2. Exit" << endl;
      int mn = 1, k;
      cin >> k;
      while (mn != 0)
	{
	  if (k == 1)
	    {
	      n = 1;
	      mn = 0;
	    }
	  else if (k == 2)
	    {
	      n = 0;
	      mn = 0;
	    }
	  else
	    {
	      cout << "Wrong choice";
	      mn = 1;
	    }
	}
    }
}

