//----------------------------------------------------------------------------
//				-> File Header GAME_KERNEL_MOTOR <-
//----------------------------------------------------------------------------

//-----------------------------------------------------------------
//							-> INCLUDES <-
//-----------------------------------------------------------------

#pragma once  //--> only include a one file header.

#include "Framework.h" //Include file adds "windows.h"
#include "resource.h"
#include <time.h>   //Include file header of data types of concept "Time" 

//-----------------------------------------------------------------

//=======================================================
//		-> Function's Declarations <-
//=======================================================

	// --> Point of in of the windows programs
	
	int WINAPI f_win_main(HINSTANCE h_instance, HINSTANCE h_instance_prev,
	 PSTR s_cmd_line, int i_show);

	// --> Procedure of window
	LRESULT CALLBACK proc_window(HWND, UINT, WPARAM, LPARAM);
	
	//++++++++++++++++++++++++++++++++++++++++++++
	// --> auxiliars funtions of the kernel_motor
	//++++++++++++++++++++++++++++++++++++++++++++
	
	BOOL f_inicialize_game(HINSTANCE h_instance);
	void f_start_game(HWND h_window);
	void f_loop_game();
	void f_restart_game(HWND h_window);
	void f_stop_game(HWND h_window);
	void f_draw_game(HDC h_dc);
	void f_exit_game();

	//++++++++++++++++++++++++++++++++++++++++++++


//=======================================================

				// --------- 
				
//.......................................................
//			- > Principal functions declaration <-
//.......................................................

//.......................................................
//			- > class: Game_Kernel_Motor <-
//.......................................................
//			Doc: small base motor game, 
//			in enviroment windows (GUI)
//.......................................................

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

	Game_Kernel_Motor(HINSTANCE h_instance,LPTSTR s_title,
	LPTSTR s_class_window, WORD w_icon, WORD w_small_icon,
	int i_width = 640, int i_high = 480, int i_cycle_frecuency = 50);  // --> Constructor of class Game_kernel_motor (L‌ong P‌ointer Tchar STRing) 
	
	virtual ~Game_Kernel_Motor(); // --> Destructor of class Game_kernel_motor.

	//....................................................
	//			- > Methods Auxiliares <-
	//....................................................

	BOOL initialization(int i_watch); // --> Create of class windows and afther create the window.
	
	LRESULT menssages_manegment(HWND h_window, UINT ui_msg, 
		WPARAM w_param, LPARAM l_param);

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

	void set_a_hwindow(HWND h_window)
	{
		a_hwindow = h_window;
	}
	void set_a_wicon(WORD w_icon)
	{
		a_wicon = w_icon;
	}
	void set_a_wsmall_icon(WORD w_small_icon)
	{
		a_wsmall_icon = w_small_icon;
	}
	void set_a_icycle_frecuency(int i_cycle_frecuency)
	{
		a_icycle_frecuency = i_cycle_frecuency;
	}
	void set_a_ben_espera(BOOL b_en_espera)
	{
		a_ben_espera = b_en_espera;
	}
};

//.......................................................

//----------------------------------------------------------------------------

