if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split(' '))
    new_list = set(arr)
    new_list.remove(max(new_list)) 
    print(max(new_list)) 
