#!/bin/bash
wget -P /tmp libmask.so
export LD_PRELOAD=/tmp/libmask.so
