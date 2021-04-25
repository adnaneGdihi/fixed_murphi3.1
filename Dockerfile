FROM ubuntu:12.04

WORKDIR /root

RUN \
  sed -i 's/# \(.*multiverse$\)/\1/g' /etc/apt/sources.list && \
  apt-get update && \
  apt-get -y upgrade && \
  apt-get install -y build-essential && \
  apt-get install -y gcc-multilib g++-multilib libc6-dev-i386 && \
  apt-get install -y software-properties-common && \
  apt-get install -y byobu curl git htop man unzip vim wget && \
  apt-get install -y flex byacc bison

ADD . /root

RUN \
    cd /root && \
    cd /root/Murphi3.1/src && \
    make && make install


ENV HOME /root

CMD ["bash"]

