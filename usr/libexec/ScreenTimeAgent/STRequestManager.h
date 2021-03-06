//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "DMFConfigurationSourceClientDelegate-Protocol.h"

@class DMFConfigurationSourceClient, NSOperationQueue, NSString;
@protocol STPersistenceControllerProtocol, STRequestManagerDelegate;

@interface STRequestManager : NSObject <DMFConfigurationSourceClientDelegate>
{
    id <STRequestManagerDelegate> _delegate;	// 8 = 0x8
    NSString *_organizationIdentifier;	// 16 = 0x10
    id <STPersistenceControllerProtocol> _persistenceController;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    DMFConfigurationSourceClient *_configurationSourceClient;	// 40 = 0x28
    NSString *_currentBlueprintHash;	// 48 = 0x30
}

+ (_Bool)_bundleIdentifiersContainCommunicationBundleIdentifier:(id)arg1;	// IMP=0x00000001000361ec
- (void).cxx_destruct;	// IMP=0x0000000100037144
@property(copy, nonatomic) NSString *currentBlueprintHash; // @synthesize currentBlueprintHash=_currentBlueprintHash;
@property(retain, nonatomic) DMFConfigurationSourceClient *configurationSourceClient; // @synthesize configurationSourceClient=_configurationSourceClient;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
@property(nonatomic) __weak id <STRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)operationToSendStatusUpdate:(id)arg1;	// IMP=0x0000000100036f04
- (id)operationToSendEvents:(id)arg1;	// IMP=0x0000000100036d2c
- (id)operationToResolveAsset:(id)arg1;	// IMP=0x0000000100036cc8
- (void)configurationSourceDidFailToRegister:(id)arg1 withError:(id)arg2;	// IMP=0x0000000100036c58
- (void)_processBlueprintChangesOperationDidFinish:(id)arg1;	// IMP=0x0000000100036a68
- (id)_expiredNotificationTimesForPredicates:(id)arg1;	// IMP=0x0000000100036824
- (void)_taskRequestOperationDidFinish:(id)arg1;	// IMP=0x0000000100036688
- (void)_processDeclarationsPayload:(id)arg1;	// IMP=0x0000000100036358
- (void)_processStatusPayload:(id)arg1;	// IMP=0x0000000100034504
- (void)installFromRequest:(id)arg1;	// IMP=0x0000000100034330
- (void)persistBlueprintsFromBlueprintPayload:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033ff4
- (void)processBlueprintChangesInstallOnly:(_Bool)arg1;	// IMP=0x0000000100033cd4
- (void)invalidate;	// IMP=0x0000000100033bec
- (id)initWithOrganizationIdentifier:(id)arg1 persistenceController:(id)arg2 configurationSourceClient:(id)arg3;	// IMP=0x0000000100033a4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

