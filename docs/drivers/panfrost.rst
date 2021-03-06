Panfrost
========

The Panfrost driver stack includes a **non-conformant** OpenGL ES
implementation for Arm Mali GPUs based on the Midgard and Bifrost
microarchitectures. The following GPUs are currently supported:

=========  ============ ============ =======
Product    Architecture OpenGL ES    OpenGL
=========  ============ ============ =======
Mali T720  Midgard (v4) 2.0          2.1
Mali T760  Midgard (v5) 3.0          2.1
Mali T820  Midgard (v5) 3.0          2.1
Mali T860  Midgard (v5) 3.0          2.1
Mali G72   Bifrost (v6) 2.0          2.1
Mali G31   Bifrost (v7) 2.0          2.1
Mali G52   Bifrost (v7) 2.0          2.1
=========  ============ ============ =======

Other Midgard and Bifrost chips (T604, T620, T830, T880, G71, G51, G76) may
work but may be buggy. End users are advised against using Panfrost on
unsupported hardware. Developers interested in porting will need to allowlist
the hardware (``src/gallium/drivers/panfrost/pan_screen.c``).

Older Mali chips based on the Utgard architecture (Mali 200, Mali 400) are
supported in the Lima driver, not Panfrost. Lima is also available in Mesa.

Work to enable OpenGL ES 3.1 and OpenGL 3.1 is on-going for architectures v5
and later (Mali T760 and newer).

Other graphics APIs (Vulkan, OpenCL) are not supported at this time.
