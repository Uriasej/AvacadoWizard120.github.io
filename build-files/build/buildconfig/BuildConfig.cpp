#include "BuildConfig.h"
#include <QObject>

const Config BuildConfig;

Config::Config()
{
    // Version information
    VERSION_MAJOR = 0;
    VERSION_MINOR = 6;
    VERSION_HOTFIX = 12;
    VERSION_BUILD = -1;

    BUILD_PLATFORM = "";
    CHANLIST_URL = "";
    ANALYTICS_ID = "UA-87731965-2";
    NOTIFICATION_URL = "";
    FULL_VERSION_STR = "0.6.-1";

    GIT_COMMIT = "911074e9669b6399df983a570c734018c2abd139";
    GIT_REFSPEC = "refs/heads/develop";
    if(GIT_REFSPEC.startsWith("refs/heads/") && !CHANLIST_URL.isEmpty() && VERSION_BUILD >= 0)
    {
        VERSION_CHANNEL = GIT_REFSPEC;
        VERSION_CHANNEL.remove("refs/heads/");
        UPDATER_ENABLED = true;
    }
    else
    {
        VERSION_CHANNEL = QObject::tr("custom");
    }

    VERSION_STR = "";
    NEWS_RSS_URL = "https://multimc.org/rss.xml";
    PASTE_EE_KEY = "utLvciUouSURFzfjPxLBf5W4ISsUX4pwBDF7N1AfZ";
    META_URL = "https://cavocraft.ml/CBMC/";
}

QString Config::printableVersionString() const
{
    QString vstr = QString("%1.%2.%3").arg(QString::number(VERSION_MAJOR), QString::number(VERSION_MINOR), QString::number(VERSION_HOTFIX));

    // If the build is not a main release, append the channel
    if(VERSION_CHANNEL != "stable")
    {
        vstr += "-" + VERSION_CHANNEL;
    }

    // if a build number is set, also add it to the end
    if(VERSION_BUILD >= 0)
    {
        vstr += "-" + QString::number(VERSION_BUILD);
    }
    return vstr;
}
