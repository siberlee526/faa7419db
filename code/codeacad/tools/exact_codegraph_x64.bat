@echo off
echo �����ļ��У����Ե�......
set srcpath=G:\githubcodelibrary\code\codeacad\bin
set dirpath=C:\Users\Administrator\Desktop\codegraghoutput
xcopy /e %srcpath%\config %dirpath%\
xcopy /y %srcpath%\acadloader.dll %dirpath%
xcopy /y %srcpath%\CodeGraph.exe %dirpath%
xcopy /y %srcpath%\readme %dirpath%
echo �����ļ�����ɣ���������˳�������
pause