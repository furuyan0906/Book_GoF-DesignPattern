if [ -e ./bin ]; then
    rm -rf ./bin
fi

mkdir ./bin
cd ./bin

echo 'run cmake...'
cmake ..
cmake --build .

echo 'end cmake'