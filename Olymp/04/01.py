def is_prime(num):
    if num < 2:
        return False
    # Проверяем делители от 2 до квадратного корня из числа
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

n = int(input())
count = 0
current = 1

while count < n:
    current += 1
    if is_prime(current):
        count += 1

print(current)
