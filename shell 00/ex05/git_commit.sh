#!/bin/bash

# Obtener los IDs de los últimos 5 commits usando git log y head
git log --format="%H" -n 5 | while read commit_id; do
    echo "${commit_id}"
done

