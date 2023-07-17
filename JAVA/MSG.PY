import pyautogui
import time
time.sleep(5)
count=1
while count<=20:
   pyautogui.typewrite("Please Send Me Bro ")
   pyautogui.press("enter")
   count=count+1
