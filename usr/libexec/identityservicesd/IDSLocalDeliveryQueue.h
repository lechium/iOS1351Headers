//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IDSLocalDeliveryQueue : NSObject
{
    NSMutableArray *_messages;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSMutableDictionary *_statistics;	// 24 = 0x18
    struct _opaque_pthread_mutex_t _statisticsLock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001004b7e1c
- (void)clearStats;	// IMP=0x00000001004b7944
- (id)statisticsForDataProtectionClass:(unsigned int)arg1;	// IMP=0x00000001004b785c
@property(readonly) NSDictionary *statistics;
- (void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2;	// IMP=0x00000001004b6d68
- (void)_removeMessageFromStatistics:(id)arg1;	// IMP=0x00000001004b6544
- (void)_addMessageToStatistics:(id)arg1;	// IMP=0x00000001004b5f94
- (id)nextSocketPairMessageNotOnServices:(id)arg1;	// IMP=0x00000001004b5664
- (void)dequeueMessage:(id)arg1;	// IMP=0x00000001004b5384
- (void)enqueueMessage:(id)arg1;	// IMP=0x00000001004b50ac
- (void)pushMessage:(id)arg1;	// IMP=0x00000001004b4d8c
- (void)removeMessages:(id)arg1;	// IMP=0x00000001004b4d18
- (unsigned long long)countForDataMessageType:(long long)arg1;	// IMP=0x00000001004b4bc0
- (unsigned long long)countForDataProtectionClass:(unsigned int)arg1;	// IMP=0x00000001004b4a6c
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *messages;
- (void)dealloc;	// IMP=0x00000001004b48fc
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000001004b47ec

@end
