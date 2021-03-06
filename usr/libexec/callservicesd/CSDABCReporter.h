//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDReporter-Protocol.h"

@class NSString;
@protocol CSDReporterDataSource, OS_dispatch_queue;

@interface CSDABCReporter : NSObject <CSDReporter>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010010fd38
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)stringForSignatureType:(unsigned long long)arg1;	// IMP=0x000000010010fd10
- (id)stringForIMAVChatEndedReason:(unsigned int)arg1;	// IMP=0x000000010010fb64
- (id)stringForIDSSessionEndedReason:(unsigned int)arg1;	// IMP=0x000000010010f94c
- (id)stringRepresentationForTUCallDisconnectedReason:(int)arg1;	// IMP=0x000000010010f894
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x000000010010f588
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010010f4e0
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010010f138

// Remaining properties
@property(nonatomic) __weak id <CSDReporterDataSource> dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

