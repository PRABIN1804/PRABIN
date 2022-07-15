import pyautogui
import time
time.sleep(8)
count=0
while count<=10:
    pyautogui.typewrite("hello,how are u..\n")
    pyautogui.press("enter")
    count=count+1