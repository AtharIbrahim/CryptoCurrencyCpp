#include<iostream>
#include<string>
#include<cmath>
#include<windows.h>
#include<cstdlib>
#include<fstream>
using namespace std;
class user{
	protected:
		string username;
	    string password;
		string susername;
	    string spassword;
		ifstream infile;
	    ofstream outfile;
	    fstream file;
	    ofstream ofs;
};
class login_trading:public user{
	public:
		void home();
		void registration();
		void login();
		void forgot();
		void clear_file();
		void menu();
	    int checkbalance();
	    int checkbalance(int amo);
	    void checkcoins();
	    void withdrawal();
	    void deposit();
	    void buycoins();
	    void sellcoins();
	    void save();
	    void load();
};
class checking:public ::user,public login_trading{
	public:
		void loadings();
		void showrandom();
		int showquantity();
		int showquant();
};
