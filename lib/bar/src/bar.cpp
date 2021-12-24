#include "bar.h"

#include <glog/logging.h>


bar::bar() {
    google::InitGoogleLogging("GLOG_logtostderr=1");
}

bar::~bar() {
    LOG(INFO) << "bar destructor !!!";
}

void bar::print(void) {
    LOG(INFO) << "bar print called !!!";
}