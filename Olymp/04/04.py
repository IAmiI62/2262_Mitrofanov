rows = [
    "1234567890",
    "qwertyuiop",
    "asdfghjkl",
    "zxcvbnm"
]

n = int(input())

for _ in range(n):
    password = input().strip()
    is_strong = True
    
    for row in rows:
        # Проверяем, есть ли хотя бы один символ из текущего ряда в пароле
        if not any(char in password for char in row):
            is_strong = False
            break
            
    if is_strong:
        print("strong")
    else:
        print("weak")
