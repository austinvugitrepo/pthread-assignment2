FROM alpine:latest

RUN apk add gcc musl-dev

WORKDIR /home

COPY . .

RUN gcc -o proj2b proj2b.c -lpthread

CMD ["./proj2b"]
