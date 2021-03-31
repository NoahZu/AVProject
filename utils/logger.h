//
// Created by MOMO on 2021/3/31.
//

#ifndef AVPROJECT_LOGGER_H
#define AVPROJECT_LOGGER_H

using namespace std;
#define LOG

#define LOGD(TAG, FORMAT,...) cout << TAG << FORMAT ;
#define LOGI(TAG, FORMAT,...) cout << TAG << FORMAT;
#define LOGW(TAG, FORMAT,...) cout << TAG << FORMAT;
#define LOGE(TAG, FORMAT,...) cout << TAG << FORMAT;


#endif //AVPROJECT_LOGGER_H
