include core-image-renesas-base.inc

IMAGE_INSTALL_append_rzg1 = '${@base_conditional("USE_GLES", "1", \
    " libegl libegl-dev libgbm-dev", "", d)} \
    gstreamer1.0-plugins-bad-waylandsink \
    udev-rules '

# pkg groups for oss codecs
IMAGE_INSTALL_append_lcb = ' ${@base_conditional("USE_MULTIMEDIA", "1", " \
    packagegroup-lcb-oss-codecs \
    ", "", d)}'

IMAGE_INSTALL_append_lcb = " \
    can-utils \
    libsocketcan \
"
DISTRO_FEATURES_remove="x11"

IMAGE_INSTALL_append = " \
  usb-otg-init \
"
