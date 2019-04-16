def count_substring(string, substring)
    ans=sum([ 1 for i in range(len(string)-len(substring)+1) if string[ii+len(substring)    ] == substring])
    
    return ans

if __name__ == '__main__'
    string = raw_input().strip()
    sub_string = raw_input().strip()
    
    count = count_substring(string, sub_string)
    print count