#!/bin/bash

#
# Build U-Boot image when `mkimage' tool is available.
#

#MKIMAGE=$(type -path "${CROSS_COMPILE}mkimage")
MKIMAGE=scripts/mkimage

if [ -z "${MKIMAGE}" ]; then
	MKIMAGE=$(type -path mkimage)
	if [ -z "${MKIMAGE}" ]; then
		# Doesn't exist
		echo '"mkimage" command not found - U-Boot images will not be built' >&2
		exit 1;
	fi
fi

# Call "mkimage" to create U-Boot image
${MKIMAGE} "$@"
