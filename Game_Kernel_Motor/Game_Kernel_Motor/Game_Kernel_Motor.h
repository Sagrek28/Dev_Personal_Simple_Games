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

	//....................................................
	//			- > Methods Auxiliares <-
	//....................................................

	BOOL initialization(int iwatch); // --> Create of class windows and afther create the window.
	
	LRESULT menssages_manegment(HWND hwindow, UINT msg, 
		WPARAM wparam, LPARAM lparam);

	//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
	//			- > Methods get and set <-
	//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

	static Game_Kernel_Motor* get_a_pgame_kernel_motor()
	{
		return a_pgame_kernel_motor;
	}
	HINSTANCE get_a_hinstance() 
	{
		return a_hinstance;
	}
	HWND get_a_hwindow() 
	{
		return a_hwindow;
	}
	LPTSTR get_a_sclass_window()
	{
		return a_sclass_window;
	}
	LPTSTR get_a_stitle()
	{
		return a_stitle;
	}
	WORD get_a_wicon()
	{
		return a_wicon;
	}
	WORD get_a_wsmall_icon()
	{
		return a_wsmall_icon;
	}
	int	 get_a_icycle_frecuency()
	{
		return a_icycle_frecuency;
	}
	BOOL get_a_ben_espera()
	{
		return a_ben_espera;
	}

	//--------------- 

	void set_a_hwindow(HWND hwindow)
	{
		a_hwindow = hwindow;
	}
	void set_a_wicon(WORD wicon)
	{
		a_wicon = wicon;
	}
	void set_a_wsmall_icon(WORD wsmall_icon)
	{
		a_wsmall_icon = wsmall_icon;
	}
	void set_a_icycle_frecuency(int icycle_frecuency)
	{
		a_icycle_frecuency = icycle_frecuency;
	}
	void set_a_ben_espera(BOOL ben_espera)
	{
		a_ben_espera = ben_espera;
	}


};

