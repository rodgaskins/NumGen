#include <random>
#include <string>
#include <iostream>
#include "Header.h"
#include "Data.h"
#include "Math.h"

using namespace std;
Data d;
//extern Math m;
extern string version;



int main()
{
	//m.mMath();
	random_device rd;   // non-deterministic generator  
	mt19937 gen(rd());  // to seed mersenne twister.  
	uniform_int_distribution<> dist(1, 6); // distribute results between 1 and 6 inclusive.  
	//Begin Random Roll Execution
	while (d.ans == d.yes)
	{
		//Exe
		//Exe Input
		std::cout << endl << "Enter the Number of Rolls per Turn" << endl;
		std::cin >> d.NR;
		std::cin.ignore();
		std::cout << "Enter the Number of Turns per Trial" << endl;
		std::cin >> d.NT;
		std::cin.ignore();
		std::cout << "Enter the Number of Trials per Execution of Program" << endl;
		std::cin >> d.NTr;
		std::cin.ignore();
		cout << endl;
		for (int k = 0; k < d.NTr; ++k)
		{
			//Trial
			std::cout << "Trial Number " << d.Tr_Tr << " **********************************************************************";
			std::cout << endl;
			for (int j = 0; j < d.NT; ++j)
			{
				//Turn
				std::cout << " Turn " << d.T_R << " |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| " << endl;
				for (int i = 1; i <= d.NR; ++i)
				{
					//Roll
					//Roll Calculations
					 d.Rv_R   =   dist(gen);			//Roll Calc 
					 d.Tv_R   =    d.Tv_R  + d.Rv_R;
					d.Trv_R   =   d.Trv_R  + d.Rv_R;
					 d.Ev_R   =    d.Ev_R  + d.Rv_R; 
					//Roll Avg Calcs
					 d.A_R_R  = static_cast<double>(d.Rv_R)  / static_cast<double>(d.R_R);
					//Roll to Turn Transfers
					d.A_R_T  = d.A_R_R;	//Roll Values
					 d.Rv_T  = d.Rv_T + d.Rv_R;//Add roll to Banks
					 d.Rv_Tr = d.Rv_Tr + d.Rv_R;
					 d.Rv_E = d.Rv_E + d.Rv_R;
					 d.Tv_T  = d.Tv_T + d.Tv_R;
					d.Trv_T  = d.Trv_T + d.Trv_R;
					 d.Ev_T  = d.Ev_T + d.Ev_R;
				     d.A_T_R = static_cast<double>(d.Rv_T) / static_cast<double>(d.R_T);
					d.A_Tr_R = static_cast<double>(d.Rv_Tr) / static_cast<double>(d.R_Tr);
					 d.A_E_R = static_cast<double>(d.Rv_E) / static_cast<double>(d.R_E);
					 d.A_R_Tr= static_cast<double>(d.Rv_Tr) / static_cast<double>(d.R_Tr);
					//Roll Output 
					std::cout << "Roll " << d.R_R << " Results " << endl;
					std::cout << "      Values = /Roll = " << d.Rv_R << " /Turn = " << d.Rv_T << " /Trial = " << d.Rv_Tr << " /Execution = " << d.Rv_E << endl;
					std::cout << " Avg (Means) = /Roll = " << d.A_R_R << " /Turn = " << d.A_T_R << " /Trial = " << d.A_Tr_R << " /Execution = " << d.A_E_R << endl;
					//Roll Resets
					d.R_R = 1;		//Counters
					d.A_R_R = 0.0;	//Roll Values
					d.Rv_R = 0;
					d.Tv_R = 0;
					d.Trv_R = 0;
					d.Ev_R = 0;
					//Roll Count Increments
					d.R_R++;
					d.R_T++;
					d.R_Tr++;
					d.R_E++;
					//Roll End
				}
				//Turn Calculations
				//Turn Avg Calcs
				 d.A_R_T  = static_cast<double>(d.Tv_R)  / static_cast<double>(d.T_R);
				 d.A_T_T  = static_cast<double>(d.Tv_T)  / static_cast<double>(d.T_T);
				d.A_Tr_T  = static_cast<double>(d.Tv_Tr) / static_cast<double>(d.T_Tr);
				 d.A_E_T  = static_cast<double>(d.Tv_E)  / static_cast<double>(d.T_E);
				//Turn Output
				std::cout << "Turn " << d.T_R << " Results";
				std::cout << endl;
				std::cout << "Roll " << d.R_T << " = " << d.Rv_T << " Turn " << d.T_T << " = " << d.Tv_T;
				std::cout << endl;
				std::cout << " Avg Turn " << d.A_T_R << " Avg Turns " << d.A_T_T;
				std::cout << endl;
				//Turn to Trial Transfers
				d.A_R_Tr = d.A_R_T;  		//Trial Calc
				d.Rv_Tr = d.Rv_T;
				d.Tv_Tr = d.Tv_T;
				d.Trv_Tr = d.Trv_T;
				d.Ev_Tr = d.Ev_T;
				//Turn Input
				std::cout << "Hit Enter for next Roll...";
				std::cin.ignore();
				std::cout << endl;
				//Turn Reset
				d.T_R++;		
				d.T_T++;
				d.T_Tr++;
				d.R_R = 1;
				d.Rv_T = 0;
				d.Tv_T = 0;
				d.A_R_T = 0.0;
				//Turn End
			}
			//Trial Calculations
			 d.A_R_T = static_cast<double>(d.Trv_R)  / static_cast<double>(d.Tr_R);
			 d.A_T_T = static_cast<double>(d.Trv_T)  / static_cast<double>(d.Tr_T);
			d.A_Tr_T = static_cast<double>(d.Trv_Tr) / static_cast<double>(d.Tr_Tr);
			 d.A_E_T = static_cast<double>(d.Trv_E)  / static_cast<double>(d.Tr_E);
			//Trial Output
			std::cout << "Trial "<< d.Tr_Tr << " Results";
			std::cout << endl;
			std::cout << "Roll " << d.R_T << " = " << d.Rv_T << " Turn " << d.T_T << " = " << d.Tv_T;
			std::cout << endl;
			std::cout << " TL Avg Trial " << d.A_Tr_R << " TL Avg Trial Trial " << d.A_Tr_T;
			std::cout << endl;
			std::cout << "Hit Enter for next Roll...";
			std::cin.ignore();
			std::cout << endl;
			//Trial to Execution Transfers
			d.A_R_E = d.A_R_Tr; //Execution Calc
			d.Rv_E = d.Rv_Tr;
			d.Tv_E = d.Tv_Tr;
			d.Trv_E = d.Trv_Tr;
			d.Ev_E = d.Ev_Tr;
			//Trial Reset
			d.Tr_R++;
			d.Tr_T++;
			d.Tr_Tr++;
			d.T_R = 1;
			d.Trv_T = 0;
			d.Rv_T = 0;
			d.T_T = 0;
			d.A_R_Tr = 0.0;
			//Trial End
		}
		//Exe Calculation
		 d.A_R_T = static_cast<double>(d.E_R)  / static_cast<double>(d.E_R);
		 d.A_T_T = static_cast<double>(d.E_T)  / static_cast<double>(d.E_T);
		d.A_Tr_T = static_cast<double>(d.E_Tr) / static_cast<double>(d.E_Tr);
		 d.A_E_T = static_cast<double>(d.E_E)  / static_cast<double>(d.E_E);
		//Exe Output
		std::cout << "------------------------------------------------------------------------------------ Exe Results";
		std::cout << endl;
		std::cout << "Exe "<<d.E_E;
		std::cout << endl;
		std::cout << "Exe Rolls " << d.R_Tr << " = " << d.Rv_Tr << "Exes " << d.Tr_Tr << " = " << d.Trv_Tr;
		std::cout << endl;
		std::cout << " Avg TL Rolls " << d.A_R_Tr << "Avg TL Turns " << d.A_T_Tr << " TL Avg Exes Trial" << d.A_Tr_Tr;
		std::cout << endl;
		//Exe Reset
		d.T_T = 1;
		d.Tr_T = 0;
		d.Tv_T = 0;
		d.Trv_T = 0;
		d.A_R_E = 0.0;
		//Exe End
		std::cout << endl << "Do it again? y or n ";
		std::cin >> d.ans;
		std::cin.ignore();
	}
	if (d.ans = d.no)
	{
		std::cout<<"Thanks for using NumGen Version "<< version;
		getchar();
		return 0;
	}	
}

Data::Data()
{
}


Data::~Data()
{
}
