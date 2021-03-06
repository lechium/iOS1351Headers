//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMRequest.h"

@class NSMutableSet, NSString;

@interface FMRequestRegister : FMRequest
{
    long long _nonEssentialRetryCount;	// 8 = 0x8
    NSString *_cause;	// 16 = 0x10
    NSMutableSet *_registeredCauses;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010002c9bc
@property(retain, nonatomic) NSMutableSet *registeredCauses; // @synthesize registeredCauses=_registeredCauses;
@property(retain, nonatomic) NSString *cause; // @synthesize cause=_cause;
@property(nonatomic) long long nonEssentialRetryCount; // @synthesize nonEssentialRetryCount=_nonEssentialRetryCount;
- (id)retryCauseExclusions;	// IMP=0x000000010002c8bc
- (_Bool)canReplace:(id)arg1;	// IMP=0x000000010002c604
- (_Bool)canRequestBeRetriedNow;	// IMP=0x000000010002c3f4
- (long long)maxConsecutiveNetworkNotificationRetries;	// IMP=0x000000010002c3ec
- (long long)maxNonNetworkRelatedRetries;	// IMP=0x000000010002c3e4
- (double)maxRetryInterval;	// IMP=0x000000010002c3d8
- (id)requestBody;	// IMP=0x000000010002c208
- (id)requestUrl;	// IMP=0x000000010002c1ac
- (id)initWithProvider:(id)arg1 andCause:(id)arg2;	// IMP=0x000000010002c028
- (void)deinitializeRequest;	// IMP=0x000000010002bff4

@end

