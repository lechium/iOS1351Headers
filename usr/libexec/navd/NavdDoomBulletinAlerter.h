//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NavdDoomAlerter-Protocol.h"

@class NSString, NavdDoomStorage;

@interface NavdDoomBulletinAlerter : NSObject <NavdDoomAlerter>
{
    NavdDoomStorage *_storage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000049f0
- (_Bool)_archiveDestination:(id)arg1;	// IMP=0x00000001000049c0
- (id)_alertStringFromPlaceFormattedString:(id)arg1 destination:(id)arg2;	// IMP=0x00000001000046c0
- (_Bool)alertBrokenRouteWithRecommendedAlternate:(id)arg1 forDestination:(id)arg2;	// IMP=0x00000001000041b8
- (id)initWithDoomStorage:(id)arg1;	// IMP=0x0000000100004140

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
