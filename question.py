import random

queAndAns = {
    "the Great Wall of China":"China",
    "the Taj Mahal":"India",
    "the Eiffel Tower":"France",
    "Niagara Falls":"Canada",
    "Patong Beach":"Thailand",
    "Christ the Redeemer, Rio de Janeiro":"Brazil",
    "Old Havana":"Cuba",
    "Burj Khalifa":"United Arab Emirates",
     "the Great Sphinx":"Egypt",
     "Mount Fuji":"Japan",
     "Buckingham Palace":"United Kingdom",
     "Sydney Opera House":"Australia",
     "the Parthenon":"Greece",
     "Salar de Uyuni salt flat":"Bolivia",
     "La Sagrada Família":"Spain",
     "Blue Lagoon" : "Iceland",
     "La Boca, Buenos Aires":"Argentina",
     "Chichen-Itza":"Mexico",
     "Hobbiton":"New Zealand",
     "Dubrovnik Old Town":"Croatia"
}



for i in range(1,11):
    c = 1
    que = list(queAndAns.keys())
    pname = "Quiz "+str(i)+".txt"
    aname = "ans "+str(i)+".txt"
    q = open(pname,"w")
    a = open(aname,'w')
    random.shuffle(que)
    for j in que:
        q.write("where is "+j+" located?\n")
        ans = list(queAndAns.values())
        op = [queAndAns[j]]
        ans.remove(queAndAns[j])
        op.append(random.choice(ans))
        op.append(random.choice(ans))
        op.append(random.choice(ans))
        random.shuffle(op)
        q.write("1."+op[0]+"\n2."+op[1]+"\n3."+op[2]+"\n4."+op[3]+"\n\n")
        a.write(str(c)+". " +queAndAns[j]+"\n")
        c+=1

        
        
    


