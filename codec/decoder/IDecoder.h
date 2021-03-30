//
// Created by MOMO on 2021/3/29.
//

#ifndef FFMPEGPROJECT_IDECODER_H
#define FFMPEGPROJECT_IDECODER_H
#include "IDecodeStateCb.h"

class IDecoder {
    virtual void GoOn() = 0;
    virtual void Pause() = 0;
    virtual void Stop() = 0;
    virtual bool IsRunning() = 0;
    virtual long GetDuration() = 0;
    virtual long GetCurPos() = 0;
    virtual void SetStateReceiver(IDecodeStateCb *cb) = 0;
};


#endif //FFMPEGPROJECT_IDECODER_H
