//----------------------------------------------------------------------------
//				-> File Header GAME_KERNEL_MOTOR <-
//----------------------------------------------------------------------------

//----------------------------------------------------------------------------
//							-> INCLUDES <-
//----------------------------------------------------------------------------

#pragma once  //--> only include a one file header.

#include "Framework.h" //Include file adds "windows.h"
#include "resource.h"
#include <time.h>   //Include file header of data types of concept "Time" 

	//.....................................................
	//			- > class: Game_Kernel_Motor <-
	//.....................................................
	//			Doc: small base motor game, 
	//			in enviroment windows (GUI)
	//.....................................................

class Game_Kernel_Motor  
{
protected:

	//++++++++++++++++++++++++++++++++++++++++++++++++++++
	//	 - > Atributes protecteds of Game_Kernel_Motor <-
	//++++++++++++++++++++++++++++++++++++++++++++++++++++
			
	static Game_Kernel_Motor* a_pgame_kernel_motor;	// ---> unique object motor game kernel
	HINSTANCE	a_hinstance;						// ---> handle of intance ....
	HWND		a_hwindow;							// ---> handle of the windows when paint of game ....
	TCHAR		a_sclass_window[32];				// ---> Tchar (Array char in win32) ... name of window
	TCHAR		a_stitle[32];						// ---> name of title.
	WORD        a_wicon;							// ---> WORD (unsigned short) Data of icon	
	WORD        a_wsmall_icon;						// ---> Data of small icon
	int			a_icycle_frecuency;					// ---> frecuency of cycle in fps	
	bool		a_ben_espera;						// ---> game state wait
	



public:

	Game_Kernel_Motor(HINSTANCE hinstance,LPTSTR stitle,
	LPTSTR sclass_window, WORD wicon, WORD wsmall_icon,
	int iwidth = 640, int ihigh = 480, int icycle_frecuency = 50);  // --> Constructor of class Game_kernel_motor (L‌ong P‌ointer Const Tchar STRing) 
	
	virtual ~Game_Kernel_Motor(); // --> Destructor of class Game_kernel_motor.
};

