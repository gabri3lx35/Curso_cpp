#ifndef POOEMCPP_H
#define POOEMCPP_H

#include <interfaces/iplugin.h>

class PooEmCpp : public KDevelop::IPlugin
{
    Q_OBJECT

public:
    // KPluginFactory-based plugin wants constructor with this signature
    PooEmCpp(QObject* parent, const QVariantList& args);
};

#endif // POOEMCPP_H
