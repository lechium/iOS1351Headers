//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDTStatsAdaptor-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ABSAggdStats : NSObject <NDTStatsAdaptor>
{
}

- (void)_logFullKey:(id)arg1 transitSize:(id)arg2;	// IMP=0x000000010002afac
- (void)_logFullKey:(id)arg1 transitMillis:(id)arg2;	// IMP=0x000000010002ae94
- (void)statsLogger:(id)arg1 recordEventForKey:(id)arg2;	// IMP=0x000000010002add8
- (void)statsLogger:(id)arg1 recordValue:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x000000010002ac68
- (id)name;	// IMP=0x000000010002ac5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

