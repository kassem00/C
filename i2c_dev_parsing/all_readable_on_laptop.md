# the code 
import os

def walk_sysfs(base="/sys/devices/platform"):
    for root, dirs, files in os.walk(base):
        for name in files:
            full = os.path.join(root, name)
            try:
                with open(full) as f:
                    val = f.read().strip()
                print(f"{full}: {val}")
            except:
                pass  # Not readable

walk_sysfs()









# the readble values



e@e_[i2c_dev_parsing]_02:05_-$ ipython     
Python 3.11.2 (main, Apr 28 2025, 14:11:48) [GCC 12.2.0]
Type 'copyright', 'credits' or 'license' for more information
IPython 8.32.0 -- An enhanced Interactive Python. Type '?' for help.

In [1]: import os
   ...: 
   ...: def walk_sysfs(base="/sys/devices/platform"):
   ...:     for root, dirs, files in os.walk(base):
   ...:         for name in files:
   ...:             full = os.path.join(root, name)
   ...:             try:
   ...:                 with open(full) as f:
   ...:                     val = f.read().strip()
   ...:                 print(f"{full}: {val}")
   ...:             except:
   ...:                 pass  # Not readable
   ...: 
   ...: walk_sysfs()
   ...: 
/sys/devices/platform/uevent: 
/sys/devices/platform/PNP0C14:00/uevent: DRIVER=acpi-wmi
MODALIAS=acpi:PNP0C14:
/sys/devices/platform/PNP0C14:00/driver_override: (null)
/sys/devices/platform/PNP0C14:00/modalias: acpi:PNP0C14:
/sys/devices/platform/PNP0C14:00/power/runtime_active_time: 0
/sys/devices/platform/PNP0C14:00/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C14:00/power/runtime_usage: 0
/sys/devices/platform/PNP0C14:00/power/runtime_status: unsupported
/sys/devices/platform/PNP0C14:00/power/async: disabled
/sys/devices/platform/PNP0C14:00/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C14:00/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C14:00/power/control: auto
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/uevent: 
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/uevent: DEVTYPE=data
DRIVER=wmi-bmof
MODALIAS=wmi:05901221-D566-11D1-B2F0-00A0C9062910
WMI_GUID=05901221-D566-11D1-B2F0-00A0C9062910
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/setable: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/object_id: MO
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/expensive: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/instance_count: 1
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/guid: 05901221-D566-11D1-B2F0-00A0C9062910
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/modalias: wmi:05901221-D566-11D1-B2F0-00A0C9062910
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/power/runtime_active_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/power/runtime_usage: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/power/runtime_status: unsupported
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/power/async: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/05901221-D566-11D1-B2F0-00A0C9062910/power/control: auto
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/uevent: DEVTYPE=data
DRIVER=dell-wmi-descriptor
MODALIAS=wmi:8D9DDCBC-A997-11DA-B012-B622A1EF5492
WMI_GUID=8D9DDCBC-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/setable: 1
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/object_id: AA
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/expensive: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/instance_count: 1
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/guid: 8D9DDCBC-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/modalias: wmi:8D9DDCBC-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/power/runtime_active_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/power/runtime_usage: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/power/runtime_status: unsupported
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/power/async: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/8D9DDCBC-A997-11DA-B012-B622A1EF5492/power/control: auto
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/power/runtime_active_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/power/runtime_usage: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/power/runtime_status: unsupported
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/power/async: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/power/control: auto
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/uevent: DEVTYPE=event
DRIVER=dell-wmi
MODALIAS=wmi:9DBB5994-A997-11DA-B012-B622A1EF5492
WMI_GUID=9DBB5994-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/expensive: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/notify_id: D0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/instance_count: 1
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/guid: 9DBB5994-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/modalias: wmi:9DBB5994-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/power/runtime_active_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/power/runtime_usage: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/power/runtime_status: unsupported
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/power/async: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/power/control: auto
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/uevent: PRODUCT=19/0/0/0
NAME="Dell WMI hotkeys"
PROP=0
EV=13
KEY=800000000000 0 0 1500b00000c00 4000000200300000 e000000000000 0
MSC=10
MODALIAS=input:b0019v0000p0000e0000-e0,1,4,k71,72,73,94,95,A1,BE,CA,CB,E0,E1,E3,EC,EE,F0,1AF,ram4,lsfw
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/uniq: 
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/inhibited: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/properties: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/phys: 
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/name: Dell WMI hotkeys
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/modalias: input:b0019v0000p0000e0000-e0,1,4,k71,72,73,94,95,A1,BE,CA,CB,E0,E1,E3,EC,EE,F0,1AF,ram4,lsfw
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/uevent: MAJOR=13
MINOR=79
DEVNAME=input/event15
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/dev: 13:79
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/power/runtime_active_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/power/runtime_usage: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/power/runtime_status: unsupported
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/power/async: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/event15/power/control: auto
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/rel: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/abs: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/ff: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/led: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/sw: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/key: 800000000000 0 0 1500b00000c00 4000000200300000 e000000000000 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/msc: 10
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/snd: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/capabilities/ev: 13
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/power/runtime_active_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/power/runtime_usage: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/power/runtime_status: unsupported
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/power/async: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/power/control: auto
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/id/bustype: 0019
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/id/vendor: 0000
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/id/product: 0000
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/9DBB5994-A997-11DA-B012-B622A1EF5492/input/input16/id/version: 0000
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/uevent: DEVTYPE=method
DRIVER=dell-smbios
MODALIAS=wmi:A80593CE-A997-11DA-B012-B622A1EF5492
WMI_GUID=A80593CE-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/object_id: BA
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/expensive: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/instance_count: 1
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/guid: A80593CE-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/modalias: wmi:A80593CE-A997-11DA-B012-B622A1EF5492
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/power/runtime_active_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/power/runtime_usage: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/power/runtime_status: unsupported
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/power/async: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C14:00/wmi_bus/wmi_bus-PNP0C14:00/A80593CE-A997-11DA-B012-B622A1EF5492/power/control: auto
/sys/devices/platform/reg-dummy/uevent: DRIVER=reg-dummy
MODALIAS=platform:reg-dummy
/sys/devices/platform/reg-dummy/driver_override: (null)
/sys/devices/platform/reg-dummy/modalias: platform:reg-dummy
/sys/devices/platform/reg-dummy/regulator/regulator.0/uevent: 
/sys/devices/platform/reg-dummy/regulator/regulator.0/num_users: 3
/sys/devices/platform/reg-dummy/regulator/regulator.0/suspend_disk_state: disabled
/sys/devices/platform/reg-dummy/regulator/regulator.0/requested_microamps: 0
/sys/devices/platform/reg-dummy/regulator/regulator.0/suspend_mem_state: disabled
/sys/devices/platform/reg-dummy/regulator/regulator.0/type: voltage
/sys/devices/platform/reg-dummy/regulator/regulator.0/suspend_standby_state: disabled
/sys/devices/platform/reg-dummy/regulator/regulator.0/name: regulator-dummy
/sys/devices/platform/reg-dummy/regulator/regulator.0/power/runtime_active_time: 0
/sys/devices/platform/reg-dummy/regulator/regulator.0/power/runtime_active_kids: 0
/sys/devices/platform/reg-dummy/regulator/regulator.0/power/runtime_usage: 0
/sys/devices/platform/reg-dummy/regulator/regulator.0/power/runtime_status: unsupported
/sys/devices/platform/reg-dummy/regulator/regulator.0/power/async: disabled
/sys/devices/platform/reg-dummy/regulator/regulator.0/power/runtime_suspended_time: 0
/sys/devices/platform/reg-dummy/regulator/regulator.0/power/runtime_enabled: disabled
/sys/devices/platform/reg-dummy/regulator/regulator.0/power/control: auto
/sys/devices/platform/reg-dummy/power/runtime_active_time: 0
/sys/devices/platform/reg-dummy/power/runtime_active_kids: 0
/sys/devices/platform/reg-dummy/power/runtime_usage: 0
/sys/devices/platform/reg-dummy/power/runtime_status: unsupported
/sys/devices/platform/reg-dummy/power/async: disabled
/sys/devices/platform/reg-dummy/power/runtime_suspended_time: 0
/sys/devices/platform/reg-dummy/power/runtime_enabled: disabled
/sys/devices/platform/reg-dummy/power/control: auto
/sys/devices/platform/PNP0C0D:00/uevent: MODALIAS=acpi:PNP0C0D:
/sys/devices/platform/PNP0C0D:00/driver_override: (null)
/sys/devices/platform/PNP0C0D:00/waiting_for_supplier: 0
/sys/devices/platform/PNP0C0D:00/modalias: acpi:PNP0C0D:
/sys/devices/platform/PNP0C0D:00/power/runtime_active_time: 0
/sys/devices/platform/PNP0C0D:00/power/wakeup: disabled
/sys/devices/platform/PNP0C0D:00/power/wakeup_count: 
/sys/devices/platform/PNP0C0D:00/power/wakeup_abort_count: 
/sys/devices/platform/PNP0C0D:00/power/wakeup_expire_count: 
/sys/devices/platform/PNP0C0D:00/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C0D:00/power/wakeup_total_time_ms: 
/sys/devices/platform/PNP0C0D:00/power/wakeup_active_count: 
/sys/devices/platform/PNP0C0D:00/power/runtime_usage: 0
/sys/devices/platform/PNP0C0D:00/power/runtime_status: unsupported
/sys/devices/platform/PNP0C0D:00/power/async: disabled
/sys/devices/platform/PNP0C0D:00/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C0D:00/power/wakeup_max_time_ms: 
/sys/devices/platform/PNP0C0D:00/power/wakeup_active: 
/sys/devices/platform/PNP0C0D:00/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C0D:00/power/control: auto
/sys/devices/platform/PNP0C0D:00/power/wakeup_last_time_ms: 
/sys/devices/platform/PNP0C0A:00/uevent: MODALIAS=acpi:PNP0C0A:
/sys/devices/platform/PNP0C0A:00/driver_override: (null)
/sys/devices/platform/PNP0C0A:00/waiting_for_supplier: 0
/sys/devices/platform/PNP0C0A:00/modalias: acpi:PNP0C0A:
/sys/devices/platform/PNP0C0A:00/power/runtime_active_time: 0
/sys/devices/platform/PNP0C0A:00/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C0A:00/power/runtime_usage: 0
/sys/devices/platform/PNP0C0A:00/power/runtime_status: unsupported
/sys/devices/platform/PNP0C0A:00/power/async: disabled
/sys/devices/platform/PNP0C0A:00/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C0A:00/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C0A:00/power/control: auto
/sys/devices/platform/ACPI0003:00/uevent: MODALIAS=acpi:ACPI0003:
/sys/devices/platform/ACPI0003:00/driver_override: (null)
/sys/devices/platform/ACPI0003:00/waiting_for_supplier: 0
/sys/devices/platform/ACPI0003:00/modalias: acpi:ACPI0003:
/sys/devices/platform/ACPI0003:00/power/runtime_active_time: 0
/sys/devices/platform/ACPI0003:00/power/runtime_active_kids: 0
/sys/devices/platform/ACPI0003:00/power/runtime_usage: 0
/sys/devices/platform/ACPI0003:00/power/runtime_status: unsupported
/sys/devices/platform/ACPI0003:00/power/async: disabled
/sys/devices/platform/ACPI0003:00/power/runtime_suspended_time: 0
/sys/devices/platform/ACPI0003:00/power/runtime_enabled: disabled
/sys/devices/platform/ACPI0003:00/power/control: auto
/sys/devices/platform/lis3lv02d/uevent: MODALIAS=platform:lis3lv02d
/sys/devices/platform/lis3lv02d/position: (-72,-72,-1188)
/sys/devices/platform/lis3lv02d/rate: 50
/sys/devices/platform/lis3lv02d/driver_override: (null)
/sys/devices/platform/lis3lv02d/modalias: platform:lis3lv02d
/sys/devices/platform/lis3lv02d/power/runtime_active_time: 0
/sys/devices/platform/lis3lv02d/power/runtime_active_kids: 0
/sys/devices/platform/lis3lv02d/power/runtime_usage: 0
/sys/devices/platform/lis3lv02d/power/runtime_status: unsupported
/sys/devices/platform/lis3lv02d/power/async: disabled
/sys/devices/platform/lis3lv02d/power/runtime_suspended_time: 0
/sys/devices/platform/lis3lv02d/power/runtime_enabled: disabled
/sys/devices/platform/lis3lv02d/power/control: auto
/sys/devices/platform/lis3lv02d/input/input12/uevent: PRODUCT=19/0/0/0
NAME="ST LIS3LV02DL Accelerometer"
PHYS="lis3lv02d/input0"
PROP=0
EV=9
ABS=7
MODALIAS=input:b0019v0000p0000e0000-e0,3,kra0,1,2,mlsfw
/sys/devices/platform/lis3lv02d/input/input12/uniq: 
/sys/devices/platform/lis3lv02d/input/input12/inhibited: 0
/sys/devices/platform/lis3lv02d/input/input12/properties: 0
/sys/devices/platform/lis3lv02d/input/input12/min: 0
/sys/devices/platform/lis3lv02d/input/input12/max: 2000
/sys/devices/platform/lis3lv02d/input/input12/phys: lis3lv02d/input0
/sys/devices/platform/lis3lv02d/input/input12/poll: 50
/sys/devices/platform/lis3lv02d/input/input12/name: ST LIS3LV02DL Accelerometer
/sys/devices/platform/lis3lv02d/input/input12/modalias: input:b0019v0000p0000e0000-e0,3,kra0,1,2,mlsfw
/sys/devices/platform/lis3lv02d/input/input12/capabilities/rel: 0
/sys/devices/platform/lis3lv02d/input/input12/capabilities/abs: 7
/sys/devices/platform/lis3lv02d/input/input12/capabilities/ff: 0
/sys/devices/platform/lis3lv02d/input/input12/capabilities/led: 0
/sys/devices/platform/lis3lv02d/input/input12/capabilities/sw: 0
/sys/devices/platform/lis3lv02d/input/input12/capabilities/key: 0
/sys/devices/platform/lis3lv02d/input/input12/capabilities/msc: 0
/sys/devices/platform/lis3lv02d/input/input12/capabilities/snd: 0
/sys/devices/platform/lis3lv02d/input/input12/capabilities/ev: 9
/sys/devices/platform/lis3lv02d/input/input12/power/runtime_active_time: 0
/sys/devices/platform/lis3lv02d/input/input12/power/runtime_active_kids: 0
/sys/devices/platform/lis3lv02d/input/input12/power/runtime_usage: 0
/sys/devices/platform/lis3lv02d/input/input12/power/runtime_status: unsupported
/sys/devices/platform/lis3lv02d/input/input12/power/async: disabled
/sys/devices/platform/lis3lv02d/input/input12/power/runtime_suspended_time: 0
/sys/devices/platform/lis3lv02d/input/input12/power/runtime_enabled: disabled
/sys/devices/platform/lis3lv02d/input/input12/power/control: auto
/sys/devices/platform/lis3lv02d/input/input12/event11/uevent: MAJOR=13
MINOR=75
DEVNAME=input/event11
/sys/devices/platform/lis3lv02d/input/input12/event11/dev: 13:75
/sys/devices/platform/lis3lv02d/input/input12/event11/power/runtime_active_time: 0
/sys/devices/platform/lis3lv02d/input/input12/event11/power/runtime_active_kids: 0
/sys/devices/platform/lis3lv02d/input/input12/event11/power/runtime_usage: 0
/sys/devices/platform/lis3lv02d/input/input12/event11/power/runtime_status: unsupported
/sys/devices/platform/lis3lv02d/input/input12/event11/power/async: disabled
/sys/devices/platform/lis3lv02d/input/input12/event11/power/runtime_suspended_time: 0
/sys/devices/platform/lis3lv02d/input/input12/event11/power/runtime_enabled: disabled
/sys/devices/platform/lis3lv02d/input/input12/event11/power/control: auto
/sys/devices/platform/lis3lv02d/input/input12/id/bustype: 0019
/sys/devices/platform/lis3lv02d/input/input12/id/vendor: 0000
/sys/devices/platform/lis3lv02d/input/input12/id/product: 0000
/sys/devices/platform/lis3lv02d/input/input12/id/version: 0000
/sys/devices/platform/lis3lv02d/input/input12/js0/uevent: MAJOR=13
MINOR=0
DEVNAME=input/js0
/sys/devices/platform/lis3lv02d/input/input12/js0/dev: 13:0
/sys/devices/platform/lis3lv02d/input/input12/js0/power/runtime_active_time: 0
/sys/devices/platform/lis3lv02d/input/input12/js0/power/runtime_active_kids: 0
/sys/devices/platform/lis3lv02d/input/input12/js0/power/runtime_usage: 0
/sys/devices/platform/lis3lv02d/input/input12/js0/power/runtime_status: unsupported
/sys/devices/platform/lis3lv02d/input/input12/js0/power/async: disabled
/sys/devices/platform/lis3lv02d/input/input12/js0/power/runtime_suspended_time: 0
/sys/devices/platform/lis3lv02d/input/input12/js0/power/runtime_enabled: disabled
/sys/devices/platform/lis3lv02d/input/input12/js0/power/control: auto
/sys/devices/platform/dell-smbios.1/uevent: DRIVER=dell-smbios
MODALIAS=platform:dell-smbios
/sys/devices/platform/dell-smbios.1/driver_override: (null)
/sys/devices/platform/dell-smbios.1/modalias: platform:dell-smbios
/sys/devices/platform/dell-smbios.1/power/runtime_active_time: 0
/sys/devices/platform/dell-smbios.1/power/runtime_active_kids: 0
/sys/devices/platform/dell-smbios.1/power/runtime_usage: 0
/sys/devices/platform/dell-smbios.1/power/runtime_status: unsupported
/sys/devices/platform/dell-smbios.1/power/async: disabled
/sys/devices/platform/dell-smbios.1/power/runtime_suspended_time: 0
/sys/devices/platform/dell-smbios.1/power/runtime_enabled: disabled
/sys/devices/platform/dell-smbios.1/power/control: auto
/sys/devices/platform/dcdbas/uevent: DRIVER=dcdbas
MODALIAS=platform:dcdbas
/sys/devices/platform/dcdbas/driver_override: (null)
/sys/devices/platform/dcdbas/modalias: platform:dcdbas
/sys/devices/platform/dcdbas/power/runtime_active_time: 0
/sys/devices/platform/dcdbas/power/runtime_active_kids: 0
/sys/devices/platform/dcdbas/power/runtime_usage: 0
/sys/devices/platform/dcdbas/power/runtime_status: unsupported
/sys/devices/platform/dcdbas/power/async: disabled
/sys/devices/platform/dcdbas/power/runtime_suspended_time: 0
/sys/devices/platform/dcdbas/power/runtime_enabled: disabled
/sys/devices/platform/dcdbas/power/control: auto
/sys/devices/platform/snd_aloop.0/uevent: DRIVER=snd_aloop
MODALIAS=platform:snd_aloop
/sys/devices/platform/snd_aloop.0/driver_override: (null)
/sys/devices/platform/snd_aloop.0/modalias: platform:snd_aloop
/sys/devices/platform/snd_aloop.0/power/runtime_active_time: 0
/sys/devices/platform/snd_aloop.0/power/runtime_active_kids: 0
/sys/devices/platform/snd_aloop.0/power/runtime_usage: 0
/sys/devices/platform/snd_aloop.0/power/runtime_status: unsupported
/sys/devices/platform/snd_aloop.0/power/async: disabled
/sys/devices/platform/snd_aloop.0/power/runtime_suspended_time: 0
/sys/devices/platform/snd_aloop.0/power/runtime_enabled: disabled
/sys/devices/platform/snd_aloop.0/power/control: auto
/sys/devices/platform/snd_aloop.0/sound/card2/uevent: 
/sys/devices/platform/snd_aloop.0/sound/card2/id: Loopback
/sys/devices/platform/snd_aloop.0/sound/card2/number: 2
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/uevent: MAJOR=116
MINOR=6
DEVNAME=snd/controlC2
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/dev: 116:6
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/power/runtime_active_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/power/runtime_active_kids: 0
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/power/runtime_usage: 0
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/power/runtime_status: unsupported
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/power/async: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/power/runtime_suspended_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/power/runtime_enabled: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/controlC2/power/control: auto
/sys/devices/platform/snd_aloop.0/sound/card2/power/runtime_active_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/power/runtime_active_kids: 0
/sys/devices/platform/snd_aloop.0/sound/card2/power/runtime_usage: 0
/sys/devices/platform/snd_aloop.0/sound/card2/power/runtime_status: unsupported
/sys/devices/platform/snd_aloop.0/sound/card2/power/async: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/power/runtime_suspended_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/power/runtime_enabled: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/power/control: auto
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/uevent: MAJOR=116
MINOR=5
DEVNAME=snd/pcmC2D1c
DEVTYPE=pcm
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/dev: 116:5
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/pcm_class: generic
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/power/runtime_active_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/power/runtime_active_kids: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/power/runtime_usage: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/power/runtime_status: unsupported
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/power/async: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/power/runtime_suspended_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/power/runtime_enabled: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1c/power/control: auto
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/uevent: MAJOR=116
MINOR=3
DEVNAME=snd/pcmC2D0c
DEVTYPE=pcm
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/dev: 116:3
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/pcm_class: generic
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/power/runtime_active_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/power/runtime_active_kids: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/power/runtime_usage: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/power/runtime_status: unsupported
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/power/async: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/power/runtime_suspended_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/power/runtime_enabled: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0c/power/control: auto
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/uevent: MAJOR=116
MINOR=4
DEVNAME=snd/pcmC2D1p
DEVTYPE=pcm
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/dev: 116:4
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/pcm_class: generic
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/power/runtime_active_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/power/runtime_active_kids: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/power/runtime_usage: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/power/runtime_status: unsupported
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/power/async: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/power/runtime_suspended_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/power/runtime_enabled: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D1p/power/control: auto
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/uevent: MAJOR=116
MINOR=2
DEVNAME=snd/pcmC2D0p
DEVTYPE=pcm
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/dev: 116:2
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/pcm_class: generic
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/power/runtime_active_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/power/runtime_active_kids: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/power/runtime_usage: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/power/runtime_status: unsupported
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/power/async: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/power/runtime_suspended_time: 0
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/power/runtime_enabled: disabled
/sys/devices/platform/snd_aloop.0/sound/card2/pcmC2D0p/power/control: auto
/sys/devices/platform/power/runtime_active_time: 0
/sys/devices/platform/power/runtime_active_kids: 0
/sys/devices/platform/power/runtime_usage: 0
/sys/devices/platform/power/runtime_status: unsupported
/sys/devices/platform/power/async: disabled
/sys/devices/platform/power/runtime_suspended_time: 0
/sys/devices/platform/power/runtime_enabled: disabled
/sys/devices/platform/power/control: auto
/sys/devices/platform/microcode/uevent: MODALIAS=platform:microcode
/sys/devices/platform/microcode/driver_override: (null)
/sys/devices/platform/microcode/modalias: platform:microcode
/sys/devices/platform/microcode/power/runtime_active_time: 0
/sys/devices/platform/microcode/power/runtime_active_kids: 0
/sys/devices/platform/microcode/power/runtime_usage: 0
/sys/devices/platform/microcode/power/runtime_status: unsupported
/sys/devices/platform/microcode/power/async: disabled
/sys/devices/platform/microcode/power/runtime_suspended_time: 0
/sys/devices/platform/microcode/power/runtime_enabled: disabled
/sys/devices/platform/microcode/power/control: auto
/sys/devices/platform/snd-soc-dummy/uevent: DRIVER=snd-soc-dummy
MODALIAS=platform:snd-soc-dummy
/sys/devices/platform/snd-soc-dummy/driver_override: (null)
/sys/devices/platform/snd-soc-dummy/modalias: platform:snd-soc-dummy
/sys/devices/platform/snd-soc-dummy/power/runtime_active_time: 0
/sys/devices/platform/snd-soc-dummy/power/runtime_active_kids: 0
/sys/devices/platform/snd-soc-dummy/power/runtime_usage: 0
/sys/devices/platform/snd-soc-dummy/power/runtime_status: unsupported
/sys/devices/platform/snd-soc-dummy/power/async: disabled
/sys/devices/platform/snd-soc-dummy/power/runtime_suspended_time: 0
/sys/devices/platform/snd-soc-dummy/power/runtime_enabled: disabled
/sys/devices/platform/snd-soc-dummy/power/control: auto
/sys/devices/platform/intel_rapl_msr.0/uevent: DRIVER=intel_rapl_msr
MODALIAS=platform:intel_rapl_msr
/sys/devices/platform/intel_rapl_msr.0/driver_override: (null)
/sys/devices/platform/intel_rapl_msr.0/modalias: platform:intel_rapl_msr
/sys/devices/platform/intel_rapl_msr.0/power/runtime_active_time: 0
/sys/devices/platform/intel_rapl_msr.0/power/runtime_active_kids: 0
/sys/devices/platform/intel_rapl_msr.0/power/runtime_usage: 0
/sys/devices/platform/intel_rapl_msr.0/power/runtime_status: unsupported
/sys/devices/platform/intel_rapl_msr.0/power/async: disabled
/sys/devices/platform/intel_rapl_msr.0/power/runtime_suspended_time: 0
/sys/devices/platform/intel_rapl_msr.0/power/runtime_enabled: disabled
/sys/devices/platform/intel_rapl_msr.0/power/control: auto
/sys/devices/platform/PNP0C0C:00/uevent: MODALIAS=acpi:PNP0C0C:
/sys/devices/platform/PNP0C0C:00/driver_override: (null)
/sys/devices/platform/PNP0C0C:00/waiting_for_supplier: 0
/sys/devices/platform/PNP0C0C:00/modalias: acpi:PNP0C0C:
/sys/devices/platform/PNP0C0C:00/power/runtime_active_time: 0
/sys/devices/platform/PNP0C0C:00/power/wakeup: disabled
/sys/devices/platform/PNP0C0C:00/power/wakeup_count: 
/sys/devices/platform/PNP0C0C:00/power/wakeup_abort_count: 
/sys/devices/platform/PNP0C0C:00/power/wakeup_expire_count: 
/sys/devices/platform/PNP0C0C:00/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C0C:00/power/wakeup_total_time_ms: 
/sys/devices/platform/PNP0C0C:00/power/wakeup_active_count: 
/sys/devices/platform/PNP0C0C:00/power/runtime_usage: 0
/sys/devices/platform/PNP0C0C:00/power/runtime_status: unsupported
/sys/devices/platform/PNP0C0C:00/power/async: disabled
/sys/devices/platform/PNP0C0C:00/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C0C:00/power/wakeup_max_time_ms: 
/sys/devices/platform/PNP0C0C:00/power/wakeup_active: 
/sys/devices/platform/PNP0C0C:00/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C0C:00/power/control: auto
/sys/devices/platform/PNP0C0C:00/power/wakeup_last_time_ms: 
/sys/devices/platform/PNP0C0A:01/uevent: MODALIAS=acpi:PNP0C0A:
/sys/devices/platform/PNP0C0A:01/driver_override: (null)
/sys/devices/platform/PNP0C0A:01/waiting_for_supplier: 0
/sys/devices/platform/PNP0C0A:01/modalias: acpi:PNP0C0A:
/sys/devices/platform/PNP0C0A:01/power/runtime_active_time: 0
/sys/devices/platform/PNP0C0A:01/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C0A:01/power/runtime_usage: 0
/sys/devices/platform/PNP0C0A:01/power/runtime_status: unsupported
/sys/devices/platform/PNP0C0A:01/power/async: disabled
/sys/devices/platform/PNP0C0A:01/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C0A:01/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C0A:01/power/control: auto
/sys/devices/platform/coretemp.0/uevent: MODALIAS=platform:coretemp
/sys/devices/platform/coretemp.0/driver_override: (null)
/sys/devices/platform/coretemp.0/modalias: platform:coretemp
/sys/devices/platform/coretemp.0/power/runtime_active_time: 0
/sys/devices/platform/coretemp.0/power/runtime_active_kids: 0
/sys/devices/platform/coretemp.0/power/runtime_usage: 0
/sys/devices/platform/coretemp.0/power/runtime_status: unsupported
/sys/devices/platform/coretemp.0/power/async: disabled
/sys/devices/platform/coretemp.0/power/runtime_suspended_time: 0
/sys/devices/platform/coretemp.0/power/runtime_enabled: disabled
/sys/devices/platform/coretemp.0/power/control: auto
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp3_crit: 100000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/uevent: 
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp2_crit_alarm: 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp2_crit: 100000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp2_max: 84000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp3_input: 56000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp1_label: Package id 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp1_crit: 100000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp3_max: 84000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp3_crit_alarm: 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp2_label: Core 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp1_input: 59000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp1_crit_alarm: 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp3_label: Core 1
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp1_max: 84000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/name: coretemp
/sys/devices/platform/coretemp.0/hwmon/hwmon4/temp2_input: 57000
/sys/devices/platform/coretemp.0/hwmon/hwmon4/power/runtime_active_time: 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/power/runtime_active_kids: 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/power/runtime_usage: 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/power/runtime_status: unsupported
/sys/devices/platform/coretemp.0/hwmon/hwmon4/power/async: disabled
/sys/devices/platform/coretemp.0/hwmon/hwmon4/power/runtime_suspended_time: 0
/sys/devices/platform/coretemp.0/hwmon/hwmon4/power/runtime_enabled: disabled
/sys/devices/platform/coretemp.0/hwmon/hwmon4/power/control: auto
/sys/devices/platform/dock.0/uevent: MODALIAS=acpi:LNXIOBAY:
/sys/devices/platform/dock.0/uid: 
/sys/devices/platform/dock.0/type: ata_bay
/sys/devices/platform/dock.0/docked: 1
/sys/devices/platform/dock.0/driver_override: (null)
/sys/devices/platform/dock.0/waiting_for_supplier: 0
/sys/devices/platform/dock.0/modalias: acpi:LNXIOBAY:
/sys/devices/platform/dock.0/flags: 32
/sys/devices/platform/dock.0/power/runtime_active_time: 0
/sys/devices/platform/dock.0/power/runtime_active_kids: 0
/sys/devices/platform/dock.0/power/runtime_usage: 0
/sys/devices/platform/dock.0/power/runtime_status: unsupported
/sys/devices/platform/dock.0/power/async: disabled
/sys/devices/platform/dock.0/power/runtime_suspended_time: 0
/sys/devices/platform/dock.0/power/runtime_enabled: disabled
/sys/devices/platform/dock.0/power/control: auto
/sys/devices/platform/regulatory.0/uevent: MODALIAS=platform:regulatory
/sys/devices/platform/regulatory.0/driver_override: (null)
/sys/devices/platform/regulatory.0/modalias: platform:regulatory
/sys/devices/platform/regulatory.0/power/runtime_active_time: 0
/sys/devices/platform/regulatory.0/power/runtime_active_kids: 0
/sys/devices/platform/regulatory.0/power/runtime_usage: 0
/sys/devices/platform/regulatory.0/power/runtime_status: unsupported
/sys/devices/platform/regulatory.0/power/async: disabled
/sys/devices/platform/regulatory.0/power/runtime_suspended_time: 0
/sys/devices/platform/regulatory.0/power/runtime_enabled: disabled
/sys/devices/platform/regulatory.0/power/control: auto
/sys/devices/platform/DELLABCE:00/uevent: MODALIAS=acpi:DELLABCE:
/sys/devices/platform/DELLABCE:00/driver_override: (null)
/sys/devices/platform/DELLABCE:00/waiting_for_supplier: 0
/sys/devices/platform/DELLABCE:00/modalias: acpi:DELLABCE:
/sys/devices/platform/DELLABCE:00/power/runtime_active_time: 0
/sys/devices/platform/DELLABCE:00/power/runtime_active_kids: 0
/sys/devices/platform/DELLABCE:00/power/runtime_usage: 0
/sys/devices/platform/DELLABCE:00/power/runtime_status: unsupported
/sys/devices/platform/DELLABCE:00/power/async: disabled
/sys/devices/platform/DELLABCE:00/power/runtime_suspended_time: 0
/sys/devices/platform/DELLABCE:00/power/runtime_enabled: disabled
/sys/devices/platform/DELLABCE:00/power/control: auto
/sys/devices/platform/PNP0C0E:00/uevent: MODALIAS=acpi:PNP0C0E:
/sys/devices/platform/PNP0C0E:00/driver_override: (null)
/sys/devices/platform/PNP0C0E:00/waiting_for_supplier: 0
/sys/devices/platform/PNP0C0E:00/modalias: acpi:PNP0C0E:
/sys/devices/platform/PNP0C0E:00/power/runtime_active_time: 0
/sys/devices/platform/PNP0C0E:00/power/runtime_active_kids: 0
/sys/devices/platform/PNP0C0E:00/power/runtime_usage: 0
/sys/devices/platform/PNP0C0E:00/power/runtime_status: unsupported
/sys/devices/platform/PNP0C0E:00/power/async: disabled
/sys/devices/platform/PNP0C0E:00/power/runtime_suspended_time: 0
/sys/devices/platform/PNP0C0E:00/power/runtime_enabled: disabled
/sys/devices/platform/PNP0C0E:00/power/control: auto
/sys/devices/platform/dell-smbios.0/uevent: DRIVER=dell-smbios
MODALIAS=platform:dell-smbios
/sys/devices/platform/dell-smbios.0/driver_override: (null)
/sys/devices/platform/dell-smbios.0/modalias: platform:dell-smbios
/sys/devices/platform/dell-smbios.0/power/runtime_active_time: 0
/sys/devices/platform/dell-smbios.0/power/runtime_active_kids: 0
/sys/devices/platform/dell-smbios.0/power/runtime_usage: 0
/sys/devices/platform/dell-smbios.0/power/runtime_status: unsupported
/sys/devices/platform/dell-smbios.0/power/async: disabled
/sys/devices/platform/dell-smbios.0/power/runtime_suspended_time: 0
/sys/devices/platform/dell-smbios.0/power/runtime_enabled: disabled
/sys/devices/platform/dell-smbios.0/power/control: auto
/sys/devices/platform/dell_smm_hwmon/uevent: DRIVER=dell_smm_hwmon
MODALIAS=platform:dell_smm_hwmon
/sys/devices/platform/dell_smm_hwmon/driver_override: (null)
/sys/devices/platform/dell_smm_hwmon/modalias: platform:dell_smm_hwmon
/sys/devices/platform/dell_smm_hwmon/power/runtime_active_time: 0
/sys/devices/platform/dell_smm_hwmon/power/runtime_active_kids: 0
/sys/devices/platform/dell_smm_hwmon/power/runtime_usage: 0
/sys/devices/platform/dell_smm_hwmon/power/runtime_status: unsupported
/sys/devices/platform/dell_smm_hwmon/power/async: disabled
/sys/devices/platform/dell_smm_hwmon/power/runtime_suspended_time: 0
/sys/devices/platform/dell_smm_hwmon/power/runtime_enabled: disabled
/sys/devices/platform/dell_smm_hwmon/power/control: auto
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/uevent: 
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/temp3_input: 42000
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/fan1_label: Processor Fan
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/fan1_min: 0
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/temp1_label: CPU
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/pwm1: 128
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/fan1_max: 4900
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/temp2_label: Ambient
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/fan1_input: 3495
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/temp1_input: 58000
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/fan1_target: 2500
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/temp3_label: SODIMM
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/name: dell_smm
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/temp2_input: 49000
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/power/runtime_active_time: 0
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/power/runtime_active_kids: 0
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/power/runtime_usage: 0
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/power/runtime_status: unsupported
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/power/async: disabled
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/power/runtime_suspended_time: 0
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/power/runtime_enabled: disabled
/sys/devices/platform/dell_smm_hwmon/hwmon/hwmon3/power/control: auto
/sys/devices/platform/serial8250/uevent: DRIVER=serial8250
MODALIAS=platform:serial8250
/sys/devices/platform/serial8250/driver_override: (null)
/sys/devices/platform/serial8250/modalias: platform:serial8250
/sys/devices/platform/serial8250/power/runtime_active_time: 0
/sys/devices/platform/serial8250/power/runtime_active_kids: 0
/sys/devices/platform/serial8250/power/runtime_usage: 0
/sys/devices/platform/serial8250/power/runtime_status: unsupported
/sys/devices/platform/serial8250/power/async: disabled
/sys/devices/platform/serial8250/power/runtime_suspended_time: 0
/sys/devices/platform/serial8250/power/runtime_enabled: disabled
/sys/devices/platform/serial8250/power/control: auto
/sys/devices/platform/serial8250/tty/ttyS2/uevent: MAJOR=4
MINOR=66
DEVNAME=ttyS2
/sys/devices/platform/serial8250/tty/ttyS2/iomem_reg_shift: 0
/sys/devices/platform/serial8250/tty/ttyS2/console: N
/sys/devices/platform/serial8250/tty/ttyS2/line: 2
/sys/devices/platform/serial8250/tty/ttyS2/xmit_fifo_size: 0
/sys/devices/platform/serial8250/tty/ttyS2/port: 0x3E8
/sys/devices/platform/serial8250/tty/ttyS2/uartclk: 1843200
/sys/devices/platform/serial8250/tty/ttyS2/dev: 4:66
/sys/devices/platform/serial8250/tty/ttyS2/type: 0
/sys/devices/platform/serial8250/tty/ttyS2/iomem_base: 0x0
/sys/devices/platform/serial8250/tty/ttyS2/custom_divisor: 0
/sys/devices/platform/serial8250/tty/ttyS2/io_type: 0
/sys/devices/platform/serial8250/tty/ttyS2/irq: 4
/sys/devices/platform/serial8250/tty/ttyS2/close_delay: 50
/sys/devices/platform/serial8250/tty/ttyS2/closing_wait: 3000
/sys/devices/platform/serial8250/tty/ttyS2/flags: 0x10000040
/sys/devices/platform/serial8250/tty/ttyS2/power/runtime_active_time: 0
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup: disabled
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup_count: 
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup_abort_count: 
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup_expire_count: 
/sys/devices/platform/serial8250/tty/ttyS2/power/runtime_active_kids: 0
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup_total_time_ms: 
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup_active_count: 
/sys/devices/platform/serial8250/tty/ttyS2/power/runtime_usage: 0
/sys/devices/platform/serial8250/tty/ttyS2/power/runtime_status: unsupported
/sys/devices/platform/serial8250/tty/ttyS2/power/async: disabled
/sys/devices/platform/serial8250/tty/ttyS2/power/runtime_suspended_time: 0
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup_max_time_ms: 
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup_active: 
/sys/devices/platform/serial8250/tty/ttyS2/power/runtime_enabled: disabled
/sys/devices/platform/serial8250/tty/ttyS2/power/control: auto
/sys/devices/platform/serial8250/tty/ttyS2/power/wakeup_last_time_ms: 
/sys/devices/platform/serial8250/tty/ttyS3/uevent: MAJOR=4
MINOR=67
DEVNAME=ttyS3
/sys/devices/platform/serial8250/tty/ttyS3/iomem_reg_shift: 0
/sys/devices/platform/serial8250/tty/ttyS3/console: N
/sys/devices/platform/serial8250/tty/ttyS3/line: 3
/sys/devices/platform/serial8250/tty/ttyS3/xmit_fifo_size: 0
/sys/devices/platform/serial8250/tty/ttyS3/port: 0x2E8
/sys/devices/platform/serial8250/tty/ttyS3/uartclk: 1843200
/sys/devices/platform/serial8250/tty/ttyS3/dev: 4:67
/sys/devices/platform/serial8250/tty/ttyS3/type: 0
/sys/devices/platform/serial8250/tty/ttyS3/iomem_base: 0x0
/sys/devices/platform/serial8250/tty/ttyS3/custom_divisor: 0
/sys/devices/platform/serial8250/tty/ttyS3/io_type: 0
/sys/devices/platform/serial8250/tty/ttyS3/irq: 3
/sys/devices/platform/serial8250/tty/ttyS3/close_delay: 50
/sys/devices/platform/serial8250/tty/ttyS3/closing_wait: 3000
/sys/devices/platform/serial8250/tty/ttyS3/flags: 0x10000000
/sys/devices/platform/serial8250/tty/ttyS3/power/runtime_active_time: 0
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup: disabled
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup_count: 
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup_abort_count: 
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup_expire_count: 
/sys/devices/platform/serial8250/tty/ttyS3/power/runtime_active_kids: 0
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup_total_time_ms: 
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup_active_count: 
/sys/devices/platform/serial8250/tty/ttyS3/power/runtime_usage: 0
/sys/devices/platform/serial8250/tty/ttyS3/power/runtime_status: unsupported
/sys/devices/platform/serial8250/tty/ttyS3/power/async: disabled
/sys/devices/platform/serial8250/tty/ttyS3/power/runtime_suspended_time: 0
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup_max_time_ms: 
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup_active: 
/sys/devices/platform/serial8250/tty/ttyS3/power/runtime_enabled: disabled
/sys/devices/platform/serial8250/tty/ttyS3/power/control: auto
/sys/devices/platform/serial8250/tty/ttyS3/power/wakeup_last_time_ms: 
/sys/devices/platform/serial8250/tty/ttyS1/uevent: MAJOR=4
MINOR=65
DEVNAME=ttyS1
/sys/devices/platform/serial8250/tty/ttyS1/iomem_reg_shift: 0
/sys/devices/platform/serial8250/tty/ttyS1/console: N
/sys/devices/platform/serial8250/tty/ttyS1/line: 1
/sys/devices/platform/serial8250/tty/ttyS1/xmit_fifo_size: 0
/sys/devices/platform/serial8250/tty/ttyS1/port: 0x2F8
/sys/devices/platform/serial8250/tty/ttyS1/uartclk: 1843200
/sys/devices/platform/serial8250/tty/ttyS1/dev: 4:65
/sys/devices/platform/serial8250/tty/ttyS1/type: 0
/sys/devices/platform/serial8250/tty/ttyS1/iomem_base: 0x0
/sys/devices/platform/serial8250/tty/ttyS1/custom_divisor: 0
/sys/devices/platform/serial8250/tty/ttyS1/io_type: 0
/sys/devices/platform/serial8250/tty/ttyS1/irq: 3
/sys/devices/platform/serial8250/tty/ttyS1/close_delay: 50
/sys/devices/platform/serial8250/tty/ttyS1/closing_wait: 3000
/sys/devices/platform/serial8250/tty/ttyS1/flags: 0x10000040
/sys/devices/platform/serial8250/tty/ttyS1/power/runtime_active_time: 0
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup: disabled
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup_count: 
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup_abort_count: 
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup_expire_count: 
/sys/devices/platform/serial8250/tty/ttyS1/power/runtime_active_kids: 0
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup_total_time_ms: 
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup_active_count: 
/sys/devices/platform/serial8250/tty/ttyS1/power/runtime_usage: 0
/sys/devices/platform/serial8250/tty/ttyS1/power/runtime_status: unsupported
/sys/devices/platform/serial8250/tty/ttyS1/power/async: disabled
/sys/devices/platform/serial8250/tty/ttyS1/power/runtime_suspended_time: 0
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup_max_time_ms: 
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup_active: 
/sys/devices/platform/serial8250/tty/ttyS1/power/runtime_enabled: disabled
/sys/devices/platform/serial8250/tty/ttyS1/power/control: auto
/sys/devices/platform/serial8250/tty/ttyS1/power/wakeup_last_time_ms: 
/sys/devices/platform/i8042/uevent: DRIVER=i8042
MODALIAS=platform:i8042
/sys/devices/platform/i8042/driver_override: (null)
/sys/devices/platform/i8042/modalias: platform:i8042
/sys/devices/platform/i8042/serio0/uevent: DRIVER=atkbd
SERIO_TYPE=06
SERIO_PROTO=00
SERIO_ID=00
SERIO_EXTRA=00
MODALIAS=serio:ty06pr00id00ex00
SERIO_FIRMWARE_ID=PNP: PNP0303
/sys/devices/platform/i8042/serio0/description: i8042 KBD port
/sys/devices/platform/i8042/serio0/err_count: 0
/sys/devices/platform/i8042/serio0/scroll: 0
/sys/devices/platform/i8042/serio0/firmware_id: PNP: PNP0303
/sys/devices/platform/i8042/serio0/softrepeat: 0
/sys/devices/platform/i8042/serio0/bind_mode: auto
/sys/devices/platform/i8042/serio0/set: 2
/sys/devices/platform/i8042/serio0/softraw: 1
/sys/devices/platform/i8042/serio0/force_release: 158,369-370
/sys/devices/platform/i8042/serio0/modalias: serio:ty06pr00id00ex00
/sys/devices/platform/i8042/serio0/extra: 0
/sys/devices/platform/i8042/serio0/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio0/power/wakeup: disabled
/sys/devices/platform/i8042/serio0/power/wakeup_count: 
/sys/devices/platform/i8042/serio0/power/wakeup_abort_count: 
/sys/devices/platform/i8042/serio0/power/wakeup_expire_count: 
/sys/devices/platform/i8042/serio0/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio0/power/wakeup_total_time_ms: 
/sys/devices/platform/i8042/serio0/power/wakeup_active_count: 
/sys/devices/platform/i8042/serio0/power/runtime_usage: 0
/sys/devices/platform/i8042/serio0/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio0/power/async: disabled
/sys/devices/platform/i8042/serio0/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio0/power/wakeup_max_time_ms: 
/sys/devices/platform/i8042/serio0/power/wakeup_active: 
/sys/devices/platform/i8042/serio0/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio0/power/control: auto
/sys/devices/platform/i8042/serio0/power/wakeup_last_time_ms: 
/sys/devices/platform/i8042/serio0/id/id: 00
/sys/devices/platform/i8042/serio0/id/type: 06
/sys/devices/platform/i8042/serio0/id/proto: 00
/sys/devices/platform/i8042/serio0/id/extra: 00
/sys/devices/platform/i8042/serio0/input/input0/uevent: PRODUCT=11/1/1/ab83
NAME="AT Translated Set 2 keyboard"
PHYS="isa0060/serio0/input0"
PROP=0
EV=120013
KEY=11100f02902002 8380307cfb10f001 feffffdfffefffff fffffffffffffffe
MSC=10
LED=7
MODALIAS=input:b0011v0001p0001eAB83-e0,1,4,11,14,k71,72,73,74,75,76,77,79,7A,7B,7C,7D,7E,7F,80,8C,8D,8E,8F,94,98,99,9B,9C,9D,9E,9F,A2,A3,A4,A5,A6,AC,AD,B7,B8,B9,BF,C1,CD,D4,D7,D9,E0,E1,E2,E3,EC,F0,F4,ram4,l0,1,2,sfw
/sys/devices/platform/i8042/serio0/input/input0/uniq: 
/sys/devices/platform/i8042/serio0/input/input0/inhibited: 0
/sys/devices/platform/i8042/serio0/input/input0/properties: 0
/sys/devices/platform/i8042/serio0/input/input0/phys: isa0060/serio0/input0
/sys/devices/platform/i8042/serio0/input/input0/name: AT Translated Set 2 keyboard
/sys/devices/platform/i8042/serio0/input/input0/modalias: input:b0011v0001p0001eAB83-e0,1,4,11,14,k71,72,73,74,75,76,77,79,7A,7B,7C,7D,7E,7F,80,8C,8D,8E,8F,94,98,99,9B,9C,9D,9E,9F,A2,A3,A4,A5,A6,AC,AD,B7,B8,B9,BF,C1,CD,D4,D7,D9,E0,E1,E2,E3,EC,F0,F4,ram4,l0,1,2,sfw
/sys/devices/platform/i8042/serio0/input/input0/capabilities/rel: 0
/sys/devices/platform/i8042/serio0/input/input0/capabilities/abs: 0
/sys/devices/platform/i8042/serio0/input/input0/capabilities/ff: 0
/sys/devices/platform/i8042/serio0/input/input0/capabilities/led: 7
/sys/devices/platform/i8042/serio0/input/input0/capabilities/sw: 0
/sys/devices/platform/i8042/serio0/input/input0/capabilities/key: 11100f02902002 8380307cfb10f001 feffffdfffefffff fffffffffffffffe
/sys/devices/platform/i8042/serio0/input/input0/capabilities/msc: 10
/sys/devices/platform/i8042/serio0/input/input0/capabilities/snd: 0
/sys/devices/platform/i8042/serio0/input/input0/capabilities/ev: 120013
/sys/devices/platform/i8042/serio0/input/input0/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio0/input/input0/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio0/input/input0/power/runtime_usage: 0
/sys/devices/platform/i8042/serio0/input/input0/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio0/input/input0/power/async: disabled
/sys/devices/platform/i8042/serio0/input/input0/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio0/input/input0/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio0/input/input0/power/control: auto
/sys/devices/platform/i8042/serio0/input/input0/id/bustype: 0011
/sys/devices/platform/i8042/serio0/input/input0/id/vendor: 0001
/sys/devices/platform/i8042/serio0/input/input0/id/product: 0001
/sys/devices/platform/i8042/serio0/input/input0/id/version: ab83
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/uevent: 
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/brightness: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/trigger: none [kbd-scrolllock] kbd-numlock kbd-capslock kbd-kanalock kbd-shiftlock kbd-altgrlock kbd-ctrllock kbd-altlock kbd-shiftllock kbd-shiftrlock kbd-ctrlllock kbd-ctrlrlock disk-activity disk-read disk-write ide-disk mtd nand-disk cpu cpu0 cpu1 cpu2 cpu3 panic usb-gadget usb-host BAT0-charging-or-full BAT0-charging BAT0-full BAT0-charging-blink-full-solid rc-feedback mmc0 AC-online rfkill-any rfkill-none audio-mute audio-micmute rfkill1 phy0rx phy0tx phy0assoc phy0radio phy0tpt rfkill2 phy1rx phy1tx phy1assoc phy1radio rfkill3
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/max_brightness: 1
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/power/runtime_usage: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/power/async: disabled
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio0/input/input0/input0::scrolllock/power/control: auto
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/uevent: 
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/brightness: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/trigger: none kbd-scrolllock kbd-numlock [kbd-capslock] kbd-kanalock kbd-shiftlock kbd-altgrlock kbd-ctrllock kbd-altlock kbd-shiftllock kbd-shiftrlock kbd-ctrlllock kbd-ctrlrlock disk-activity disk-read disk-write ide-disk mtd nand-disk cpu cpu0 cpu1 cpu2 cpu3 panic usb-gadget usb-host BAT0-charging-or-full BAT0-charging BAT0-full BAT0-charging-blink-full-solid rc-feedback mmc0 AC-online rfkill-any rfkill-none audio-mute audio-micmute rfkill1 phy0rx phy0tx phy0assoc phy0radio phy0tpt rfkill2 phy1rx phy1tx phy1assoc phy1radio rfkill3
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/max_brightness: 1
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/power/runtime_usage: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/power/async: disabled
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio0/input/input0/input0::capslock/power/control: auto
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/uevent: 
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/brightness: 1
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/trigger: none kbd-scrolllock [kbd-numlock] kbd-capslock kbd-kanalock kbd-shiftlock kbd-altgrlock kbd-ctrllock kbd-altlock kbd-shiftllock kbd-shiftrlock kbd-ctrlllock kbd-ctrlrlock disk-activity disk-read disk-write ide-disk mtd nand-disk cpu cpu0 cpu1 cpu2 cpu3 panic usb-gadget usb-host BAT0-charging-or-full BAT0-charging BAT0-full BAT0-charging-blink-full-solid rc-feedback mmc0 AC-online rfkill-any rfkill-none audio-mute audio-micmute rfkill1 phy0rx phy0tx phy0assoc phy0radio phy0tpt rfkill2 phy1rx phy1tx phy1assoc phy1radio rfkill3
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/max_brightness: 1
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/power/runtime_usage: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/power/async: disabled
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio0/input/input0/input0::numlock/power/control: auto
/sys/devices/platform/i8042/serio0/input/input0/event0/uevent: MAJOR=13
MINOR=64
DEVNAME=input/event0
/sys/devices/platform/i8042/serio0/input/input0/event0/dev: 13:64
/sys/devices/platform/i8042/serio0/input/input0/event0/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio0/input/input0/event0/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio0/input/input0/event0/power/runtime_usage: 0
/sys/devices/platform/i8042/serio0/input/input0/event0/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio0/input/input0/event0/power/async: disabled
/sys/devices/platform/i8042/serio0/input/input0/event0/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio0/input/input0/event0/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio0/input/input0/event0/power/control: auto
/sys/devices/platform/i8042/power/runtime_active_time: 0
/sys/devices/platform/i8042/power/runtime_active_kids: 0
/sys/devices/platform/i8042/power/runtime_usage: 0
/sys/devices/platform/i8042/power/runtime_status: unsupported
/sys/devices/platform/i8042/power/async: disabled
/sys/devices/platform/i8042/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/power/runtime_enabled: disabled
/sys/devices/platform/i8042/power/control: auto
/sys/devices/platform/i8042/serio1/uevent: DRIVER=psmouse
SERIO_TYPE=01
SERIO_PROTO=00
SERIO_ID=00
SERIO_EXTRA=00
MODALIAS=serio:ty01pr00id00ex00
SERIO_FIRMWARE_ID=PNP: DLL05be PNP0f13
/sys/devices/platform/i8042/serio1/resetafter: 12
/sys/devices/platform/i8042/serio1/resolution: 200
/sys/devices/platform/i8042/serio1/description: i8042 AUX port
/sys/devices/platform/i8042/serio1/firmware_id: PNP: DLL05be PNP0f13
/sys/devices/platform/i8042/serio1/protocol: AlpsPS/2
/sys/devices/platform/i8042/serio1/rate: 100
/sys/devices/platform/i8042/serio1/bind_mode: auto
/sys/devices/platform/i8042/serio1/resync_time: 0
/sys/devices/platform/i8042/serio1/modalias: serio:ty01pr00id00ex00
/sys/devices/platform/i8042/serio1/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio1/power/wakeup: disabled
/sys/devices/platform/i8042/serio1/power/wakeup_count: 
/sys/devices/platform/i8042/serio1/power/wakeup_abort_count: 
/sys/devices/platform/i8042/serio1/power/wakeup_expire_count: 
/sys/devices/platform/i8042/serio1/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio1/power/wakeup_total_time_ms: 
/sys/devices/platform/i8042/serio1/power/wakeup_active_count: 
/sys/devices/platform/i8042/serio1/power/runtime_usage: 0
/sys/devices/platform/i8042/serio1/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio1/power/async: disabled
/sys/devices/platform/i8042/serio1/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio1/power/wakeup_max_time_ms: 
/sys/devices/platform/i8042/serio1/power/wakeup_active: 
/sys/devices/platform/i8042/serio1/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio1/power/control: auto
/sys/devices/platform/i8042/serio1/power/wakeup_last_time_ms: 
/sys/devices/platform/i8042/serio1/id/id: 00
/sys/devices/platform/i8042/serio1/id/type: 01
/sys/devices/platform/i8042/serio1/id/proto: 00
/sys/devices/platform/i8042/serio1/id/extra: 00
/sys/devices/platform/i8042/serio1/input/input8/uevent: PRODUCT=11/2/8/310
NAME="AlpsPS/2 ALPS DualPoint Stick"
PHYS="isa0060/serio1/input1"
PROP=21
EV=f
KEY=70000 0 0 0 0
REL=3
ABS=1000000
MODALIAS=input:b0011v0002p0008e0310-e0,1,2,3,k110,111,112,r0,1,a18,mlsfw
/sys/devices/platform/i8042/serio1/input/input8/uniq: 
/sys/devices/platform/i8042/serio1/input/input8/inhibited: 0
/sys/devices/platform/i8042/serio1/input/input8/properties: 21
/sys/devices/platform/i8042/serio1/input/input8/phys: isa0060/serio1/input1
/sys/devices/platform/i8042/serio1/input/input8/name: AlpsPS/2 ALPS DualPoint Stick
/sys/devices/platform/i8042/serio1/input/input8/modalias: input:b0011v0002p0008e0310-e0,1,2,3,k110,111,112,r0,1,a18,mlsfw
/sys/devices/platform/i8042/serio1/input/input8/capabilities/rel: 3
/sys/devices/platform/i8042/serio1/input/input8/capabilities/abs: 1000000
/sys/devices/platform/i8042/serio1/input/input8/capabilities/ff: 0
/sys/devices/platform/i8042/serio1/input/input8/capabilities/led: 0
/sys/devices/platform/i8042/serio1/input/input8/capabilities/sw: 0
/sys/devices/platform/i8042/serio1/input/input8/capabilities/key: 70000 0 0 0 0
/sys/devices/platform/i8042/serio1/input/input8/capabilities/msc: 0
/sys/devices/platform/i8042/serio1/input/input8/capabilities/snd: 0
/sys/devices/platform/i8042/serio1/input/input8/capabilities/ev: f
/sys/devices/platform/i8042/serio1/input/input8/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio1/input/input8/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio1/input/input8/power/runtime_usage: 0
/sys/devices/platform/i8042/serio1/input/input8/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio1/input/input8/power/async: disabled
/sys/devices/platform/i8042/serio1/input/input8/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio1/input/input8/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio1/input/input8/power/control: auto
/sys/devices/platform/i8042/serio1/input/input8/id/bustype: 0011
/sys/devices/platform/i8042/serio1/input/input8/id/vendor: 0002
/sys/devices/platform/i8042/serio1/input/input8/id/product: 0008
/sys/devices/platform/i8042/serio1/input/input8/id/version: 0310
/sys/devices/platform/i8042/serio1/input/input8/mouse0/uevent: MAJOR=13
MINOR=32
DEVNAME=input/mouse0
/sys/devices/platform/i8042/serio1/input/input8/mouse0/dev: 13:32
/sys/devices/platform/i8042/serio1/input/input8/mouse0/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio1/input/input8/mouse0/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio1/input/input8/mouse0/power/runtime_usage: 0
/sys/devices/platform/i8042/serio1/input/input8/mouse0/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio1/input/input8/mouse0/power/async: disabled
/sys/devices/platform/i8042/serio1/input/input8/mouse0/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio1/input/input8/mouse0/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio1/input/input8/mouse0/power/control: auto
/sys/devices/platform/i8042/serio1/input/input8/event6/uevent: MAJOR=13
MINOR=70
DEVNAME=input/event6
/sys/devices/platform/i8042/serio1/input/input8/event6/dev: 13:70
/sys/devices/platform/i8042/serio1/input/input8/event6/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio1/input/input8/event6/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio1/input/input8/event6/power/runtime_usage: 0
/sys/devices/platform/i8042/serio1/input/input8/event6/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio1/input/input8/event6/power/async: disabled
/sys/devices/platform/i8042/serio1/input/input8/event6/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio1/input/input8/event6/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio1/input/input8/event6/power/control: auto
/sys/devices/platform/i8042/serio1/input/input6/uevent: PRODUCT=11/2/8/310
NAME="AlpsPS/2 ALPS DualPoint TouchPad"
PHYS="isa0060/serio1/input0"
PROP=9
EV=b
KEY=e420 70000 0 0 0 0
ABS=260800001000003
MODALIAS=input:b0011v0002p0008e0310-e0,1,3,k110,111,112,145,14A,14D,14E,14F,ra0,1,18,2F,35,36,39,mlsfw
/sys/devices/platform/i8042/serio1/input/input6/uniq: 
/sys/devices/platform/i8042/serio1/input/input6/inhibited: 0
/sys/devices/platform/i8042/serio1/input/input6/properties: 9
/sys/devices/platform/i8042/serio1/input/input6/phys: isa0060/serio1/input0
/sys/devices/platform/i8042/serio1/input/input6/name: AlpsPS/2 ALPS DualPoint TouchPad
/sys/devices/platform/i8042/serio1/input/input6/modalias: input:b0011v0002p0008e0310-e0,1,3,k110,111,112,145,14A,14D,14E,14F,ra0,1,18,2F,35,36,39,mlsfw
/sys/devices/platform/i8042/serio1/input/input6/event7/uevent: MAJOR=13
MINOR=71
DEVNAME=input/event7
/sys/devices/platform/i8042/serio1/input/input6/event7/dev: 13:71
/sys/devices/platform/i8042/serio1/input/input6/event7/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio1/input/input6/event7/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio1/input/input6/event7/power/runtime_usage: 0
/sys/devices/platform/i8042/serio1/input/input6/event7/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio1/input/input6/event7/power/async: disabled
/sys/devices/platform/i8042/serio1/input/input6/event7/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio1/input/input6/event7/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio1/input/input6/event7/power/control: auto
/sys/devices/platform/i8042/serio1/input/input6/capabilities/rel: 0
/sys/devices/platform/i8042/serio1/input/input6/capabilities/abs: 260800001000003
/sys/devices/platform/i8042/serio1/input/input6/capabilities/ff: 0
/sys/devices/platform/i8042/serio1/input/input6/capabilities/led: 0
/sys/devices/platform/i8042/serio1/input/input6/capabilities/sw: 0
/sys/devices/platform/i8042/serio1/input/input6/capabilities/key: e420 70000 0 0 0 0
/sys/devices/platform/i8042/serio1/input/input6/capabilities/msc: 0
/sys/devices/platform/i8042/serio1/input/input6/capabilities/snd: 0
/sys/devices/platform/i8042/serio1/input/input6/capabilities/ev: b
/sys/devices/platform/i8042/serio1/input/input6/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio1/input/input6/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio1/input/input6/power/runtime_usage: 0
/sys/devices/platform/i8042/serio1/input/input6/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio1/input/input6/power/async: disabled
/sys/devices/platform/i8042/serio1/input/input6/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio1/input/input6/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio1/input/input6/power/control: auto
/sys/devices/platform/i8042/serio1/input/input6/id/bustype: 0011
/sys/devices/platform/i8042/serio1/input/input6/id/vendor: 0002
/sys/devices/platform/i8042/serio1/input/input6/id/product: 0008
/sys/devices/platform/i8042/serio1/input/input6/id/version: 0310
/sys/devices/platform/i8042/serio1/input/input6/mouse1/uevent: MAJOR=13
MINOR=33
DEVNAME=input/mouse1
/sys/devices/platform/i8042/serio1/input/input6/mouse1/dev: 13:33
/sys/devices/platform/i8042/serio1/input/input6/mouse1/power/runtime_active_time: 0
/sys/devices/platform/i8042/serio1/input/input6/mouse1/power/runtime_active_kids: 0
/sys/devices/platform/i8042/serio1/input/input6/mouse1/power/runtime_usage: 0
/sys/devices/platform/i8042/serio1/input/input6/mouse1/power/runtime_status: unsupported
/sys/devices/platform/i8042/serio1/input/input6/mouse1/power/async: disabled
/sys/devices/platform/i8042/serio1/input/input6/mouse1/power/runtime_suspended_time: 0
/sys/devices/platform/i8042/serio1/input/input6/mouse1/power/runtime_enabled: disabled
/sys/devices/platform/i8042/serio1/input/input6/mouse1/power/control: auto
/sys/devices/platform/pcspkr/uevent: DRIVER=pcspkr
MODALIAS=platform:pcspkr
/sys/devices/platform/pcspkr/driver_override: (null)
/sys/devices/platform/pcspkr/modalias: platform:pcspkr
/sys/devices/platform/pcspkr/power/runtime_active_time: 0
/sys/devices/platform/pcspkr/power/runtime_active_kids: 0
/sys/devices/platform/pcspkr/power/runtime_usage: 0
/sys/devices/platform/pcspkr/power/runtime_status: unsupported
/sys/devices/platform/pcspkr/power/async: disabled
/sys/devices/platform/pcspkr/power/runtime_suspended_time: 0
/sys/devices/platform/pcspkr/power/runtime_enabled: disabled
/sys/devices/platform/pcspkr/power/control: auto
/sys/devices/platform/pcspkr/input/input11/uevent: PRODUCT=10/1f/1/100
NAME="PC Speaker"
PHYS="isa0061/input0"
PROP=0
EV=40001
SND=6
MODALIAS=input:b0010v001Fp0001e0100-e0,12,kramls1,2,fw
/sys/devices/platform/pcspkr/input/input11/uniq: 
/sys/devices/platform/pcspkr/input/input11/inhibited: 0
/sys/devices/platform/pcspkr/input/input11/properties: 0
/sys/devices/platform/pcspkr/input/input11/phys: isa0061/input0
/sys/devices/platform/pcspkr/input/input11/name: PC Speaker
/sys/devices/platform/pcspkr/input/input11/modalias: input:b0010v001Fp0001e0100-e0,12,kramls1,2,fw
/sys/devices/platform/pcspkr/input/input11/capabilities/rel: 0
/sys/devices/platform/pcspkr/input/input11/capabilities/abs: 0
/sys/devices/platform/pcspkr/input/input11/capabilities/ff: 0
/sys/devices/platform/pcspkr/input/input11/capabilities/led: 0
/sys/devices/platform/pcspkr/input/input11/capabilities/sw: 0
/sys/devices/platform/pcspkr/input/input11/capabilities/key: 0
/sys/devices/platform/pcspkr/input/input11/capabilities/msc: 0
/sys/devices/platform/pcspkr/input/input11/capabilities/snd: 6
/sys/devices/platform/pcspkr/input/input11/capabilities/ev: 40001
/sys/devices/platform/pcspkr/input/input11/power/runtime_active_time: 0
/sys/devices/platform/pcspkr/input/input11/power/runtime_active_kids: 0
/sys/devices/platform/pcspkr/input/input11/power/runtime_usage: 0
/sys/devices/platform/pcspkr/input/input11/power/runtime_status: unsupported
/sys/devices/platform/pcspkr/input/input11/power/async: disabled
/sys/devices/platform/pcspkr/input/input11/power/runtime_suspended_time: 0
/sys/devices/platform/pcspkr/input/input11/power/runtime_enabled: disabled
/sys/devices/platform/pcspkr/input/input11/power/control: auto
/sys/devices/platform/pcspkr/input/input11/id/bustype: 0010
/sys/devices/platform/pcspkr/input/input11/id/vendor: 001f
/sys/devices/platform/pcspkr/input/input11/id/product: 0001
/sys/devices/platform/pcspkr/input/input11/id/version: 0100
/sys/devices/platform/pcspkr/input/input11/event10/uevent: MAJOR=13
MINOR=74
DEVNAME=input/event10
/sys/devices/platform/pcspkr/input/input11/event10/dev: 13:74
/sys/devices/platform/pcspkr/input/input11/event10/power/runtime_active_time: 0
/sys/devices/platform/pcspkr/input/input11/event10/power/runtime_active_kids: 0
/sys/devices/platform/pcspkr/input/input11/event10/power/runtime_usage: 0
/sys/devices/platform/pcspkr/input/input11/event10/power/runtime_status: unsupported
/sys/devices/platform/pcspkr/input/input11/event10/power/async: disabled
/sys/devices/platform/pcspkr/input/input11/event10/power/runtime_suspended_time: 0
/sys/devices/platform/pcspkr/input/input11/event10/power/runtime_enabled: disabled
/sys/devices/platform/pcspkr/input/input11/event10/power/control: auto
/sys/devices/platform/dell-laptop/uevent: DRIVER=dell-laptop
MODALIAS=platform:dell-laptop
/sys/devices/platform/dell-laptop/driver_override: (null)
/sys/devices/platform/dell-laptop/modalias: platform:dell-laptop
/sys/devices/platform/dell-laptop/power/runtime_active_time: 0
/sys/devices/platform/dell-laptop/power/runtime_active_kids: 0
/sys/devices/platform/dell-laptop/power/runtime_usage: 0
/sys/devices/platform/dell-laptop/power/runtime_status: unsupported
/sys/devices/platform/dell-laptop/power/async: disabled
/sys/devices/platform/dell-laptop/power/runtime_suspended_time: 0
/sys/devices/platform/dell-laptop/power/runtime_enabled: disabled
/sys/devices/platform/dell-laptop/power/control: auto
/sys/devices/platform/dell-laptop/rfkill/rfkill1/uevent: RFKILL_NAME=dell-wifi
RFKILL_TYPE=wlan
RFKILL_STATE=1
RFKILL_HW_BLOCK_REASON=0x0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/hard_block_reasons: 0x0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/soft: 0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/index: 1
/sys/devices/platform/dell-laptop/rfkill/rfkill1/type: wlan
/sys/devices/platform/dell-laptop/rfkill/rfkill1/state: 1
/sys/devices/platform/dell-laptop/rfkill/rfkill1/hard: 0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/name: dell-wifi
/sys/devices/platform/dell-laptop/rfkill/rfkill1/persistent: 0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/power/runtime_active_time: 0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/power/runtime_active_kids: 0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/power/runtime_usage: 0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/power/runtime_status: unsupported
/sys/devices/platform/dell-laptop/rfkill/rfkill1/power/async: disabled
/sys/devices/platform/dell-laptop/rfkill/rfkill1/power/runtime_suspended_time: 0
/sys/devices/platform/dell-laptop/rfkill/rfkill1/power/runtime_enabled: disabled
/sys/devices/platform/dell-laptop/rfkill/rfkill1/power/control: auto
/sys/devices/platform/vboxdrv.0/uevent: DRIVER=vboxdrv
MODALIAS=platform:vboxdrv
/sys/devices/platform/vboxdrv.0/driver_override: (null)
/sys/devices/platform/vboxdrv.0/modalias: platform:vboxdrv
/sys/devices/platform/vboxdrv.0/power/runtime_active_time: 0
/sys/devices/platform/vboxdrv.0/power/runtime_active_kids: 0
/sys/devices/platform/vboxdrv.0/power/runtime_usage: 0
/sys/devices/platform/vboxdrv.0/power/runtime_status: unsupported
/sys/devices/platform/vboxdrv.0/power/async: disabled
/sys/devices/platform/vboxdrv.0/power/runtime_suspended_time: 0
/sys/devices/platform/vboxdrv.0/power/runtime_enabled: disabled
/sys/devices/platform/vboxdrv.0/power/control: auto

In [2]: 
