//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADAudioRoute : NSObject
{
    _Bool _isBluetooth;	// 8 = 0x8
    NSString *_deviceName;	// 16 = 0x10
    NSString *_uid;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000c7fbc
@property(readonly, nonatomic) _Bool isBluetooth; // @synthesize isBluetooth=_isBluetooth;
@property(readonly, copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)initWithAudioDeviceID:(unsigned int)arg1;	// IMP=0x00000001000c7cc8

@end
