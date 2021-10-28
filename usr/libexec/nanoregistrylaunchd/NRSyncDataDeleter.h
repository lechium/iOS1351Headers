//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRSyncDataDeleterQuarantineJob;

@interface NRSyncDataDeleter : NSObject
{
    NRSyncDataDeleterQuarantineJob *_job;	// 8 = 0x8
}

+ (void)addPathJobsTo:(id)arg1 basePath:(id)arg2 paths:(id)arg3;	// IMP=0x00000001000055b4
+ (id)buildQuarantineJobWithStoreUUID:(id)arg1 services:(id)arg2;	// IMP=0x0000000100005188
+ (id)quarantineBasePathWithStoreUUID:(id)arg1;	// IMP=0x000000010000512c
+ (id)getLocalPairingStorePairingID:(id)arg1;	// IMP=0x0000000100005084
+ (id)getLocalPairingStorePath;	// IMP=0x0000000100005028
+ (id)mobileLibraryPath;	// IMP=0x000000010000501c
+ (id)deleterDataDescriptionPath;	// IMP=0x0000000100005000
- (void).cxx_destruct;	// IMP=0x0000000100006540
@property(retain, nonatomic) NRSyncDataDeleterQuarantineJob *job; // @synthesize job=_job;
- (void)deleteQuarantinedDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000639c
- (void)unquarantineDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005d74
- (void)quarantineDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005750
- (id)initWithStoreUUID:(id)arg1 services:(id)arg2;	// IMP=0x0000000100004f4c

@end
