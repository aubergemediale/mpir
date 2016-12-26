#include "pch.h"
#include "Class1.h"

using namespace uwp_WindowsRuntimeComponent_mpir;
using namespace Platform;

Class1::Class1()
{
}

int Class1::Add(int a, int b)
{
	return a + b;
}

int Class1::MpirAdd(int a, int b)
{
	// TODO: use mpir
	return a + b;
}
