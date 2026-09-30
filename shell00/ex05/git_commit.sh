#!/bin/bash

#script para identificar los últimos 5 commits

git log -n 5 --format="%H"

