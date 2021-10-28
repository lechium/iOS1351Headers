//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NDAnalyticsService-Protocol.h"

@class NSArray, NSString;

@interface NDAnalyticsServiceRouter : NSObject <NDAnalyticsService>
{
    NSArray *_services;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100008924
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
- (void)performExternalAnalyticsRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000087a4
- (void)submitEnvelopes:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000862c
- (id)initWithServices:(id)arg1;	// IMP=0x00000001000085ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
