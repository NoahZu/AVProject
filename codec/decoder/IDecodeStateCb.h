//
// Created by MOMO on 2021/3/29.
//

#ifndef FFMPEGPROJECT_IDECODESTATECB_H
#define FFMPEGPROJECT_IDECODESTATECB_H

#include "../OneFrame.h"

class IDecoder;

class IDecodeStateCb {
public:
    IDecodeStateCb();
    virtual void DecodePrepare(IDecoder *decoder) = 0;
    virtual void DecodeReady(IDecoder *decoder) = 0;
    virtual void DecodeRunning(IDecoder *decoder) = 0;
    virtual void DecodePause(IDecoder *decoder) = 0;
    virtual bool DecodeOneFrame(IDecoder *decoder, OneFrame *frame) = 0;
    virtual void DecodeFinish(IDecoder *decoder) = 0;
    virtual void DecodeStop(IDecoder *decoder) = 0;
};

#endif //FFMPEGPROJECT_IDECODESTATECB_H
