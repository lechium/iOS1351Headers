//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, ICUserIdentity, ICUserIdentityStore, ML3MusicLibrary;
@protocol ICDBackgroundTaskScheduling;

@interface BaseRequestHandler : NSObject
{
    ICUserIdentity *_userIdentity;	// 8 = 0x8
    ICUserIdentityStore *_userIdentityStore;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    ML3MusicLibrary *_musicLibrary;	// 32 = 0x20
    id <ICDBackgroundTaskScheduling> _taskScheduler;	// 40 = 0x28
}

+ (id)accountlessHandler;	// IMP=0x00000001000083c0
+ (_Bool)supportsAccountlessHandling;	// IMP=0x00000001000083b8
+ (id)managedConfigurations;	// IMP=0x00000001000081c4
+ (id)deleteHandlerForConfiguration:(id)arg1;	// IMP=0x0000000100007ebc
+ (id)handlerForConfiguration:(id)arg1;	// IMP=0x0000000100007b88
+ (id)handlers;	// IMP=0x0000000100007b4c
+ (id)globalSerialQueue;	// IMP=0x00000001000079f8
- (void).cxx_destruct;	// IMP=0x0000000100008900
@property(retain, nonatomic) id <ICDBackgroundTaskScheduling> taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(readonly, nonatomic) ML3MusicLibrary *musicLibrary; // @synthesize musicLibrary=_musicLibrary;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // @synthesize userIdentityStore=_userIdentityStore;
@property(readonly, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)updateLibraryWithReason:(long long)arg1 allowNoisyAuthPrompt:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000088c8
- (void)updateLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000088c4
- (void)scheduleBackgroundTaskWithType:(long long)arg1;	// IMP=0x000000010000870c
- (id)description;	// IMP=0x0000000100008620
- (void)cancelOperationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000861c
- (void)increasePriorityForAllOperations;	// IMP=0x0000000100008618
- (void)decreasePriorityForAllOperations;	// IMP=0x0000000100008614
- (void)onCalloutQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008554
- (void)cancellAllOperations;	// IMP=0x0000000100008550
- (void)performInitialLibraryUpdate;	// IMP=0x000000010000854c
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008548
- (void)becomeActive;	// IMP=0x0000000100008544
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000010000844c
- (id)init;	// IMP=0x00000001000083fc

@end

