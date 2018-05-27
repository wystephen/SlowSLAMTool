//
// Created by steve on 18-5-27.
//

#ifndef SLOWSLAMTOOL_IMAGEMANAGER_H
#define SLOWSLAMTOOL_IMAGEMANAGER_H

#include <vector>
#include <map>

#include <boost/serialization/serialization.hpp>

#include <opencv2/opencv.hpp>

class ImageManager {
public:
	ImageManager();

private:


	std::map<int, std::string> image_name_map; // image id -> image name

	std::map<int , cv::Mat> image_map; //image id -> image(opencv mat)





};


#endif //SLOWSLAMTOOL_IMAGEMANAGER_H
