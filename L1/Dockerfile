FROM ubuntu:22.04
# Install required tools
RUN apt-get update && apt-get install -y curl sudo git xz-utils lbzip2
# Install nodejs
RUN curl -sL https://deb.nodesource.com/setup_14.x | bash
RUN apt-get install -y nodejs
# Install tree-sitter
RUN npm install tree-sitter-cli@0.20.0
ENV PATH=$PATH:/node_modules/.bin
# Get input language
COPY . tree-sitter-l
WORKDIR "/tree-sitter-l"
RUN tree-sitter generate
WORKDIR "/"
# Install Emscripten
RUN git clone https://github.com/emscripten-core/emsdk.git \
    && cd /emsdk \
    && ./emsdk install 2.0.24 \
    && ./emsdk activate 2.0.24
#RUN ["/bin/bash", "-c", "source /emsdk/emsdk_env.sh"]
ENV PATH=$PATH:/emsdk:/emsdk/upstream/emscripten:/emsdk/upstream/bin:/emsdk/node/14.15.5_64bit
ENV EMSDK=/emsdk
ENV EM_CONFIG=/emsdk/.emscripten
ENV EMSDK_NODE=/emsdk/node/14.15.5_64bit/bin/node
# Compile input language to wasm
WORKDIR "/"
RUN npx tree-sitter build-wasm tree-sitter-l
#CMD echo "$(ls)"