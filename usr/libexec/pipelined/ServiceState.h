//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLGpsPosition, IndoorProtocolProxy;

@interface ServiceState : NSObject
{
    _Bool _pausedLocalization;	// 8 = 0x8
    _Bool _updateLocation;	// 9 = 0x9
    CLGpsPosition *_lastLocation;	// 16 = 0x10
    IndoorProtocolProxy *_delegateProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100019cb8
@property(retain, nonatomic) IndoorProtocolProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(nonatomic) _Bool updateLocation; // @synthesize updateLocation=_updateLocation;
@property(nonatomic) _Bool pausedLocalization; // @synthesize pausedLocalization=_pausedLocalization;
@property(retain, nonatomic) CLGpsPosition *lastLocation; // @synthesize lastLocation=_lastLocation;

@end

