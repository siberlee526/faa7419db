@echo off
echo �����ļ��У����Ե�......
set srcpath=G:\githubcodelibrary\code\codeacad\bin
set dirpath=C:\Users\Administrator\Desktop\codegraghoutput

xcopy /y %srcpath%\acadloader.dll %dirpath%
xcopy /y %srcpath%\CodeGraph.exe %dirpath%
xcopy /y %srcpath%\readme %dirpath%

md %dirpath%\config
xcopy /y /E %srcpath%\config %dirpath%\config

echo �����ļ�����ɣ���������˳�������
pause