import speech_recognition as sr
import pyttsx3
import webbrowser

# Initialize the speech recognizer
recognizer = sr.Recognizer()

# Initialize the text-to-speech engine
engine = pyttsx3.init()

# Function to speak a response
def speak(text):
    engine.say(text)
    engine.runAndWait()

# Function to listen to voice commands
def listen():
    with sr.Microphone() as source:
        print("Listening for a command...")
        recognizer.adjust_for_ambient_noise(source)
        audio = recognizer.listen(source)

    try:
        command = recognizer.recognize_google(audio).lower()
        print(f"You said: {command}")
        return command
    except sr.UnknownValueError:
        print("Sorry, I couldn't understand the audio.")
        return ""
    except sr.RequestError as e:
        print(f"Sorry, an error occurred: {str(e)}")
        return ""

# Function to perform actions based on voice commands
def process_command(command):
    if "hello" in command:
        speak("Hello! How can I assist you today?")
    elif "open youtube" in command:
        speak("Opening YouTube.")
        webbrowser.open("https://www.youtube.com")
    elif "open browser" in command:
        speak("Opening a web browser.")
        webbrowser.open("https://www.google.com")
    elif "what's the time" in command:
        # You can add code here to fetch the current time and speak it.
        pass
    elif "goodbye" in command:
        speak("Goodbye! Have a great day!")
        exit()
    else:
        speak("I'm sorry, I don't understand that command.")

if __name__ == "__main__":
    speak("Hello! I'm your Jarvis-like assistant. How can I assist you today?")

    while True:
        command = listen()
        if command:
            process_command(command)
