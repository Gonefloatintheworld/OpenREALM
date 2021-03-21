#include <realm_core/sparse_cloud.h>

using namespace realm;

SparseCloud::SparseCloud()
{
}

SparseCloud::SparseCloud(uint32_t context_id, const std::vector<uint32_t> &point_ids, const cv::Mat &data)
 :  m_context_id(context_id),
    m_point_ids(point_ids),
    m_data(data)
{
  if (data.rows != m_point_ids.size())
    throw(std::invalid_argument("Error creating sparse cloud: Data - ID mismatch!"));
}

bool SparseCloud::empty()
{
  if (m_data.rows == 0)
    return true;
  return false;
}

cv::Mat& SparseCloud::data()
{
  return m_data;
}

uint32_t SparseCloud::getContextId()
{
  return m_context_id;
}

std::vector<int> SparseCloud::getPointIds()
{
  return getPointIds();
}

int SparseCloud::size()
{
  return m_data.rows;
}