i=2000
while [ $i -gt 0 ]
do
lockfile ex2.txt.lock
a=`tail -n 1 ex2.txt`
a=$((a + 1))
echo "$a" >> ex2.txt
rm -f ex2.txt.lock
i=$((i - 1))
done
