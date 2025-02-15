#pragma once

#import <CoreBluetooth/CoreBluetooth.h>
#import <Foundation/Foundation.h>

#include <functional>
#include "AdapterBase.h"

@interface AdapterBaseMacOS : NSObject<CBCentralManagerDelegate>

@property NSString *uuid;

- (bool)isBluetoothEnabled;

- (instancetype)init:(SimpleBLE::AdapterBase*)adapter;

- (void*)underlying;

- (void)scanStart;

- (void)scanStop;

- (bool)scanIsActive;

- (NSString*)address;

@end
