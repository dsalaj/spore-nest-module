#! /usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import subprocess

sys.exit( subprocess.call([sys.executable, "network_node.py"]+sys.argv[1:]) )

