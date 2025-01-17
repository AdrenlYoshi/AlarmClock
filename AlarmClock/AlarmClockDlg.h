﻿// AlarmClockDlg.h: 头文件
//
#pragma once
#include "SetShowDlg.h"
#include "SetFormatDlg.h"
#include "SetCAADlg.h"
// CAlarmClockDlg 对话框
class CAlarmClockDlg : public CDialog
{
// 构造
public:
	CAlarmClockDlg(CWnd* pParent = nullptr);	// 标准构造函数
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ALARMCLOCK_DIALOG };
#endif
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持
// 实现
protected:
	HICON m_hIcon;
	HICON m_big;
	HICON m_small;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CStatic m_time;
	CFont m_font;
	CRect m_rect;
	CTime m_times;
	void ChangeSize(UINT nID, int x, int y);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void On32772();
	afx_msg void OnStnDblclickTime();
	void LoadIni();
	void savewin();
	void AjustTimeStatic(int cx, int cy);
	afx_msg void OnClose();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void On32773();
	afx_msg void On32776();
	afx_msg void On32771();
	afx_msg void On32775();
};