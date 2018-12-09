#pragma once

template<class T>
class CKnapsackProblem
{
public:
	CKnapsackProblem();
	~CKnapsackProblem();

	bool bInitialObject(double dKnapsackSize, int iItemsCount, double dMaxValueItm, double dMaxSizeItm);
	bool bInitialObject(double dKnapsackSize, int iItemsCount);
	bool bSetNewValueOfItm(int iIndex, double iValue);
	bool bSetNewSizeOfItm(int iIndex, double iSize);
	double dGetValueFromGen(bool * piTable);
	double dGetValueFromGen(int * piTable);
	double dGetValueFromGen(double * piTable);
	double dGetSizeFromGen(bool * piTable);
	double dGetSizeFromGen(int * piTable);
	double dGetSizeFromGen(double * piTable);

	int iGetItemsCount();
	double dGetKnapsackSize();
	void vDisplay();
private:
	int iGenerateInteger(int iFrom, int iTo);
	double dGenerateDouble(double iFrom, double iTo);
	double d_knapsack_size;
	int i_items_count;
	double ** ppd_items_table;
};

