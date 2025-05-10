num = int(input("Enter a number: "))
if num < 2:
    print("❌ Not prime")
else:
    for i in range(2, int(num**0.5)+1):
        if num % i == 0:
            print("❌ Not prime")
            break
    else:
        print("✅ Prime number")
