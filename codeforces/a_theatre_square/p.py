import math
def main():
    data = input()
    data = data.split()
    n, m, a = int(data[0]), int(data[1]), int(data[2])
    length, height = math.ceil(n/a), math.ceil(m/a)
    print(length*height)

if __name__ == '__main__':
    main()
