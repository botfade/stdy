#include "stopwatch.h"
#include "stopwatchplugin.h"

#include <QtPlugin>

StopWatchPlugin::StopWatchPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void StopWatchPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool StopWatchPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *StopWatchPlugin::createWidget(QWidget *parent)
{
    return new StopWatch(parent);
}

QString StopWatchPlugin::name() const
{
    return QLatin1String("StopWatch");
}

QString StopWatchPlugin::group() const
{
    return QLatin1String("");
}

QIcon StopWatchPlugin::icon() const
{
    return QIcon();
}

QString StopWatchPlugin::toolTip() const
{
    return QLatin1String("");
}

QString StopWatchPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool StopWatchPlugin::isContainer() const
{
    return false;
}

QString StopWatchPlugin::domXml() const
{
    return QLatin1String("<widget class=\"StopWatch\" name=\"stopWatch\">\n</widget>\n");
}

QString StopWatchPlugin::includeFile() const
{
    return QLatin1String("stopwatch.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(stopwatchplugin, StopWatchPlugin)
#endif // QT_VERSION < 0x050000
