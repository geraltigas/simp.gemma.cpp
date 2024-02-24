//
// Created by geraltigas on 2/24/24.
//

#include <app.h>
#include <iostream>
#include <glog/logging.h>
#include <macros.h>

int init_glog(int /*argc*/, char* argv[])
{
    google::InitGoogleLogging(argv[0]);
    google::InstallFailureSignalHandler();
    google::InstallFailureWriter([](const char* data, int size) {
        std::cerr.write(data, size);
    });
    return 0;
}

int app::run(int argc, char* argv[])
{
    // init glog
    CHECK_RT_MSG(init_glog(argc, argv), "Failed to init glog");

    LOG(INFO) << "app::run";
    return 0;
}
