cmd_/home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/isdn/.install := bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/isdn ./include/uapi/linux/isdn capicmd.h; bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/isdn ./include/linux/isdn ; bash scripts/headers_install.sh /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/isdn ./include/generated/uapi/linux/isdn ; for F in ; do echo "\#include <asm-generic/$$F>" > /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/isdn/$$F; done; touch /home/buildbot/slave-local/brcm47xx_generic/build/build_dir/toolchain-mipsel_mips32_gcc-4.8-linaro_uClibc-0.9.33.2/linux-dev//include/linux/isdn/.install