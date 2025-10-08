# README (English)

## ESP32 MQTT Communication Example

This project demonstrates how to connect an **ESP32** microcontroller to a **Wi-Fi** network and communicate with an **MQTT broker**. It continuously sends messages every 5 seconds and listens for incoming messages on a specific topic.

### Features

* Connects ESP32 to Wi-Fi.
* Establishes MQTT communication.
* Publishes periodic messages (every 5 seconds).
* Subscribes and receives messages on a topic.

### Requirements

* **ESP32 board**
* **Arduino IDE** (or PlatformIO)
* Required Libraries:

  * `WiFi.h`
  * `PubSubClient.h`

### Configuration

You must create a `secrets.h` file with your network and MQTT credentials:

```cpp
#define WIFI_SSID "YourWiFiSSID"
#define WIFI_PASSWORD "YourWiFiPassword"
#define MQTT_SERVER "YourMQTTBrokerIP"
#define MQTT_PORT 1883
#define MQTT_USER "YourMQTTUsername"
#define MQTT_PASSWORD "YourMQTTPassword"
```

### MQTT Topics

* **Publish:** `flutter/topic`
* **Subscribe:** `esp32/topic`

### Author and Credits

```
Author: Mahdi Bahram
Instagram: https://www.instagram.com/mahdi1bahram/

Company: Shahtut Electronics Inventors
Website: https://shahtut.com

Developed for: Bahram Kit Company
Store Website: https://bahramkit.com
Instagram: https://www.instagram.com/bahramkit/
```

📎 [tutuoral link](https://www.bahramkit.com/%d8%ae%d8%a7%d9%86%d9%87-%d9%87%d9%88%d8%b4%d9%85%d9%86%d8%af-4-1-%d8%a7%d8%b1%d8%b3%d8%a7%d9%84-%d8%a7%d8%b2-esp32-%d8%a2%d8%b1%d8%af%d9%88%db%8c%d9%86%d9%88-%d8%a8%d9%87-%d8%a7%d9%be%d9%84%db%8c/)
---

# راهنما (فارسی)

## نمونه ارتباط MQTT با ماژول ESP32

این پروژه نحوه‌ی اتصال ماژول **ESP32** به شبکه **Wi-Fi** و برقراری ارتباط با **سرور MQTT** را نشان می‌دهد. در این مثال، هر ۵ ثانیه یک پیام ارسال شده و هم‌زمان پیام‌های دریافتی از تاپیک مشخص دریافت می‌شوند.

### ویژگی‌ها

* اتصال ESP32 به Wi-Fi
* ارتباط با سرور MQTT
* ارسال پیام هر ۵ ثانیه
* دریافت پیام از تاپیک مشخص

### پیش‌نیازها

* *برد ESP32**
**نرم‌افزار Arduino IDE** یا PlatformIO
* کتابخانه‌های مورد نیاز:

  * `WiFi.h`
  * `PubSubClient.h`

### پیکربندی

فایلی با نام `secrets.h` ایجاد کنید و اطلاعات شبکه و سرور MQTT خود را وارد نمایید:

```cpp
#define WIFI_SSID "نام شبکه Wi-Fi"
#define WIFI_PASSWORD "رمز شبکه Wi-Fi"
#define MQTT_SERVER "آدرس سرور MQTT"
#define MQTT_PORT 1883
#define MQTT_USER "نام کاربری MQTT"
#define MQTT_PASSWORD "رمز عبور MQTT"
```

### تاپیک‌های مورد استفاده

* **ارسال:** `flutter/topic`
* **دریافت:** `esp32/topic`

### نویسنده و اطلاعات

```
نویسنده: مهدی بهرام
اینستاگرام: https://www.instagram.com/mahdi1bahram/

شرکت: مخترعین شاتوت الکترونیک
وبسایت: https://shahtut.com

طراحی شده برای: شرکت بهرام کیت
وبسایت فروشگاه: https://bahramkit.com
اینستاگرام: https://www.instagram.com/bahramkit/
```

📎 [لینک آموزش](https://www.bahramkit.com/%d8%ae%d8%a7%d9%86%d9%87-%d9%87%d9%88%d8%b4%d9%85%d9%86%d8%af-4-1-%d8%a7%d8%b1%d8%b3%d8%a7%d9%84-%d8%a7%d8%b2-esp32-%d8%a2%d8%b1%d8%af%d9%88%db%8c%d9%86%d9%88-%d8%a8%d9%87-%d8%a7%d9%be%d9%84%db%8c/)

---

📎 [shahtut.com](https://shahtut.com)
