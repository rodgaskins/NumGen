#pragma once
class Data
{
public:
	Data();
	~Data();
	//______________________Counters
	int R_R = 1;			//Roll
	int R_T = 1;			//
	int R_Tr = 1;			//
	int R_E = 1;			//
	int T_R = 1;			//Turn
	int T_T = 1;			//
	int T_Tr = 1;			//
	int T_E = 1;			//
	int Tr_R = 1;			//Trial
	int Tr_T = 1;			//
	int Tr_Tr = 1;			//
	int Tr_E = 1;			//
	int E_R = 1;			//Exe
	int E_T = 1;			//
	int E_Tr = 1;			//
	int E_E = 1;			//
	
	//______________________Values		
	int Rv_R = 0;			//Roll
	int Tv_R = 0;			//
	int Trv_R = 0;			//
	int Ev_R = 0;			//

	int Rv_T = 0;			//Turn
	int Tv_T = 0;			//
	int Trv_T = 0;			//
	int Ev_T = 0;			//

	int Rv_Tr = 0;			//Trial
	int Tv_Tr = 0;			//
	int Trv_Tr = 0;			//
	int Ev_Tr = 0;			//

	int Rv_E = 0;			//Trial
	int Tv_E = 0;			//
	int Trv_E = 0;			//
	int Ev_E = 0;			//	

	//______________________Means
	double A_R_R = 0.0;		//Roll
	double A_T_R = 0.0;		//
	double A_Tr_R = 0.0;	//
	double A_E_R = 0.0;		//
	double A_R_T = 0.0;		//Turn
	double A_T_T = 0.0;		//
	double A_Tr_T = 0.0;	//
	double A_E_T = 0.0;		//
	double A_R_Tr = 0.0;	//Trial
	double A_T_Tr = 0.0;	//
	double A_Tr_Tr = 0.0;	//
	double A_E_Tr = 0.0;	//
	double A_R_E = 0.0;		//Exe
	double A_T_E = 0.0;		//
	double A_Tr_E = 0.0;	//
	double A_E_E = 0.0;		//

	//______________________Loop delimiters
	int NR = 6;				//Rolls
	int NT = 17;			//Turns
	int NTr = 2;			//Trials
	int NE = 1;			    //Exe		
	char ans = 'y';			//
	char yes = 'y';			//
	char no = 'n';			//
};

