#include "ros/ros.h"
#include "prac1_pkg/msg_tuto.h"

int main ( int argc, char **argv){
	ros::init(argc,argv, "pub_prac");  // 노드 이름 초기화
	ros::NodeHandle nh;	           // Ros시스템과 통신을 위한 노드 핸들 선언
	
	ros::Publisher pub=nh.advertise<prac1_pkg::msg_tuto>("hello",100);
	ros::Rate loop_rate(50);
	prac1_pkg::msg_tuto msg;
	
	int count=0;
	while(ros::ok())
	{
		msg.stamp == ros::Time::now();
		msg.data = count;

		pub.publish(msg);

		loop_rate.sleep();
		++count;
	}
	return 0;
}