#pragma once

#include "drake/examples/iiwa_soccer/source_switcher.h"
#include "drake/examples/iiwa_soccer/nonconstant_abstract_source.h"
#include "drake/examples/iiwa_soccer/nonconstant_vector_source.h"
#include "drake/multibody/rigid_body_tree.h"
#include "drake/common/trajectories/piecewise_polynomial.h"

namespace drake {
namespace examples {
namespace iiwa_soccer {

struct switches {
  SourceSwitcher<double> *torque_source_switcher;
  SourceSwitcher<double> *setpt_source_switcher;
  SourceSwitcher<double> *offset_source_switcher;
  NonconstantVectorSource *offset_adj;

  NonconstantAbstractSource<trajectories::PiecewisePolynomial<double>> *full_dim_traj_receiver;
  RigidBodyTree<double> *tree;
};

}
}
}