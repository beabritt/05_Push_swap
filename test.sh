#/bin/bash
RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m' # No Color
while :
do
	#clang main.c operations*.c parser.c utils.c order*.c  -o push_swap
	ARG=$(seq -1000 1000 | sort -R | tail -n 5 | tr '\n' ' ')
	echo $ARG
	./push_swap $ARG | wc -l
	# ./push_swap $ARG | cat -e
	#./push_swap $ARG | ./checker_linux $ARG
	RESULT=$(./push_swap $ARG | ./checker_linux $ARG)
	if [[ $RESULT != "OK" ]]; then
		echo ${RED}
	fi
	echo $RESULT
	echo ${NC}
	sleep .5
done