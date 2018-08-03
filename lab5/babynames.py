import csv

with open("babies-first-names-17-10-17.csv","r", encoding="latin-1") as csvfile:
	reader = csv.DictReader(csvfile)
	for row in reader:
		print(max(columns[3]))
#
