rm -f qsort
rm -f Qsort.class
g++ -o qsort qsort.cpp
javac qsort.java
python3 ranList.py 100000 > input1.txt
python3 ranList.py 100000 > input2.txt
python3 ranList.py 100000 > input3.txt

START_TIME=$SECONDS
python3 qsort.py < input1.txt > lan1.txt
ELAPSED_TIME=$(($SECONDS - $START_TIME))

echo "Python Experiment took" $ELAPSED_TIME "seconds"

START_TIME=$SECONDS
./qsort < input3.txt > lan3.txt
ELAPSED_TIME=$(($SECONDS - $START_TIME))

echo "CPP Experiment took" $ELAPSED_TIME "seconds"

START_TIME=$SECONDS
java Qsort < input3.txt > lan3.txt
ELAPSED_TIME=$(($SECONDS - $START_TIME))

echo "Java Experiment took" $ELAPSED_TIME "seconds"

