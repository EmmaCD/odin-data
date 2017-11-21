/*
 * DummyPlugin.cpp
 *
 *  Created on: 2 Jun 2016
 *      Author: gnx91527
 */

#include "DummyPlugin.h"

namespace FrameProcessor
{

/**
 * The constructor sets up logging used within the class.
 */
DummyPlugin::DummyPlugin()
{
  // Setup logging for the class
  logger_ = Logger::getLogger("FW.DummyPlugin");
  logger_->setLevel(Level::getAll());
  LOG4CXX_TRACE(logger_, "DummyPlugin constructor.");
}

/**
 * Destructor.
 */
DummyPlugin::~DummyPlugin()
{
  LOG4CXX_TRACE(logger_, "DummyPlugin destructor.");
}

/**
 * Perform processing on the frame. For the DummyPlugin class we are
 * simply going to log that we have received a frame.
 *
 * \param[in] frame - Pointer to a Frame object.
 */
void DummyPlugin::process_frame(boost::shared_ptr<Frame> frame)
{
  LOG4CXX_TRACE(logger_, "Received a new frame...");
}

} /* namespace FrameProcessor */
