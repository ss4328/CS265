{s=($2+$3+$4+$5+$6)/5;}

{if(s >= 90) gr="A"
else if (s >= 80) gr="B"
else if (s >= 70) gr="C"
else if (s >= 60) gr="D"
else gr="F"
print $1, s, gr}
