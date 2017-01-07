#!/usr/bin/env python3
try:
    # Python2
    import Tkinter as tk
except ImportError:
    # Python3
    import tkinter as tk
import time
import subprocess
import sys
import time
import os	

awaketime = int(float(sys.argv[1])*60)
sleeptime = int(float(sys.argv[2])*10)

message = "5 minutes remaining."
message1= "10 minutes remaining."
message2= "Your time will end in a minute. Please save your code!!!"

'''
def take_a_break():
    get = subprocess.check_output(["xrandr"]).decode("utf-8").split()
    screens = [get[i-1] for i in range(len(get)) if get[i] == "connected"]
    for scr in screens:
        # uncomment either one of the commands below [1]
        # darken the screen, or...
        subprocess.call(["xrandr", "--output", scr, "--brightness", "0"])
        # turn it upside down :)
        # subprocess.call(["xrandr", "--output", scr, "--rotate", "inverted"])
    time.sleep(sleeptime)
    for scr in screens:
        # back to "normal"
        subprocess.call(["xrandr", "--output", scr, "--brightness", "1"])
        subprocess.call(["xrandr", "--output", scr, "--rotate", "normal"])
'''
def count_down():
    
    for t in range(1200, -1, -1):
        # format as 2 digit integers, fills with zero to the left
        # divmod() gives minutes, seconds
        sf = "{:02d}:{:02d}".format(*divmod(t, 60))
        #print(sf)  # test
        time_str.set(sf)
        root.update()
        # delay one second
        time.sleep(1)

#while True:
time.sleep(awaketime-600)
subprocess.Popen(["notify-send", message1])
#while True:
time.sleep(awaketime-(awaketime-300))
subprocess.Popen(["notify-send", message])
time.sleep(awaketime-(awaketime-60))
subprocess.Popen(["notify-send", message2])
time.sleep(60)

def lock():
    os.system("gnome-screensaver-command -l")
#take_a_break()

# create root/main window
root = tk.Tk()
time_str = tk.StringVar()
# create the time display label, give it a large font
# label auto-adjusts to the font
label_font = ('helvetica', 40)
tk.Label(root, textvariable=time_str, font=label_font, bg='white', 
         fg='blue', relief='raised', bd=3).pack(fill='x', padx=5, pady=5)
# create start and stop buttons
# pack() positions the buttons below the label
tk.Button(root, text='Count Start', command=count_down).pack()
# stop simply exits root window
tk.Button(root, text='Count Stop', command=lock).pack()
# start the GUI event loop
root.mainloop()


#exit(0)

	



#python3 /path/to/takeabreak.py <uptime> <breaktime>