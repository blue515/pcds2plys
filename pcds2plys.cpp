#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_types.h>
using namespace pcl;
using namespace pcl::io;
int main(int argc,char* argv)
{
    pcl::PCDReader reader;
    pcl::PointCloud<pcl::PointXYZRGBA>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGBA>);
    std::string path1 = "/home/blue/blender/train/mug/pcds/";
    std::string path2 = "/home/blue/blender/train/mug/plys/";
    for(int i=1;i<10;i++)
    {
        std::string pcd_cloud = path1+"mug_00"+boost::to_string(i)+".pcd";
        std::string ply_cloud = path2+"mug_00"+boost::to_string(i)+".ply";
        reader.read<pcl::PointXYZRGBA>(pcd_cloud,*cloud);
        pcl::io::savePLYFile(ply_cloud,*cloud);
    }
    for(int i=10;i<17;i++)
    {
        std::string pcd_cloud = path1+"mug_0"+boost::to_string(i)+".pcd";
        std::string ply_cloud = path2+"mug_0"+boost::to_string(i)+".ply";
        reader.read<pcl::PointXYZRGBA>(pcd_cloud,*cloud);
        pcl::io::savePLYFile(ply_cloud,*cloud);
    }
    return 0;
}
