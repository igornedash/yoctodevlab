DESCRIPTION = "nano GNU editor used as part of 'Hello World' Yocto example"
SECTION = "console/utils"
SITE = "http://www.nano-editor.org/dist"
SUMMARY = "Recipe to build the 'nano' editor"
LICENSE = "GPLv3.0"
LIC_FILES_CHKSUM = "file://COPYING;md5=f27defe1e96c2e1ecd4e0c9be8967949"
DEPENDS = "ncurses file"
RDEPENDS_${PN} = "ncurses-terminfo"

PV_MAJOR = "${@bb.data.getVar('PV', d, 1).split('.')[0]}"
PV_MINOR = "${@bb.data.getVar('PV', d, 1).split('.')[1]}"

SRC_URI = "${SITE}/v${PV_MAJOR}.${PV_MINOR}/${PN}-${PV}.tar.gz"

inherit autotools gettext pkgconfig

PACKAGECONFIG[tiny] = "--enable-tiny,"
