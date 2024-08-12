import random
import string

def generate_password(length, use_uppercase, use_digits, use_special):
    characters = string.ascii_lowercase
    
    if use_uppercase:
        characters += string.ascii_uppercase
    if use_digits:
        characters += string.digits
    if use_special:
        characters += string.punctuation
    
    # Generate the password
    password = ''.join(random.choice(characters) for _ in range(length))
    
    return password

def main():
    print("Password Generator")
    
    # User input for password length
    while True:
        try:
            length = int(input("Enter the desired password length (minimum 4): "))
            if length < 4:
                print("Password length should be at least 4.")
                continue
            break
        except ValueError:
            print("Please enter a valid number.")
    
    # User input for password complexity
    use_uppercase = input("Include uppercase letters? (yes/no): ").lower() == 'yes'
    use_digits = input("Include digits? (yes/no): ").lower() == 'yes'
    use_special = input("Include special characters? (yes/no): ").lower() == 'yes'
    
    # Generate the password
    password = generate_password(length, use_uppercase, use_digits, use_special)
    
    # Display the password
    print(f"Generated Password: {password}")

if __name__ == "__main__":
    main()
