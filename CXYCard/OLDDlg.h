#pragma once


// COLDDlg 对话框

class COLDDlg : public CDialogEx
{
	DECLARE_DYNAMIC(COLDDlg)

public:
	COLDDlg(int arr[],CWnd* pParent = NULL);   // 标准构造函数
	virtual ~COLDDlg();

// 对话框数据
	enum { IDD = IDD_COUNT };
	int m_iArray[3];
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnPaint();
};
