//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, MediaConversionRequestTracker, NSDate, NSError, NSMutableDictionary, NSString, NSURL, NSUUID, NSXPCConnection, PAMediaConversionServiceResourceURLCollection;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VideoConversionRequest : NSObject
{
    _Bool _shouldPerformCleanupAtCompletion;	// 8 = 0x8
    _Bool _didSendReply;	// 9 = 0x9
    NSXPCConnection *_connection;	// 16 = 0x10
    NSUUID *_connectionIdentifier;	// 24 = 0x18
    NSMutableDictionary *_options;	// 32 = 0x20
    PAMediaConversionServiceResourceURLCollection *_sourceURLCollection;	// 40 = 0x28
    PAMediaConversionServiceResourceURLCollection *_destinationURLCollection;	// 48 = 0x30
    NSURL *_dataResultTemporaryOutputFileURL;	// 56 = 0x38
    NSMutableDictionary *_resultInformation;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
    AVAsset *_asset;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_progressUpdateTimerSource;	// 88 = 0x58
    CDUnknownBlockType _replyHandler;	// 96 = 0x60
    NSDate *_enqueueTime;	// 104 = 0x68
    NSDate *_conversionStartTime;	// 112 = 0x70
    NSDate *_conversionEndTime;	// 120 = 0x78
    long long _status;	// 128 = 0x80
    MediaConversionRequestTracker *_requestTracker;	// 136 = 0x88
}

+ (void)cleanupTemporaryFilesForJobGroupIdentifier:(id)arg1;	// IMP=0x0000000100010e2c
+ (id)temporaryFileURLWithNameComponent:(id)arg1 pathExtension:(id)arg2;	// IMP=0x0000000100010d4c
+ (id)temporaryFileURLForJobGroupIdentifier:(id)arg1 pathExtension:(id)arg2;	// IMP=0x0000000100010ca4
+ (id)conversionQueueWithPriorityExtension:(id)arg1;	// IMP=0x0000000100010c28
- (void).cxx_destruct;	// IMP=0x0000000100010b60
@property(retain) MediaConversionRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property _Bool didSendReply; // @synthesize didSendReply=_didSendReply;
@property _Bool shouldPerformCleanupAtCompletion; // @synthesize shouldPerformCleanupAtCompletion=_shouldPerformCleanupAtCompletion;
@property long long status; // @synthesize status=_status;
@property(retain) NSDate *conversionEndTime; // @synthesize conversionEndTime=_conversionEndTime;
@property(retain) NSDate *conversionStartTime; // @synthesize conversionStartTime=_conversionStartTime;
@property(retain) NSDate *enqueueTime; // @synthesize enqueueTime=_enqueueTime;
@property(copy) CDUnknownBlockType replyHandler; // @synthesize replyHandler=_replyHandler;
@property(retain) NSObject<OS_dispatch_source> *progressUpdateTimerSource; // @synthesize progressUpdateTimerSource=_progressUpdateTimerSource;
@property(retain) AVAsset *asset; // @synthesize asset=_asset;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableDictionary *resultInformation; // @synthesize resultInformation=_resultInformation;
@property(retain) NSURL *dataResultTemporaryOutputFileURL; // @synthesize dataResultTemporaryOutputFileURL=_dataResultTemporaryOutputFileURL;
@property(retain) PAMediaConversionServiceResourceURLCollection *destinationURLCollection; // @synthesize destinationURLCollection=_destinationURLCollection;
@property(retain) PAMediaConversionServiceResourceURLCollection *sourceURLCollection; // @synthesize sourceURLCollection=_sourceURLCollection;
@property(retain) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain) NSUUID *connectionIdentifier; // @synthesize connectionIdentifier=_connectionIdentifier;
@property __weak NSXPCConnection *connection; // @synthesize connection=_connection;
- (_Bool)requiresPhotosAdjustmentRendering;	// IMP=0x0000000100010988
- (_Bool)isMetadataTrackExtractionConversion;	// IMP=0x000000010001090c
- (_Bool)isPassthroughConversion;	// IMP=0x0000000100010890
- (void)cancel;	// IMP=0x000000010001088c
- (void)performConversion;	// IMP=0x0000000100010810
- (void)didEnqueue;	// IMP=0x00000001000107ac
- (CDStruct_3c1748cc)trimTimeRange;	// IMP=0x00000001000106f4
- (_Bool)hasTrimTimeRange;	// IMP=0x0000000100010690
- (_Bool)wantsResultAsData;	// IMP=0x0000000100010614
- (void)updateAndCompleteResultTracker;	// IMP=0x00000001000103a8
- (void)sendReply;	// IMP=0x000000010000ffb0
- (void)loadAsset;	// IMP=0x000000010000fde8
@property(readonly) NSURL *destinationMainResourceURL;
@property(readonly) NSURL *sourceMainResourceURL;
- (void)resolveDestinationBookmarkDictionary:(id)arg1;	// IMP=0x000000010000fb80
- (void)resolveSourceBookmarkDictionary:(id)arg1;	// IMP=0x000000010000f988
@property(readonly) NSString *jobIdentifier;
- (id)jobTypeIdentifier;	// IMP=0x000000010000f918
- (id)initWithSourceBookmarkDictionary:(id)arg1 destinationBookmarkDictionary:(id)arg2 options:(id)arg3;	// IMP=0x000000010000f6b0

@end

