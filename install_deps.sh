# Catkin tools for build process
sudo apt-get install python-catkin-tools

# Additional ROS package dependencies
sudo apt-get install ros-melody-geographic-msgs
sudo apt-get install ros-melody-geodesy

# Eigen3 for several linear algebra problems
sudo apt-get install libeigen3-dev

# Gdal library for conversions between UTM and WGS84
sudo apt-get install gdal-bin

# Cgal library for delauney 2.5D triangulation and mesh creation
sudo apt-get install libcgal-dev
sudo apt-get install libcgal-qt5-dev

# PCL for writing point clouds and mesh data
sudo apt install libpcl-dev

# Pangolin
git clone https://github.com/stevenlovegrove/Pangolin.git
cd Pangolin && mkdir build && cd build && cmake ..
make -j && sudo make install
