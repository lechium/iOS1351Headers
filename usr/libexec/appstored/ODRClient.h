//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ODRServerProtocol-Protocol.h"

@class NSDictionary, NSLock, NSMutableDictionary, NSString, ODRApplication;
@protocol ODRClientProtocol;

@interface ODRClient : NSObject <ODRServerProtocol>
{
    ODRApplication *_application;	// 8 = 0x8
    id <ODRClientProtocol> _clientProxy;	// 16 = 0x10
    NSString *_requestingAppBundleID;	// 24 = 0x18
    NSMutableDictionary *_bundleRequestToDownloadRequest;	// 32 = 0x20
    NSLock *_readyLock;	// 40 = 0x28
    NSDictionary *_sandboxExtension;	// 48 = 0x30
}

+ (id)_issueSandboxExtensionWithRootPath:(id)arg1;	// IMP=0x0000000100143934
+ (void)_removeClient:(id)arg1;	// IMP=0x00000001001437fc
+ (id)_refreshManifestFromStoreForApplication:(id)arg1;	// IMP=0x000000010013db70
+ (id)refreshManifestIfNecessaryForAssetPackWithID:(id)arg1 andApplication:(id)arg2;	// IMP=0x000000010013d82c
+ (id)clientForAppBundleID:(id)arg1;	// IMP=0x000000010013d654
+ (id)activeClients;	// IMP=0x000000010013d5e8
+ (void)initialize;	// IMP=0x000000010013cf58
- (void).cxx_destruct;	// IMP=0x00000001001441b8
@property(retain, nonatomic) NSDictionary *sandboxExtension; // @synthesize sandboxExtension=_sandboxExtension;
@property(retain, nonatomic) NSLock *readyLock; // @synthesize readyLock=_readyLock;
@property(retain, nonatomic) NSMutableDictionary *bundleRequestToDownloadRequest; // @synthesize bundleRequestToDownloadRequest=_bundleRequestToDownloadRequest;
@property(readonly) NSString *requestingAppBundleID; // @synthesize requestingAppBundleID=_requestingAppBundleID;
@property(retain, nonatomic) id <ODRClientProtocol> clientProxy; // @synthesize clientProxy=_clientProxy;
- (void)_unpinAssetPack:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100143eac
- (_Bool)_tagsAreValid:(id)arg1;	// IMP=0x0000000100143a58
- (void)_resetStateAndBecomeReady;	// IMP=0x000000010014387c
- (void)_pinAssetPack:(id)arg1 priority:(double)arg2 tagsRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001432bc
- (void)_okToPurgeAssetPack:(id)arg1;	// IMP=0x0000000100143080
- (void)_clearReadyLock;	// IMP=0x0000000100143024
- (id)_assetPacksForTags:(id)arg1;	// IMP=0x0000000100142e90
- (void)setAlwaysPreserved:(_Bool)arg1 forTags:(id)arg2 inBundle:(id)arg3;	// IMP=0x0000000100142930
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3;	// IMP=0x0000000100142398
- (void)okToPurgeAssetPacks:(id)arg1;	// IMP=0x0000000100142174
- (void)unpinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100141a28
- (void)setLoadingPriority:(double)arg1 forTags:(id)arg2 inBundle:(id)arg3;	// IMP=0x0000000100141664
- (void)conditionallyPinTags:(id)arg1 inBundle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001407e4
- (void)pinTags:(id)arg1 inBundle:(id)arg2 priority:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010013f4c8
- (void)tagStateInBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013efc0
- (void)beginWithBundleURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013e988
- (void)beginODRSessionWithBundleURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013e538
- (void)hello:(CDUnknownBlockType)arg1;	// IMP=0x000000010013e134
- (id)interface;	// IMP=0x000000010013d5e4
- (id)initWithConnection:(id)arg1;	// IMP=0x000000010013cfbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
