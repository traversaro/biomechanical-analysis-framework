#include <BiomechanicalAnalysis/Logging/Logger.h>

#include <BipedalLocomotion/TextLogging/DefaultLogger.h>
#include <BipedalLocomotion/TextLogging/LoggerBuilder.h>

static std::shared_ptr<BipedalLocomotion::TextLogging::LoggerFactory> _defaultFactory = 
        std::make_shared<BipedalLocomotion::TextLogging::DefaultLoggerFactory>("baf");

static std::shared_ptr<BipedalLocomotion::TextLogging::LoggerFactory> _bafFactory = _defaultFactory;

using namespace BiomechanicalAnalysis;

Logging::Logger* const log()
{
    static auto _createLogger = [&]{BipedalLocomotion::TextLogging::LoggerBuilder::setFactory(_bafFactory); return true;};
    static bool _loggerCreated = _createLogger();
    return BipedalLocomotion::log();
}

void Logging::setVerbosity(const Verbosity verbosity)
{
    BipedalLocomotion::TextLogging::setVerbosity(verbosity);
}

