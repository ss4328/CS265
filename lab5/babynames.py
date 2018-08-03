import csv

with open("babies-first-names-17-10-17.csv","r", encoding="latin-1") as f: 
	reader = csv.reader(f, delimiter=',')
	has_header = csv.Sniffer().has_header(f.read(1024))
	f.seek(0)
	maximum=0
	name=''
	if has_header:
		next(reader)
	for row in reader:
#		print(row)
		try:
			if(isinstance(int(row[3]), int)):
				if(int(row[3])>maximum):
					maximum = int(row[3])
					name = row[2]
		except ValueError:
			print("The most popular name was: "+ name +" given to " +str(maximum)+ " children");
			exit
