#pragma once
#include "pch.h"

class CBlade
{
private:
    CMatrix Points;          // ����� ������� �������
    double angle;            // ������� ���� ��������
    double delta_angle;      // ��� ��������
    CRectD SpaceRect;        // ������� � ������� �����������
    CRect WinRect;           // ������� � ����
    bool clockwise;          // true = �� �������, false = ������

    // ��������� �������
    double h;                // ������ ������������
    double phi;              // ���� ��� ������� (�������)
    double R;                // ������ ��������� ����������

    void CalculatePoints();  // ��������� ���������� ����� �������

public:
    CBlade();                                    // ����������� �� ���������
    CBlade(double height, double angle_phi, double radius);  // ����������� � �����������
    void SetWinRect(CRect& rw);                 // ���������� ������� ����
    void Draw(CDC& dc);                         // ���������� �������
    void Rotate();                              // ��������� �� delta_angle
    void SetDirection(bool cw);                 // ���������� ����������� ��������
    void ToggleDirection();                     // �������� ����������� ��������
    CRectD GetSpaceRect() { return SpaceRect; }
};