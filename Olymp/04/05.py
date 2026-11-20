ranks = {
    "6": 6, "7": 7, "8": 8, "9": 9, "10": 10,
    "Jack": 11, "Queen": 12, "King": 13, "Ace": 14
}

trump = input().strip()
n = int(input())
results = []

for _ in range(n):
    attack_rank, attack_suit = input().split()
    defend_rank, defend_suit = input().split()
    
    if defend_suit == attack_suit and ranks[defend_rank] > ranks[attack_rank]:
        results.append("1")
    elif defend_suit == trump and attack_suit != trump:
        results.append("1")
    else:
        results.append("0")

print(" ".join(results))
