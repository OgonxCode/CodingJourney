import tkinter as tk    

def check_balance(balance):
    label = tk.Label(root, text="leos bank account " + str(balance))
    label.pack(pady=20)

def add100():
    global leobalance
    leobalance += 100

def main():
    global root
    global leobalance

    root = tk.Tk()
    root.geometry("500x450")
    root.title("Bank of Gui")

    leobalance = 0

    button = tk.Button(root, text="Check Balance", command=lambda: check_balance(leobalance))
    button.pack(pady=20)  

    button = tk.Button(root, text="Add money", command=add100)
    button.pack(pady=20)
    
    root.mainloop()

if __name__ == "__main__":
    main()
