#pragma once
class DealExtremeDS2Controller :
	public CDS2Controller
{
public:
	DealExtremeDS2Controller(DWORD dwIndex);
	~DealExtremeDS2Controller();

protected:
	//void FormatReport(void);
	void XInputMapState(void);
};

