#include "pch.h"
#include "Class1.h"
#include "..\uwp_dll_mpir_gc\Calculator.h"

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
	Calculator* calc = new Calculator();
	return calc->Add(a, b);
	//return a + b;
}
