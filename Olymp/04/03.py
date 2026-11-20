from string import ascii_lowercase

s = input()

best_char = ''
max_count = 0

for char in ascii_lowercase:
    cnt = s.count(char)
    if cnt > max_count:
        max_count = cnt
        best_char = char

print(s.replace(best_char, ''))
