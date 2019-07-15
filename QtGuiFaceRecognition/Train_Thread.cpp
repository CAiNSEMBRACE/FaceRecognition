#include "Train_Thread.h"

Train_Thread::Train_Thread()
{
	mol_tra = new Mol_Tra;
}

Train_Thread::~Train_Thread()
{
	delete mol_tra;
}

void Train_Thread::run()
{
	mol_tra->modul_train();
}
