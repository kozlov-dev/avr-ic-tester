/*
 * tester.h
 *
 * Created: 15.07.2015 10:53:47
 *  Author: Trol
 */ 


#ifndef TESTER_IO_H_
#define TESTER_IO_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#include "debug.h"

/************************************************************************
  ������������� ��� ���� �� ������ � ��������� ��������                
  ���� fullMode ����������, �� ����� ���������������� ������ ����
  (������� � UART)                                                      
************************************************************************/
void TesterReset(bool fullMode);

/************************************************************************
  ������������� ������� ���� �� ������/������ �������� ������� �����   
  ������� ��� ������������� ������� ����, ������� - ����������
  ��� ��������������� �� ������ ���� ��� ����������                    
************************************************************************/
void TesterConfig16(uint16_t mask);
void TesterConfig28(uint32_t mask);


/************************************************************************
  ������������� ���� �� ����� mask1 � ���������� �� ����� mask0
************************************************************************/
void TesterSet16(uint16_t mask0, uint16_t mask1);
void TesterSet28(uint32_t mask0, uint32_t mask1);

/************************************************************************
  ���������, ��� ���� ����� mask1 �����������, � ���� ����� mask0 ��������
************************************************************************/
bool TesterTest16(uint16_t mask0, uint16_t mask1);
bool TesterTest28(uint32_t mask0, uint32_t mask1);


/************************************************************************
  ���������� true, ���� ��� ���� ������ ������������� ��� ����� ����������
  � ���� ������ �������������� ������� � UART ����������
************************************************************************/
bool IsFullMode();


/************************************************************************/
/* ������� � UART ��������� ����� ��                                    */
/************************************************************************/
void TesterDebugStatus(uint8_t pins);

#endif // TESTER_IO_H_