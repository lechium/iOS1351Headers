//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BYDeviceProvider-Protocol.h"

@class NSString;

@interface BYDevice : NSObject <BYDeviceProvider>
{
    _Bool _hasHomeButton;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    long long _size;	// 24 = 0x18
}

+ (id)currentDevice;	// IMP=0x00000001000ffaf8
@property(readonly, nonatomic) _Bool hasHomeButton; // @synthesize hasHomeButton=_hasHomeButton;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)init;	// IMP=0x00000001000ffb68
- (id)currentDevice;	// IMP=0x00000001000ffb64
- (_Bool)isD33;	// IMP=0x000000010001a334
- (_Bool)posedDeviceSelection_largeSizeDevice;	// IMP=0x000000010001a2c8
- (_Bool)isD33;	// IMP=0x0000000100043d84
- (_Bool)posedDeviceSelection_largeSizeDevice;	// IMP=0x0000000100043d18
- (_Bool)isD33;	// IMP=0x000000010006a7c0
- (_Bool)posedDeviceSelection_largeSizeDevice;	// IMP=0x000000010006a754
- (_Bool)isD33;	// IMP=0x00000001000740e4
- (_Bool)posedDeviceSelection_largeSizeDevice;	// IMP=0x0000000100074078

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

