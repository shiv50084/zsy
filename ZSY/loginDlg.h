#pragma once


// loginDlg 对话框

class loginDlg : public CDialogEx
{
	DECLARE_DYNAMIC(loginDlg)

public:
	loginDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~loginDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	CString m_password;
};
