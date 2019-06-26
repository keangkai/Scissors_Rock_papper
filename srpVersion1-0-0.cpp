#include <iostream> 
#include <cstdlib> 

using namespace std; 

int main() 
{ 
    string Player_One; 
    string Player_Two; 
    string o; 
    string y; 
    string w;
    int rounds;
	int Total_round;
	int total_player_1 = 0;
    int total_player_2 = 0;
    
    cout << "How many game? :";
	cin >> rounds;
	
	for (int x = 1; x <= rounds; x++) {
	    
	    
	    int Player_One_point = 0;
	    int Player_Two_point = 0;

        cout << "\nPlayer One and Player Two please enter your move: ('w' for Paper, 'o' for Rock, 'y' for Scissor)#" << x;  
        cin >> Player_One >> Player_Two; 
    
    
        if (Player_One == Player_Two) 
        { 
            cout <<"\nThere is a tie"<<endl; 
        } 
    
        else if ( Player_One == "o" && Player_Two == "w") 
        { 
            Player_Two_point++;
            cout << "\nPlayer 2 win"; 
        } 
        else if (Player_One == "o" && Player_Two == "y") 
        { 
            Player_One_point++;
            cout << "\nPlayer 1 win"; 
        } 
    
        else if (Player_One == "w" && Player_Two == "o") 
        { 
            Player_One_point++;
            cout <<"\nPlayer 1 win"; 
        } 
        else if ( Player_One == "w" && Player_Two == "y") 
        { 
            Player_Two_point++;
            cout <<"\nPlayer 2 win"; 
        } 
        else if ( Player_One == "y" && Player_Two == "o") 
        { 
            Player_Two_point++;
            cout <<"\nPlayer 2 win"; 
        } 
        else if (Player_One == "y" && Player_Two == "w") 
        { 
            Player_One_point++;
            cout <<"\nPlayer 1 win "; 
        } else {
            cout <<"\n ------------";
        }
        
        total_player_1+=Player_One_point;
        total_player_2+=Player_Two_point;
        
        cout <<"\n ------------ " << total_player_1;
        cout <<"\n ------------ " << total_player_2;
    }
    
    if ( total_player_1 > total_player_2){
        cout <<"\n Result: Player 1 win " << total_player_1 << " of " << rounds << " games"; 
    }else if ( total_player_1 < total_player_2 ) {
        cout <<"\n Result: Player 2 win " << total_player_2 << "of" << rounds << " games";
    }else if ( total_player_1 == total_player_2 ) {
        cout <<"\nResult: It is a tie ";
    }
    
    return 0; 
}