#include "TrackerWrapper.h"


TrackerWrapper::TrackerWrapper(Tracker* model, TRACKER_TYPE type)
{
    this->model = model;
    this->type = type;
}

TrackerWrapper::~TrackerWrapper()
{
    delete this->model;
}

void TrackerWrapper::predict(cv::Mat& image, FaceData& face_data, IFilter* filter)
{
    model->predict(image, face_data, filter);
}

TRACKER_TYPE TrackerWrapper::get_type()
{
    return type;
}
