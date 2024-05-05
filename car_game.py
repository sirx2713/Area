command = ""
started = False
stopped = False

while True:
    command = input("> ").lower()
    if command == "start":
        if started:
            print("Already started moving")
        else:
            started = True
            print("Started moving")
    elif command == "stop":
        if stopped:
            print("Already Stopped moving")
        else:
            stopped = True
            print("Stopped moving")
    elif command == "status":
        if started and not stopped:
            print("Moving")
        elif stopped:
            print("Stopped")
    elif command == "help":
        print("start - starts the car")
        print("stop - stops the car")
        print("status - prints the status of the car")
        print("help - prints the help menu")
    else:
        print("Unknown command")