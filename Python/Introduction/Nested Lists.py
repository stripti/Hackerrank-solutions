d={}
new_list=[]
new=[]
for _ in range(int(raw_input())):
    name = raw_input()
    score = float(raw_input())
    d[name]=score

for name,score in d.items():
    new_list.append(score)
    
new_list.remove(min(new_list)) 
s=min(new_list)

for name,score in d.items():
    if(score==s):
        new.append(name)

new.sort()

for name in new:
    print(name)
