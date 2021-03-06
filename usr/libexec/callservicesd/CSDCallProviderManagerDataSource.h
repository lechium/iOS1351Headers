//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSDCallCenterObserverDelegate-Protocol.h"
#import "CSDCallProviderManagerDataSource-Protocol.h"
#import "TUCallCapabilitiesDelegatePrivate-Protocol.h"

@class CSDCallCenterObserver, CSDSandboxExtensionDirectory, NSDictionary, NSSet, NSString;
@protocol CSDCallProviderManagerDataSourceDelegate, OS_dispatch_queue;

@interface CSDCallProviderManagerDataSource : NSObject <CSDCallCenterObserverDelegate, TUCallCapabilitiesDelegatePrivate, CSDCallProviderManagerDataSource>
{
    id <CSDCallProviderManagerDataSourceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CSDSandboxExtensionDirectory *_ringtonesSandboxExtensionDirectory;	// 24 = 0x18
    CSDCallCenterObserver *_callCenterObserver;	// 32 = 0x20
    NSSet *_providerIdentifiersForExistingCalls;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000f5bf4
@property(copy, nonatomic) NSSet *providerIdentifiersForExistingCalls; // @synthesize providerIdentifiersForExistingCalls=_providerIdentifiersForExistingCalls;
@property(readonly, nonatomic) CSDCallCenterObserver *callCenterObserver; // @synthesize callCenterObserver=_callCenterObserver;
@property(readonly, nonatomic) CSDSandboxExtensionDirectory *ringtonesSandboxExtensionDirectory; // @synthesize ringtonesSandboxExtensionDirectory=_ringtonesSandboxExtensionDirectory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSDCallProviderManagerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeRelayCallingAvailability;	// IMP=0x00000001000f5b40
- (void)callsChangedForCallCenterObserver:(id)arg1;	// IMP=0x00000001000f58a8
- (void)handleApplicationUnregisteredNotification:(id)arg1;	// IMP=0x00000001000f57e0
- (id)_providersForPreferenceKey:(const struct __CFString *)arg1;	// IMP=0x00000001000f54a0
- (void)_saveProviders:(id)arg1 forPreferenceKey:(const struct __CFString *)arg2;	// IMP=0x00000001000f528c
- (_Bool)isProviderInstalled:(id)arg1;	// IMP=0x00000001000f51a0
- (void)removeLinksForFilenamesNotInArray:(id)arg1;	// IMP=0x00000001000f50a8
- (id)createLinkIfNecessaryWithFilename:(id)arg1 toURL:(id)arg2;	// IMP=0x00000001000f4f7c
- (_Bool)isSymbolicLinkAtURL:(id)arg1;	// IMP=0x00000001000f4df0
- (void)openUserActivity:(id)arg1 usingApplicationWithBundleIdentifier:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000f4c2c
@property(readonly, nonatomic, getter=isDevicePasscodeLocked) _Bool devicePasscodeLocked;
- (id)dialAssistedDialRequestForDialRequest:(id)arg1;	// IMP=0x00000001000f4b78
@property(copy, nonatomic) NSDictionary *registeredPairedHostDeviceProvidersByIdentifier;
@property(copy, nonatomic) NSDictionary *registeredLocalProvidersByIdentifier;
@property(readonly, nonatomic, getter=isRelayCallingGuaranteed) _Bool relayCallingGuaranteed;
- (void)dealloc;	// IMP=0x00000001000f4328
- (id)initWithSerialQueue:(id)arg1;	// IMP=0x00000001000f4150

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

