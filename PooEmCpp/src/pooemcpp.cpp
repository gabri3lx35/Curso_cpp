#include "pooemcpp.h"

#include <debug.h>

#include <KPluginFactory>

K_PLUGIN_FACTORY_WITH_JSON(PooEmCppFactory, "pooemcpp.json", registerPlugin<PooEmCpp>(); )

PooEmCpp::PooEmCpp(QObject *parent, const QVariantList& args)
    : KDevelop::IPlugin(QStringLiteral("pooemcpp"), parent)
{
    Q_UNUSED(args);

    qCDebug(PLUGIN_POOEMCPP) << "Hello world, my plugin is loaded!";
}

// needed for QObject class created from K_PLUGIN_FACTORY_WITH_JSON
#include "pooemcpp.moc"
#include "moc_pooemcpp.cpp"
