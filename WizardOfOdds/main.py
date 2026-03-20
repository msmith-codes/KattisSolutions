from math import log2

def main():
    n,k = map(int,input().split())
    if k >= log2(n):
        print('Your wish is granted!')
    else:
        print('You will become a flying monkey!')

if __name__ == "__main__":
    main()