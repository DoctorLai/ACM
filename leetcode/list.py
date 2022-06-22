import os
import os.path
from datetime import datetime

DIR = '.'
folders = [os.path.join(DIR, o) for o in os.listdir(DIR) 
                    if os.path.isdir(os.path.join(DIR, o))]

questions = []

diff_cat = {}
lang_cat = {}
tags_cat = {}

def link(name):
    name = name.strip()
    return "[" + name + "](https://github.com/DoctorLai/ACM/blob/master/leetcode/" + name.replace(" ", "%20") + ".md)"
    
def home():
    return "[Index](https://github.com/DoctorLai/ACM/blob/master/leetcode/README.md)"    

def insert(x):
    langs = ""
    for y in x['langs']:
        langs += link(y) + "<BR/>"
    tags = "";
    for y in x['tags']:
        tags += link(y) + "<BR/>"
    return "| [" + x['id'] + "](" + x['leetcode'] + ") | [" + x['title'] + "](" + x['blog'] + ") | [" + x['count'] + "](" + x['github'] + ")<br/>" + langs + " | " + link(x['diff']) + " | " + tags + " |"

def process(folder):
    print("Processing %s " % folder)
    s = folder[2:].split('.')
    title = s[1].strip()
    id = s[0]
    files = [os.path.join(folder, o) for o in os.listdir(folder) 
                    if os.path.isfile(os.path.join(folder, o))]
    blog = ""
    leetcode = ""
    diff = ""
    type = "Algorithm"
    tags = set()
    langs = set()
    for f in files:
        extension = os.path.splitext(f)[1]
        langs.add(extension)
        file = open(f, "r")
        lineNum = 1
        if "sql" in f:
            type = "Database"
        for line in file:
            if "helloacm" in line:
                blog = line.split(' ')[1]
            elif "leetcode" in line:
                leetcode = line.split(' ')[1]
            elif "MEDIUM" in line or "EASY" in line or "HARD" in line:
                s = line.split(',')
                for x in s[1:]:
                    tags.add(x.strip())
                diff = s[0].split(' ')[1]
            lineNum += 1
            if lineNum > 5:
                break
        file.close()
        
    item = { "blog": blog.strip(), 
        "diff": diff,
        "id": id,
        "title": title,
        "tags": list(tags),
        "leetcode": leetcode.strip(),
        "type": type,
        "langs": list(langs),
        "count": str(len(files)),
        "github": "https://github.com/DoctorLai/ACM/tree/master/leetcode/" + id + ".%20" + title.replace(" ", "%20")
    }        
        
    global diff_cat
    global lang_cat
    global tags_cat
    
    if diff:
      if diff in diff_cat:
          diff_cat[diff].append(item)
      else:
          diff_cat[diff] = [item]
       
    for tag in tags:
        if tag in tags_cat:
            tags_cat[tag].append(item)
        else:
            tags_cat[tag] = [item] 
       
    for lang in langs:
        if lang in lang_cat:
            lang_cat[lang].append(item)
        else:
            lang_cat[lang] = [item]  
                       
    return item

for x in folders:
    questions.append(process(x))

print("""
# Algorithms
| ID | Blog | Solutions | Diffculty | Tags |
|:----:|:----:|:-------:|:----:|:----:|""")

Algorithm = 0
for x in questions:
    if x['type'] == "Algorithm":
        Algorithm += 1
        print(insert(x))

print("""
# Database
| ID | Blog | Solutions | Diffculty | Tags |
|:----:|:----:|:-------:|:----:|:----:|""")

Database = 0
for x in questions:
    if x['type'] == "Database":
        Database += 1
        print(insert(x))

print("\n")
print("Total *" + str(Algorithm + Database) + "* Questions: *" + str(Database) + "* Database, *" + str(Algorithm) + "* Algorithms\n")

print("\n") 
print("## By Difficulty")
for diff in ["MEDIUM", "EASY", "HARD"]:
    print(" - " + link(diff))
    s = """
# Difficulty: """ + diff + """
| ID | Blog | Solutions | Diffculty | Tags |
|:----:|:----:|:-------:|:----:|:----:|
"""
    i = 0
    for x in diff_cat[diff]:        
        s += insert(x) + "\n"
        i += 1
    s += "\n"
    s += "Total: **" + str(i) + "**\n"
    s += home()          
    file = open(diff + ".md", "w")
    file.write(s)
    file.close()   
    
print("\n")
print("## By Programming Language")    
for lang in lang_cat:
    print(" - " + link(lang))
    s = """
# Programming Language: """ + lang + """
| ID | Blog | Solutions | Diffculty | Tags |
|:----:|:----:|:-------:|:----:|:----:|
"""
    i = 0
    for x in lang_cat[lang]:        
        s += insert(x) + "\n"
        i += 1
    s += "\n"
    s += "Total: **" + str(i) + "**\n"
    s += home()        
    file = open(lang + ".md", "w")
    file.write(s)
    file.close()      

print("\n") 
print("## By Tag")   
for tag in tags_cat:    
    print(" - " + link(tag))
    s = """
# Tag: """ + tag + """
| ID | Blog | Solutions | Diffculty | Tags |
|:----:|:----:|:-------:|:----:|:----:|
"""
    i = 0
    for x in tags_cat[tag]:        
        s += insert(x) + "\n"
        i += 1
    s += "\n"
    s += "Total: **" + str(i) + "**\n"
    s += home()
    file = open(tag + ".md", "w")
    file.write(s)
    file.close()            
    
now = datetime.now()
print("\n") 
print("*Index generated by [script](https://github.com/DoctorLai/ACM/blob/master/leetcode/list.py)* at " + now.strftime("%d/%m/%Y %H:%M:%S"))
    
