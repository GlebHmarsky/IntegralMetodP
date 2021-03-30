
// InterpolMetodGDlg.h : header file
//

#pragma once
#include <atlbase.h>

// CInterpolMetodGDlg dialog
class CInterpolMetodGDlg : public CDialog
{
// Construction
public:
	CInterpolMetodGDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_INTERPOLMETODG_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	
	CRect m_RectColorFx, m_RectColorPnx, m_RectColorRnx, m_RectColorDFx, m_RectColorDPnx;
	double A = 0, B = 0, C = 0, D = 0;
	double alpha = 1, beta = 1, gamma = 1, delta = 1, epsi = 1, mu = 1;
	double DiffDelta = 1;
	int N = 1;
	double RX1 = 50, RY1 = 100, RX2 = 800, RY2 = 800;
	double Function(double x);
	double PolynomFunction(double x);
	void CalculateDeltaY();
	void calculateValues();
	double Integral(int n);
	double NumericalIntegrational();
	double logicalCentralPoint; //x0
	double logicalStep;//h


	CEdit m_ControlBorderA;
	CEdit m_ControlBorderB;
	CEdit m_ControlBorderD;
	CEdit m_ControlBorderC;
	CEdit m_ControlParamAlpha;
	CEdit m_ControlParamBeta;
	CEdit m_ControlParamGamma;
	CEdit m_ControlParamDelta;
	CEdit m_ControlParamEpsi;
	CEdit m_ControlParamMu;
	CEdit m_NumKnoots;

	afx_msg void OnEnChangeEditA();
	afx_msg void OnEnChangeEditB();
	afx_msg void OnEnChangeEditC();
	afx_msg void OnEnChangeEditD();

	afx_msg void OnEnChangealpha();
	afx_msg void OnEnChangebeta();
	afx_msg void OnEnChangegamma();
	afx_msg void OnEnChangedelta();
	afx_msg void OnEnChangeepsi();
	afx_msg void OnEnChangemu();

	afx_msg void OnBnClickedButtonpaint();
	
	afx_msg void OnEnChangeEditnumknots();

	BOOL m_MainFunc;
	BOOL m_DiffMainFunc;
	BOOL m_Poly;
	BOOL m_DiffPoly;
	BOOL m_Raznost;
	CComboBox m_Deltas;
	CComboBox m_ComboBoxParametr;

	afx_msg void OnBnClickedCheckmainfunc();
	afx_msg void OnBnClickedCheckpoly();
	afx_msg void OnBnClickedCheckraznost();
	afx_msg void OnBnClickedCheckdiffmainfunc();
	afx_msg void OnBnClickedCheckdiffpoly();	
	afx_msg void OnCbnSelchangeCombodeltas();
		
	CEdit m_ControlParamA;
	CEdit m_ControlParamB;

	double a, b;
	afx_msg void OnEnChangeIntegralbordera();
	afx_msg void OnEnChangeIntegralborderb();
	afx_msg void OnCbnSelchangeComboboxparametrs();
	
	CEdit m_MaxN;
	CProgressCtrl m_Progress;
};
