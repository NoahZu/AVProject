//
// Created by MOMO on 2021/3/31.
// 解码状态
//

#ifndef AVPROJECT_DECODESTATE_H
#define AVPROJECT_DECODESTATE_H

enum DecodeState {
    STOP,
    PREPARE,
    START,
    DECODING,
    PAUSE,
    FINISH
};

#endif //AVPROJECT_DECODESTATE_H
