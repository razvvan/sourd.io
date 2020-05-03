/*
 *
 * Twilio Breakout Massive SDK
 *
 * Copyright (c) 2019 Twilio, Inc.
 *
 * SPDX-License-Identifier:  Apache-2.0
 */

/**
 * \file config.h - defines configuration parameters. Can be modified by the user to adapt to a particular use-case
 *
 */
#ifndef BREAKOUT_CONFIG_H_
#define BREAKOUT_CONFIG_H_

// MQTT Settings

// Set to 1 to enable MQTT client logging
#define MQTT_LOG_ENABLED 0

// Maximal message size
#define MAX_MQTT_PACKET_SIZE 500

// Maximal number of topics device can subscribe to
#define MAX_MQTT_SUBSCRIPTIONS 2

#if defined(USE_TLS_CLIENT_CERTIFICATES) || defined(USE_TLS_USERNAME_PASSWORD)
#define USE_TLS

// TLS_PROFILE_ID 0 is usually a good default unless using multiple profiles - possible values 0-4
#define TLS_PROFILE_ID 0

// Cipher to use. Refer to src/massive-sdk/src/modem/enumsRN4.h for the full list
#define TLS_CIPHER_SUITE USECPREF_CIPHER_SUITE_TLS_RSA_WITH_AES_256_CBC_SHA256

#include "tls_credentials.h"
#endif

#endif  // BREAKOUT_CONFIG_H_
