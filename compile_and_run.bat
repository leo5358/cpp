@echo off
REM 編譯並運行C++代碼的命令巨集

REM 設置編譯器和編譯選項
set compiler=g++
set compile_options=-std=c++11 -Wall

REM 提示用戶輸入源文件名
set /p source_file=請輸入源文件名（包括擴展名）：

REM 設置可執行文件名
set executable_file=%source_file:.cpp=.exe%

REM 編譯源文件為可執行文件
%compiler% %compile_options% %source_file% -o %executable_file%

REM 檢查編譯是否成功
if %errorlevel% neq 0 (
  echo 編譯失敗。
  exit /b
)

REM 執行可執行文件
echo 編譯成功。正在運行程序...
%executable_file%

REM 刪除可執行文件（可選）
del %executable_file%
