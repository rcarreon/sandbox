#!/bin/bash
echo -e "Deployinh jenkins"
#curl --user jenkins:0332bde12a8f34a9d02da6b2148d2050  http://jenkinsrobc.net:8080/job/cellcity/build
curl -X POST http://jenkinsrobc.net:8080/job/Cellcity/build?TOKEN=0332bde12a8f34a9d02da6b2148d2050

