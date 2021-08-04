#include "ros/ros.h"
#include "prac1_pkg/msg_tuto.h"

void msgCallback(const prac1_pkg::msg_tuto::ConstPtr& msg)
{
	ROS_INFO("receive msg = %d",msg-> stamp.sec);
	ROS_INFO("receive msg = %d", msg-> stamp.nsec);
	ROS_INFO("receive msg = %d", msg-> data);
}

int main(int argc, char **argv)
{
	ros::init(argc,argv, "sub_prac");
	ros::NodeHandle nh;
	
	ros::Subscriber sub = nh.subscribe("hello",100,msgCallback);

	ros::spin();
	return 0;
}
