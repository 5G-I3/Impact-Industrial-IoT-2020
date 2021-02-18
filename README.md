# The Impact of Networking Protocols on Massive M2M Communication in the 5G Industrial IoT

[![Paper][paper-badge]][paper-link]

This repository contains code and documentation to reproduce experimental results of the paper **"[The Impact of Networking Protocols on Massive M2M Communication in the 5G Industrial IoT][paper-link]"**
<!-- published in XXX. -->

* Cenk Gündogan, Peter Kietzmann, Martine S. Lenders, Hauke Petersen, Michael Frey, Thomas C. Schmidt, Felix Shzu-Juraschek, and Matthias Wählisch,
**The Impact of Networking Protocols on Massive M2M Communication in the 5G Industrial IoT**,
<!-- In: XXX -->

 **Abstract**
 > Common use cases in the Industrial Internet of Things (IIoT)  deploy massive amounts of sensors and actuators that communicate with each other or to a remote cloud.
While they form too large  and too volatile networks to run on ultra-reliable, time-synchronized low-latency channels, participants still require reliability and latency guaranties. We elaborate this for safety-critical use cases.
This paper focuses on the effects of networking protocols for industrial communication services. It analyzes and compares the traditional Message Queuing Telemetry Transport for Sensor Networks (MQTT-SN) with the Constrained Application Protocol (CoAP) as a current IETF recommendation, and also with emerging Information-centric Networking (ICN) approaches, which  are ready for deployment in 5G verticals. Our findings indicate a rather diverse picture with a large dependence on deployment:
Publish-subscribe protocols are more versatile, whereas ICN protocols are more robust in multi-hop environments. MQTT-SN competitively claims resources on congested links, while CoAP politely coexists on the price of its performance.

Please follow our [Getting Started](getting_started.md) instructions for further information how to compile and execute the code.

<!-- TODO: update URLs -->
[paper-link]:https://github.com/5G-I3/Impact-Industrial-IoT-2020
<!-- [paper-badge]:https://img.shields.io/badge/Paper-IEEE%20Xplore-green -->
[paper-badge]:https://img.shields.io/badge/Paper-IEEE%20Xplore-gray
