import tkinter as tk
import itertools

# Window setup
root = tk.Tk()
root.title("Welcome")
root.geometry("900x500")
root.configure(bg="black")

# Fonts (system built-ins)
TITLE_FONT = ("Consolas", 60, "bold")
SUB_FONT = ("Consolas", 24)

# HELLO Label
hello_label = tk.Label(root, text="HELLO", font=TITLE_FONT, bg="black", fg="cyan")
hello_label.place(relx=0.5, rely=0.4, anchor="center")

# Subtitle Label
subtitle_label = tk.Label(root, text="", font=SUB_FONT, bg="black", fg="white")
subtitle_label.place(relx=0.5, rely=0.55, anchor="center")

# Glow colors cycle
colors = itertools.cycle(["#00ffff", "#00ccff", "#0099ff", "#33ccff", "#66ffff"])
def glow_text():
    hello_label.config(fg=next(colors))
    root.after(200, glow_text)

# Typing effect for subtitle
subtitle_text = "Welcome to Python Programming"
def type_text(i=0):
    if i <= len(subtitle_text):
        subtitle_label.config(text=subtitle_text[:i])
        root.after(80, type_text, i+1)

# Run animations
glow_text()
type_text()

root.mainloop()
