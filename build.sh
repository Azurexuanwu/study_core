#!/bin/bash

# 检查build目录是否存在，如果存在则删除
if [ -d "build" ]; then
    echo "Deleting existing build directory..."
    rm -r build
fi

# 创建build目录并进入
mkdir build
cd build

# 运行CMake和make命令
echo "Running CMake..."
cmake ..

echo "Running make..."
make

# 检查make是否成功
if [ $? -eq 0 ]; then
    echo "Build successful!"
    # 可以在这里添加其他自定义操作，如果需要的话
else
    echo "Build failed."
fi

echo "start soft print..."
./main
