//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RTCReportingBackend.h"

@class NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString;

@interface HTTPSPostBackend : RTCReportingBackend
{
    NSString *_postURL;	// 224 = 0xe0
    _Bool _useDefaultPostURL;	// 232 = 0xe8
    NSString *_realtimePostURL;	// 240 = 0xf0
    _Bool _useDefaultRealtimePostURL;	// 248 = 0xf8
    NSMutableArray *_batchedEvents;	// 256 = 0x100
    NSOperationQueue *_queue;	// 264 = 0x108
    int _numberOfFilters;	// 272 = 0x110
    struct filterTag *_filters;	// 280 = 0x118
    _Bool _dnuEnabled;	// 288 = 0x120
    int _dnuType;	// 292 = 0x124
    int _eventThreshold;	// 296 = 0x128
    int _extrasOnInternal;	// 300 = 0x12c
    NSNumber *_overrideSampling;	// 304 = 0x130
    NSMutableDictionary *_eventMethodCounts;	// 312 = 0x138
    NSString *_uuidRespectDnu;	// 320 = 0x140
    NSString *_uuidOverrideDnu;	// 328 = 0x148
    NSString *_uuidCustom;	// 336 = 0x150
    _Bool _forceEventLogging;	// 344 = 0x158
    _Bool _immutable;	// 345 = 0x159
}

@property(copy) NSString *postURL; // @synthesize postURL=_postURL;
- (unsigned long long)batchedEventsSize;	// IMP=0x00000001000254b4
- (void)setCorrelatedSessionID:(id)arg1;	// IMP=0x0000000100025304
- (id)flushMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100024c08
- (id)sendMessage:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 flag:(int)arg6;	// IMP=0x00000001000244b8
- (void)filterEvent:(id)arg1;	// IMP=0x0000000100023fb8
- (int)updateState;	// IMP=0x0000000100023f74
- (int)updateBackendState;	// IMP=0x000000010002317c
- (_Bool)isFrameworkEnabledForClient:(id)arg1;	// IMP=0x0000000100023000
- (void)resetBackendStateWithClient:(id)arg1;	// IMP=0x0000000100022e9c
- (_Bool)matchClientNameAndServiceID:(id)arg1 clientName:(id)arg2 serviceID:(id)arg3;	// IMP=0x0000000100022dc0
- (_Bool)updatePostLink:(id)arg1;	// IMP=0x0000000100022b18
- (_Bool)matchStringWithList:(id)arg1 wholeString:(id)arg2 whitelist:(_Bool)arg3;	// IMP=0x00000001000229b8
- (_Bool)matchExactStringWithList:(id)arg1 wholeString:(id)arg2 whitelist:(_Bool)arg3;	// IMP=0x0000000100022864
- (void)createFiltersFromArray:(id)arg1;	// IMP=0x00000001000225d4
- (void)postJSONMessage:(id)arg1 withFlag:(int)arg2 method:(id)arg3 responseCode:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100021e44
- (id)createMessageForPostAndLogging:(id)arg1 prettyJsonString:(id *)arg2;	// IMP=0x000000010002165c
- (void)prepareEventForMessage:(id)arg1 frameworkData:(id)arg2;	// IMP=0x0000000100021604
- (id)batchEvent:(id)arg1;	// IMP=0x00000001000212d0
- (id)newEventDictfromPayload:(id)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5;	// IMP=0x0000000100020e94
- (void)dealloc;	// IMP=0x0000000100020dc4
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;	// IMP=0x0000000100020984

@end

