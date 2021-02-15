# The Impact of Networking Protocols on Massive M2M Communication in the 5G Industrial IoT
Code and documentation to reproduce our experimental results

## Prerequisites
The applications to reproduce our comparative evaluations run on the [RIOT](https://github.com/RIOT-OS/RIOT) operating system.
The [RIOT tutorial](https://github.com/RIOT-OS/Tutorials) provides a setup guide for installing the necessary toolchains.
More information on how to compile an application for RIOT and on how to flash the resulting binary on real hardware is summarized in the [The Quickest Start](https://doc.riot-os.org/index.html#the-quickest-start) and the [Getting Started](https://doc.riot-os.org/getting-started.html).

The experiments are designed to run on the [FIT IoT-Lab testbed](https://www.iot-lab.info/).
All protocol deployments use the [IoT-Lab M3](https://www.iot-lab.info/docs/boards/iot-lab-m3/) board.
Configurations that make use of a 6Lo border router to interact with a Linux backend further use an [IoT-Lab A8](https://www.iot-lab.info/docs/boards/iot-lab-a8-m3/) device as the gateway node.
This applies to these deployments: MQTT-SN, CoAP OBS, and CoAP PUT.

More information on the `m3` nodes sum up [here](https://doc.riot-os.org/group__boards__iotlab-m3.html), [here](https://iot-lab.github.io/docs/boards/iot-lab-m3/) and for the `a8` nodes [here](https://iot-lab.github.io/docs/boards/iot-lab-a8-m3/).

Follow [this guide](https://www.iot-lab.info/legacy/tutorials/getting-started-tutorial/index.html) for a step-wise description on scheduling experiments in the testbed.

## Code
The explicit RIOT version is included as a submodule in this repository.
The `apps` folder contains the RIOT and CCN-lite applications that we used to perform our experiments.

## Compile Applications
Application code for each deployment resides in the `apps` directory.
The necessary RIOT version is included as a git submodule.
This repository needs to be clonsed recursively with:

```
git clone --recursive https://github.com/5G-I3/Impact-Industrial-IoT-2020
```

If this `RIOT submodule` is empty, then update the submodule.
From the root of this repository, run:

```
git submodule update --init
```

To compile a particular application, we first change the directory (e.g., for the `coap_get_cli_unsch` app):

```
cd apps/coap_get_cli_unsch
```

and then compile for the `m3` board using the following command:

```
BOARD=iotlab-m3 make all
```

This generates the binary files `bin/coap_get_cli_unsch.[bin,elf]`, which can then be flashed on the testbed nodes following the step-wise testbed guide.

Some applications may also work with the RIOT [native](https://github.com/RIOT-OS/RIOT/wiki/Family%3A-native) board, which technically is a Linux process and allows for a quick, iterative test and develop cycle.
