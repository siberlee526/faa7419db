@echo off
echo 复制文件中，请稍等......
set srcpath=G:\githubcodelibrary\code\codeacad\bin
set dirpath=C:\Users\Administrator\Desktop\codegraghoutput

xcopy /y %srcpath%\acadloader.dll %dirpath%
xcopy /y %srcpath%\CodeGraph.exe %dirpath%
xcopy /y %srcpath%\readme %dirpath%

md %dirpath%\config
xcopy /y /E %srcpath%\config %dirpath%\config

echo 复制文件已完成！按任意键退出本窗口
pause