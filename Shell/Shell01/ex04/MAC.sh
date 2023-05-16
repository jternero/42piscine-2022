#! /bin/sh
ifconfig -a | grep -ioE '([a-f0-9]{2}:){5}..'
