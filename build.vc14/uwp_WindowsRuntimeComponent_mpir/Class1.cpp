#include "pch.h"
#include "Class1.h"
#include "..\uwp_dll_mpir_gc\Calculator.h"
#include "..\..\mpir.h"
#include "..\..\gmp-impl.h"

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

	const char* gv = _MSC_MPIR_VERSION;
	Calculator* calc = new Calculator();
	return calc->Add(a, b);

	//return a + b;
}

int Class1::MpirAdd2(int a, int b)
{
	mpz_t test;
	mpz_init(test);
	mpz_set_ui(test, a);

	mpz_t test2;
	mpz_init(test2);
	mpz_set_ui(test2, b);

	mpz_t result;
	mpz_init(result);
	mpz_add(result, test, test2);

	//  unsigned long int mpz_get_ui (const mpz_t op)
	int intresult = (int)mpz_get_ui(result);
	return intresult;
}
