//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCM_ExternalAccessory : NSObject
{
    int _eaConnection;	// 8 = 0x8
}

+ (id)create;	// IMP=0x000000010005c438
@property(nonatomic) int eaConnection; // @synthesize eaConnection=_eaConnection;
- (void)accessoryReconnect;	// IMP=0x000000010008eafc
- (void)dealloc;	// IMP=0x000000010008eab0
- (id)init;	// IMP=0x000000010008ea58

@end

