import pyautogui
import time
import keyboard

time.sleep(2)   
for x in range(15):
    pyautogui.mouseDown(1744,386,button="left")
    pyautogui.moveTo(819,330,0.75)
    #time.sleep(0.75)
    pyautogui.mouseUp()
    #pyautogui.press("enter")
    if keyboard.is_pressed('p'):
        break
