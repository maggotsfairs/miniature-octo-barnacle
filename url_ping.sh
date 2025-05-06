#!/bin/bash
read -p "Enter URL: " url
if curl -s --head "$url" | grep "200 OK" > /dev/null; then
  echo "✅ $url is reachable."
else
  echo "❌ $url is down or unreachable."
fi
