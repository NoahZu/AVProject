cmake_minimum_required(VERSION 3.17)
project(AVProject)

set(FFMPEG_DIR /usr/local/Cellar/ffmpeg/4.3.2_3)
include_directories(${FFMPEG_DIR}/include/)
link_directories(${FFMPEG_DIR}/lib/)

set(CMAKE_CXX_STANDARD 14)

add_executable(AVProject main.cpp codec/decoder/IDecoder.h codec/OneFrame.h codec/decoder/IDecodeStateCb.h)

target_link_libraries(
        AVProject
        avcodec
        avdevice
        avfilter
        avformat
)