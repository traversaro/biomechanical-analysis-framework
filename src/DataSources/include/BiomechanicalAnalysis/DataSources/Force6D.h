#ifndef BIOMECHANICAL_ANALYSIS_DATA_SOURCES_FORCE6D_H
#define BIOMECHANICAL_ANALYSIS_DATA_SOURCES_FORCE6D_H

#include <memory>

#include <Eigen/Dense>

namespace BiomechanicalAnalysis
{
namespace DataSources
{

template<typename Scalar>
class Force6D
{
public:
    virtual Eigen::Ref<Eigen::Matrix<Scalar,6,1>> getForce6D() const = 0;
};

} // namespace DataSources
} // namespace BiomechanicalAnalysis

#endif // BIOMECHANICAL_ANALYSIS_DATA_SOURCES_FORCE6D_H
