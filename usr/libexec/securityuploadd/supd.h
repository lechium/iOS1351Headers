//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "supdProtocol-Protocol.h"

@class NSArray, NSDictionary, SFAnalyticsReporter;
@protocol OS_dispatch_queue;

@interface supd : NSObject <supdProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_analyticsTopics;	// 16 = 0x10
    SFAnalyticsReporter *_reporter;	// 24 = 0x18
    NSDictionary *_topicsSamplingRates;	// 32 = 0x20
}

+ (void)removeInstance;	// IMP=0x000000010000b8d8
+ (id)instance;	// IMP=0x000000010000b89c
+ (void)instantiate;	// IMP=0x000000010000b874
- (void).cxx_destruct;	// IMP=0x000000010000b670
@property(retain) NSDictionary *topicsSamplingRates; // @synthesize topicsSamplingRates=_topicsSamplingRates;
@property(readonly) SFAnalyticsReporter *reporter; // @synthesize reporter=_reporter;
@property(readonly) NSArray *analyticsTopics; // @synthesize analyticsTopics=_analyticsTopics;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)forceUploadWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b4ac
- (void)createChunkedLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b164
- (void)createLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000ae1c
- (void)getSysdiagnoseDumpWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000adac
- (id)stringForEventClass:(long long)arg1;	// IMP=0x000000010000ad54
- (void)clientStatus:(CDUnknownBlockType)arg1;	// IMP=0x000000010000aa0c
- (void)setUploadDateWith:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a870
- (id)getSysdiagnoseDump;	// IMP=0x000000010000a458
- (id)sysdiagnoseStringForEventRecord:(id)arg1;	// IMP=0x000000010000a144
- (_Bool)uploadAnalyticsWithError:(id *)arg1 force:(_Bool)arg2;	// IMP=0x00000001000096b0
- (id)serializeLoggingEvents:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000949c
- (void)performRegularlyScheduledUpload;	// IMP=0x0000000100009314
- (void)sendNotificationForOncePerReportSamplers;	// IMP=0x00000001000092e0
- (id)init;	// IMP=0x0000000100009290
- (id)initWithReporter:(id)arg1;	// IMP=0x0000000100009198
- (void)setupSamplingRates;	// IMP=0x0000000100008cb0
- (void)setupTopics;	// IMP=0x0000000100008a04

@end

