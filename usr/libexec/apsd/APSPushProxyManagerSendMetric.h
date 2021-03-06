//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CUTAWDMetric-Protocol.h"
#import "CUTCoreAnalyticsMetric-Protocol.h"

@class NSDictionary, NSString, PBCodable;
@protocol NSCopying;

@interface APSPushProxyManagerSendMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>
{
    NSString *_guid;	// 8 = 0x8
    NSString *_topic;	// 16 = 0x10
    long long _messageCommand;	// 24 = 0x18
    _Bool _isNearby;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100085e60
@property(readonly, nonatomic) _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) long long messageCommand; // @synthesize messageCommand=_messageCommand;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property(readonly) unsigned int awdIdentifier;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *name;
- (id)initWithGuid:(id)arg1 messageCommand:(long long)arg2 topic:(id)arg3 isNearby:(_Bool)arg4;	// IMP=0x0000000100085904

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

