def is_possible_palindrome(s):
    count = [0] * 26
    for char in s:
        count[ord(char) - ord('a')] += 1

    odd_count = 0
    for freq in count:
        if freq % 2 != 0:
            odd_count += 1

    if odd_count <= 1:
        return "YES"
    else:
        return "NO"

def main():
    t = int(input())
    for _ in range(t):
        s = input().strip()
        result = is_possible_palindrome(s)
        print(result)

if __name__ == "__main__":
    main()
