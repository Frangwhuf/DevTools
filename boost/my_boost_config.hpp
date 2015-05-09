#pragma once

// The following fixes the auto-link behavior on windows, since we build with layout=tagged
#define BOOST_AUTO_LINK_TAGGED
#ifdef BOOST_MSVC
#  pragma warning (disable : 4619)
#endif // BOOST_MSVC