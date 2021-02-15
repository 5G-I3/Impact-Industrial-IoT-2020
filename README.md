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
