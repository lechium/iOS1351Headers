//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRCarPlayPreferencesDelegate-Protocol.h"

@class CRCarPlayPreferences, NSString;

@interface IAPCarPlayConnectionObserver : NSObject <CRCarPlayPreferencesDelegate>
{
    _Bool _isStarkPossibleByCarPlaySettings;	// 8 = 0x8
    CRCarPlayPreferences *_carPreferences;	// 16 = 0x10
    struct CIapPortIOKit *_parentUSBPort;	// 24 = 0x18
}

- (void)handleCarPlayAllowedDidChange;	// IMP=0x000000010000eac4
- (void)dealloc;	// IMP=0x000000010000ea60
- (id)initWithPort:(struct CIapPortIOKit *)arg1;	// IMP=0x000000010000e8d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

