from random import random

if __name__ == "__main__":
    nums = []
    with open("random_number.txt", "w") as file:
        nums = []
        line = ''
        for j in range(100000):
            nums.append((int)(random() * 10000))
        line = ' '.join(str(num) for num in nums)
        file.write(f'{line}\n')
            
        
            
    
