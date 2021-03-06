//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SZExtractorDelegate-Protocol.h"

@class AMSPromise, AssetPromise, IXPromisedOutOfBandTransfer, KeepAlive, NSDate, NSDictionary, NSError, NSLock, NSMutableArray, NSProgress, NSString, NSURL, NSUUID, ODRApplication, ODRTagsRequest;
@protocol OS_dispatch_source;

@interface ODRAssetDownloadRequest : NSObject <SZExtractorDelegate>
{
    _Bool _completed;	// 8 = 0x8
    NSMutableArray *_duplicateDownloads;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    unsigned long long _newPins;	// 40 = 0x28
    IXPromisedOutOfBandTransfer *_outOfBandTransferPromise;	// 48 = 0x30
    unsigned long long _simulatedDownloadTickCount;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_simulatedDownloadTimer;	// 64 = 0x40
    _Bool _discretionary;	// 72 = 0x48
    _Bool _hasRefreshed;	// 73 = 0x49
    _Bool _shouldPin;	// 74 = 0x4a
    _Bool _streamable;	// 75 = 0x4b
    _Bool _useLocalCache;	// 76 = 0x4c
    _Bool _storeBased;	// 77 = 0x4d
    unsigned int _qosClass;	// 80 = 0x50
    AssetPromise *_assetPromise;	// 88 = 0x58
    NSString *_bundleID;	// 96 = 0x60
    NSString *_bundleKey;	// 104 = 0x68
    NSDictionary *_contentHashDictionary;	// 112 = 0x70
    NSUUID *_coordinatorID;	// 120 = 0x78
    NSString *_destinationPath;	// 128 = 0x80
    long long _downloadSize;	// 136 = 0x88
    long long _expectedDiskUsage;	// 144 = 0x90
    NSDictionary *_hashingData;	// 152 = 0x98
    double _loadingPriority;	// 160 = 0xa0
    NSString *_logKey;	// 168 = 0xa8
    long long _pinCount;	// 176 = 0xb0
    NSProgress *_progress;	// 184 = 0xb8
    NSDate *_requestStartDate;	// 192 = 0xc0
    NSURL *_sourceURL;	// 200 = 0xc8
    ODRTagsRequest *_tagsRequest;	// 208 = 0xd0
    long long _type;	// 216 = 0xd8
    NSString *_uniqueKey;	// 224 = 0xe0
    ODRApplication *_application;	// 232 = 0xe8
    AMSPromise *_completionPromise;	// 240 = 0xf0
    KeepAlive *_keepAlive;	// 248 = 0xf8
}

+ (id)_logPrefixForPriority:(double)arg1;	// IMP=0x000000010017850c
+ (id)downloadWithAssetPack:(id)arg1 andManifest:(id)arg2 forApplication:(id)arg3 originatingLogKey:(id)arg4;	// IMP=0x0000000100176620
- (void).cxx_destruct;	// IMP=0x0000000100178ce8
@property _Bool storeBased; // @synthesize storeBased=_storeBased;
@property(retain) KeepAlive *keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain) AMSPromise *completionPromise; // @synthesize completionPromise=_completionPromise;
@property(copy) ODRApplication *application; // @synthesize application=_application;
@property unsigned int qosClass; // @synthesize qosClass=_qosClass;
@property(retain) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
@property _Bool useLocalCache; // @synthesize useLocalCache=_useLocalCache;
@property long long type; // @synthesize type=_type;
@property(retain) ODRTagsRequest *tagsRequest; // @synthesize tagsRequest=_tagsRequest;
@property _Bool streamable; // @synthesize streamable=_streamable;
@property(copy) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property _Bool shouldPin; // @synthesize shouldPin=_shouldPin;
@property(retain) NSDate *requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
@property long long pinCount; // @synthesize pinCount=_pinCount;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property double loadingPriority; // @synthesize loadingPriority=_loadingPriority;
@property _Bool hasRefreshed; // @synthesize hasRefreshed=_hasRefreshed;
@property(copy) NSDictionary *hashingData; // @synthesize hashingData=_hashingData;
@property long long expectedDiskUsage; // @synthesize expectedDiskUsage=_expectedDiskUsage;
@property long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(getter=isDiscretionary) _Bool discretionary; // @synthesize discretionary=_discretionary;
@property(copy) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(copy) NSUUID *coordinatorID; // @synthesize coordinatorID=_coordinatorID;
@property(copy) NSDictionary *contentHashDictionary; // @synthesize contentHashDictionary=_contentHashDictionary;
@property(copy) NSString *bundleKey; // @synthesize bundleKey=_bundleKey;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) AssetPromise *assetPromise; // @synthesize assetPromise=_assetPromise;
- (void)_validateSourceURL;	// IMP=0x0000000100178920
- (void)_unlock;	// IMP=0x0000000100178910
- (id)_streamingZipOptions;	// IMP=0x00000001001786a4
- (id)_simulatedDownloadTimerWithInterval:(double)arg1 dispatchBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001785dc
- (double)_simulatedDownloadTime;	// IMP=0x000000010017853c
- (void)_lock;	// IMP=0x00000001001784fc
- (unsigned long long)_getFileSizeAtURL:(id)arg1;	// IMP=0x00000001001781e4
- (void)_completeCoordinatorPromise:(id)arg1;	// IMP=0x00000001001780b4
- (void)_cancelSimulatedDownloadTimer;	// IMP=0x0000000100178078
- (id)_calculateLocalURLForEmbeddedAssetPackWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100177f6c
@property(readonly) unsigned long long totalNewPins;
- (void)simulateDownloadForEmbeddedAssetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100177aac
- (void)setExtractionProgress:(double)arg1;	// IMP=0x0000000100177a54
- (id)requestProperties;	// IMP=0x00000001001778c8
@property(readonly) IXPromisedOutOfBandTransfer *outOfBandTransferPromise;
- (id)extractor;	// IMP=0x00000001001777d0
@property(readonly) long long duplicateDownloadCount;
@property(readonly) NSString *downloadPath;
- (void)completeWithSuccess;	// IMP=0x00000001001774dc
- (void)completeWithError:(id)arg1;	// IMP=0x0000000100177348
- (_Bool)allowCellularAccess;	// IMP=0x00000001001770a8
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100177098
- (void)addErrorBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100177088
- (void)addDuplicateDownload:(id)arg1;	// IMP=0x0000000100176f9c
- (id)init;	// IMP=0x0000000100176c78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

