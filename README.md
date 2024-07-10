# PICKS_API

## 개요

PICKS는 중계서비스와 연동된 쿠폰팩 구독관리 시스템입니다.
쿠폰팩 생성의 주체는 중계서비스이며, 쿠폰팩 연동 후 PICKS 고객사에 맞게끔 정보를 변경하여 전달합니다.

### 주요기능

- 구독 및 발급
- 쿠폰팩 및 상품 조회

## 환경

- Nest.js: 9.0.0
- Prisma: 4.11.0
- Node.js: 18.15.0
- typescript: 4.7.4

## 셋업

- 의존성 설치

```bash
$ npm install # 의존성 설치
```

- 프리즈마 셋업

```bash
$ npx prisma db push # DB 변경사항 반영 (Code First)
$ npx prisma db pull # DB 변경사항 반영 (DB First)
$ npx prisma generate # schema 타입 생성
```

프리즈마 공식문서: https://www.prisma.io/docs

## 실행

- 개발

```bash
$ npm run start:dev # watch mode -> When saved, it is built automatically.
```

## 배포

PM2를 사용하여 프로세스를 가동합니다.

```bash
$ npm run build
$ pm2 reload {process name} # ex) pm2 reload picks_api
$ pm2 logs # 정상가동확인
```

관련 내용은 공식문서 참고바랍니다.

PM2 공식문서: https://pm2.io/docs/runtime/overview/

## 환경변수

환경변수는 루트경로의 .env 파일을 이용합니다. 없으실 경우 인계자에게 전달받아주세요.

## 인증방식

KB전용 api를 제외한 모든 컨드롤러는 Request Header에 Authorization이 존재해야 합니다.
Authorization값은 픽쓰 관리자에서 설정한 고객사별 CODE, PASS를 basic64로 인코딩한 값입니다.

```bash
# ex)
Request Headers {
  ...,
  Authorization: Basic {Authorization} # Authorization = code:pass basic64 인코딩 값
}
```

## 참고사항

#### Toss Payment

결제주체-PICKS, 결제방식-PG인 경우, TossPayment를 이용하여 결제를 진행하고 있습니다.
이는 추후 변경될 수 있다는 점 참고부탁드립니다.

TossPayment의 clientKey, secretKey 정보는 .env 파일에 존재하며,
해당 key값들은 test, live가 구분되어 있으니 배포 전 key값을 확인 후 진행해주세요.

#### picks-auth-scope

쿠폰 사용이력 제공여부를 구분하기 위한 scope key로, Request Header에 추가하여 사용합니다.

- 해당 key값은 신규 고객사 인입 시, 연동문서 '3. 통신규칙' 시트에서 구별하여 제공합니다.
- 필요 API: /coupon/couponList, /copuon/couponInfo
- 사용법
  - 사용이력 제공 고객사
    ```bash
    Request Headers {
      ...,
      picks-auth-scope: {AUTH_SCOPE_USE_KEY} # .env파일 내의 AUTH_SCOPE_USE_KEY
    }
    ```
  - 사용이력 미제공 고객사
    ```bash
    Request Headers {
      ...,
      picks-auth-scope: {AUTH_SCOPE_UNUSE_KEY} # .env파일 내의 AUTH_SCOPE_UNUSE_KEY
    }
    ```
