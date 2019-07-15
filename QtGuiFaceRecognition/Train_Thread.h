#pragma once
#include "main.h"
#include "Mol_Tra.h"
class Train_Thread :
	public QThread
{
public:
	Train_Thread();
	~Train_Thread();
	void run();
private:
	Mol_Tra* mol_tra;
};

