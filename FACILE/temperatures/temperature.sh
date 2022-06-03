# n: the number of temperatures to analyse
read -r n
read -r -a myArray

# Initialisation variable result contenant la température la plus proche de zero
result=5526

# case without any temp!
[[ $n == 0 ]] && echo "0" && exit

for (( i=0; i<$n; i++ )); do
    # t: a temperature expressed as an integer ranging from -273 to 5526
    t=${myArray[$((i))]}
    echo "t=$t inf res=$result ??" >&2

    if [[ $t == -$result || -$t == $result ]]; then
        [[ $t -lt 0 ]] && result=$result 
        [[ $result -lt 0 ]] && result=$t 
    else
        [[ ($t -gt 0 && $result -gt 0) && $t -lt $result ]]  && result=$t 
        [[ ($t -lt 0 && $result -lt 0) && $result -lt $t ]]  && result=$t 
        [[ ($t -gt 0 && $result -lt 0) && $t -lt -$result ]] && result=$t 
        [[ ($t -lt 0 && $result -gt 0) && -$t -lt $result ]] && result=$t 
    fi
     
done

echo "$result"
