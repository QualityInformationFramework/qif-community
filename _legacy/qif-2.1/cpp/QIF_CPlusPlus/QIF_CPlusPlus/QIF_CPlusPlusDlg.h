
// QIF_CPlusPlusDlg.h : header file
//

#pragma once

// CQIF_CPlusPlusDlg dialog
class CQIF_CPlusPlusDlg : public CDialogEx
{
// Construction
public:
	CQIF_CPlusPlusDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_QIF_CPLUSPLUS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	void GetDatumDefinitions(QIFDocumentType &qifDoc, long nomid, CString &falabel, CString &datdef);
	void GetDatumReferenceFrame(QIFDocumentType &qifDoc, long drfid, CString &drfstr);
	void GetTolerances(QIFDocumentType &qifDoc, long actfeatid, CString &tlabels, CString &talabels, CString &tdefs, CString &tadefs);

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
	afx_msg void OnBnClickedReadqif();
	afx_msg void OnBnClickedWriteqif();
};
