@echo off
REM �sĶ�ùB��C++�N�X���R�O����

REM �]�m�sĶ���M�sĶ�ﶵ
set compiler=g++
set compile_options=-std=c++11 -Wall

REM ���ܥΤ��J�����W
set /p source_file=�п�J�����W�]�]�A�X�i�W�^�G

REM �]�m�i������W
set executable_file=%source_file:.cpp=.exe%

REM �sĶ����󬰥i������
%compiler% %compile_options% %source_file% -o %executable_file%

REM �ˬd�sĶ�O�_���\
if %errorlevel% neq 0 (
  echo �sĶ���ѡC
  exit /b
)

REM ����i������
echo �sĶ���\�C���b�B��{��...
%executable_file%

REM �R���i������]�i��^
del %executable_file%
