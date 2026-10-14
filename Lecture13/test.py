shortestWord = None  # No object Value
word = input().strip()

while word != "qwerty":
    if shortestWord is None or len(word) < len(shortestWord):
        shortestWord = word
    word = input().strip()

print(shortestWord)