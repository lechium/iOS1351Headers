//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BluetoothController : NSObject
{
    NSMutableArray *_devices;	// 8 = 0x8
    _Bool _tetheringConnected;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100b8b56c
- (_Bool)tetheringConnected;	// IMP=0x0000000100b8c01c
- (void)connectionChanged:(id)arg1;	// IMP=0x0000000100b8beac
- (void)updateTetheringConnected;	// IMP=0x0000000100b8ba5c
- (void)removeDeviceNotification:(id)arg1;	// IMP=0x0000000100b8b948
- (void)addDeviceNotification:(id)arg1;	// IMP=0x0000000100b8b81c
- (void)stopWatchingForDevices;	// IMP=0x0000000100b8b7b8
- (void)startWatchingForDevices;	// IMP=0x0000000100b8b638
- (void)dealloc;	// IMP=0x0000000100b8b5ec
- (id)init;	// IMP=0x0000000100b8b52c

@end
