#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int jogador, cpu;
    
    cout<<"How to Play Rock, Paper, Scissors, Lizard, Spock"<<endl;
    cout<<endl;
    
    do{
    cout<<"Escolha do jogador 1"<<endl;
    cout<<"1 - Rock"<<endl;
    cout<<"2 - Paper"<<endl;
    cout<<"3 - Scissors"<<endl;
    cout<<"4 - Lizard"<<endl;
    cout<<"5 - Spock"<<endl;
    cin>>jogador;
	}while(jogador < 0 || jogador > 5);
    cout<<endl;
    
    srand(time(NULL));
   	cpu = rand()%4;
   	
   	cout<< "Computado escolheu: " << cpu << endl;
   	
    
    if(jogador == cpu)
    {
    	cout<<"Empate"<<endl;
	}
	else if(jogador == 1 && cpu == 2)
	{ 
		cout<<"Vitoria do CPU";
	}
	else if(jogador == 1 && cpu == 3)
	{
		cout<<"Vitoria do Jogador";
	} 
	else if(jogador == 1 && cpu == 4)
	{
		cout<<"Vitoria do Jogador";
	} 
    else if(jogador == 1 && cpu == 5)
	{
		cout<<"Vitoria do CPU";
	} 
   	else if(jogador == 2 && cpu == 1)
	{
		cout<<"Vitoria do Jogador";
	} 
	else if(jogador == 2 && cpu == 3)
	{
		cout<<"Vitoria do CPU";
	} 
	else if(jogador == 2 && cpu == 4)
	{
		cout<<"Vitoria do Jogador";
	} 
	else if(jogador == 2 && cpu == 5)
	{
		cout<<"Vitoria do CPU";
	} 
	else if(jogador == 3 && cpu == 1)
	{
		cout<<"Vitoria do CPU";
	} 
	else if(jogador == 3 && cpu == 2)
	{
		cout<<"Vitoria do Jogador";
	}
	else if(jogador == 3 && cpu == 4)
	{
		cout<<"Vitoria do Jogador";
	}
	else if(jogador == 3 && cpu == 5)
	{
		cout<<"Vitoria do CPU";
	}
	else if(jogador == 4 && cpu == 1)
	{
		cout<<"Vitoria do CPU";
	}
	else if(jogador == 4 && cpu == 2)
	{
		cout<<"Vitoria do Jogador";
	}
	else if(jogador == 4 && cpu == 3)
	{
		cout<<"Vitoria do CPU";
	}
	else if(jogador == 4 && cpu == 5)
	{
		cout<<"Vitoria do Jogador";
	}
	else if(jogador == 5 && cpu == 1)
	{
		cout<<"Vitoria do Jogador";
	}
	else if(jogador == 5 && cpu == 2)
	{
		cout<<"Vitoria do CPU";
	}
	else if(jogador == 5 && cpu == 3)
	{
		cout<<"Vitoria do Jogador";
	}
	else if(jogador == 5 && cpu == 4)
	{
		cout<<"Vitoria do CPU";
	}
	
     return 0;
   
}
