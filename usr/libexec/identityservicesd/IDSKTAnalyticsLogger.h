//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CUTMetricLogger-Protocol.h"

@class NSString;

@interface IDSKTAnalyticsLogger : NSObject <CUTMetricLogger>
{
}

+ (id)logger;	// IMP=0x0000000100110f98
- (void)logMetric:(id)arg1;	// IMP=0x0000000100110fc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

