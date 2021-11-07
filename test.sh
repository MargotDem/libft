rm ./a.out
gcc -Wall -Wextra -Werror ./tests/$1".c" ./tests/tests.c -L. -lft
file=${1}
echo "\n\n\n"$file" " | tr '[:lower:]' '[:upper:]'
echo "\n*********************************************************************************************"

echo "\n\n************	content of test file	************\n\n\n"
cat ./tests/$1".c"
echo "\n\n\n************	"$file tests"	************\n\n\n"
./a.out
echo "\n"
gcc -Wall -Wextra -Werror ./tests/$1".c" ./tests/tests.c -L. -lft