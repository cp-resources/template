g++ $1.cpp
start=$(($(date +%s%N)/1000000))
./a.out
end=$(($(date +%s%N)/1000000))
diff=$((end-start))
echo -e  "\nTime taken:"$diff" ms"

