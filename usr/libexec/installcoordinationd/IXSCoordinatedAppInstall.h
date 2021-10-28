//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXSDataPromiseDelegate-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class BKSTerminationAssertion, IXAppInstallCoordinatorSeed, IXSOwnedDataPromise, IXSPlaceholder, IXSPlaceholderFailureInfo, IXSPromisedOutOfBandTransfer, NSArray, NSDate, NSError, NSMutableArray, NSProgress, NSSet, NSString, NSUUID;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface IXSCoordinatedAppInstall : NSObject <IXSDataPromiseDelegate, NSSecureCoding>
{
    _Bool _isPaused;	// 8 = 0x8
    _Bool _complete;	// 9 = 0x9
    _Bool _loadingPhaseIsComplete;	// 10 = 0xa
    _Bool _isTracked;	// 11 = 0xb
    _Bool _sentBeginRestoringUserData;	// 12 = 0xc
    IXSPlaceholder *_placeholderPromise;	// 16 = 0x10
    IXSOwnedDataPromise *_appAssetPromise;	// 24 = 0x18
    unsigned long long _appAssetPromiseDRI;	// 32 = 0x20
    NSArray *_initialODRAssetPromises;	// 40 = 0x28
    IXSPromisedOutOfBandTransfer *_userDataPromise;	// 48 = 0x30
    IXSPromisedOutOfBandTransfer *_deviceSecurityPromise;	// 56 = 0x38
    IXSPromisedOutOfBandTransfer *_preparationPromise;	// 64 = 0x40
    IXSOwnedDataPromise *_installOptionsPromise;	// 72 = 0x48
    NSUUID *_targetGizmoPairingID;	// 80 = 0x50
    unsigned long long _importance;	// 88 = 0x58
    unsigned long long _effectiveIntent;	// 96 = 0x60
    IXAppInstallCoordinatorSeed *_seed;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_internalQueue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_delegateCallQueue;	// 120 = 0x78
    NSObject<OS_dispatch_group> *_outstandingInstallOperationsGroup;	// 128 = 0x80
    NSError *_error;	// 136 = 0x88
    unsigned long long _errorSourceIdentifier;	// 144 = 0x90
    NSUUID *_installOptionsPromiseUUID;	// 152 = 0x98
    NSUUID *_placeholderPromiseUUID;	// 160 = 0xa0
    NSUUID *_appAssetPromiseUUID;	// 168 = 0xa8
    NSArray *_initialODRAssetPromiseUUIDs;	// 176 = 0xb0
    NSUUID *_userDataPromiseUUID;	// 184 = 0xb8
    NSUUID *_deviceSecurityPromiseUUID;	// 192 = 0xc0
    NSUUID *_preparationPromiseUUID;	// 200 = 0xc8
    NSProgress *_cachedCurrentProgress;	// 208 = 0xd0
    NSMutableArray *_pendingProgressRequests;	// 216 = 0xd8
    unsigned long long _placeholderInstallState;	// 224 = 0xe0
    unsigned long long _appInstallState;	// 232 = 0xe8
    IXSPlaceholderFailureInfo *_placeholderFailureInfo;	// 240 = 0xf0
    unsigned long long _originalInstallType;	// 248 = 0xf8
    BKSTerminationAssertion *_termAssertion;	// 256 = 0x100
    NSObject<OS_dispatch_source> *_assertionRetryTimer;	// 264 = 0x108
    unsigned long long _assertionRetryCount;	// 272 = 0x110
    NSDate *_firstPlugInBusyTime;	// 280 = 0x118
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002dd18
- (void).cxx_destruct;	// IMP=0x000000010003ec20
@property(retain, nonatomic) NSDate *firstPlugInBusyTime; // @synthesize firstPlugInBusyTime=_firstPlugInBusyTime;
@property(nonatomic) unsigned long long assertionRetryCount; // @synthesize assertionRetryCount=_assertionRetryCount;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionRetryTimer; // @synthesize assertionRetryTimer=_assertionRetryTimer;
@property(retain, nonatomic) BKSTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
@property(nonatomic) _Bool sentBeginRestoringUserData; // @synthesize sentBeginRestoringUserData=_sentBeginRestoringUserData;
@property(nonatomic) _Bool isTracked; // @synthesize isTracked=_isTracked;
@property(nonatomic) unsigned long long originalInstallType; // @synthesize originalInstallType=_originalInstallType;
@property(retain, nonatomic) IXSPlaceholderFailureInfo *placeholderFailureInfo; // @synthesize placeholderFailureInfo=_placeholderFailureInfo;
@property(nonatomic) unsigned long long appInstallState; // @synthesize appInstallState=_appInstallState;
@property(nonatomic) unsigned long long placeholderInstallState; // @synthesize placeholderInstallState=_placeholderInstallState;
@property(retain, nonatomic) NSMutableArray *pendingProgressRequests; // @synthesize pendingProgressRequests=_pendingProgressRequests;
@property(readonly, nonatomic) NSProgress *cachedCurrentProgress; // @synthesize cachedCurrentProgress=_cachedCurrentProgress;
@property(retain, nonatomic) NSUUID *preparationPromiseUUID; // @synthesize preparationPromiseUUID=_preparationPromiseUUID;
@property(retain, nonatomic) NSUUID *deviceSecurityPromiseUUID; // @synthesize deviceSecurityPromiseUUID=_deviceSecurityPromiseUUID;
@property(retain, nonatomic) NSUUID *userDataPromiseUUID; // @synthesize userDataPromiseUUID=_userDataPromiseUUID;
@property(copy, nonatomic) NSArray *initialODRAssetPromiseUUIDs; // @synthesize initialODRAssetPromiseUUIDs=_initialODRAssetPromiseUUIDs;
@property(retain, nonatomic) NSUUID *appAssetPromiseUUID; // @synthesize appAssetPromiseUUID=_appAssetPromiseUUID;
@property(retain, nonatomic) NSUUID *placeholderPromiseUUID; // @synthesize placeholderPromiseUUID=_placeholderPromiseUUID;
@property(retain, nonatomic) NSUUID *installOptionsPromiseUUID; // @synthesize installOptionsPromiseUUID=_installOptionsPromiseUUID;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *outstandingInstallOperationsGroup; // @synthesize outstandingInstallOperationsGroup=_outstandingInstallOperationsGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallQueue; // @synthesize delegateCallQueue=_delegateCallQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) IXAppInstallCoordinatorSeed *seed; // @synthesize seed=_seed;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x000000010003e86c
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;	// IMP=0x000000010003e7e0
- (void)promiseDidReset:(id)arg1;	// IMP=0x000000010003e7dc
- (void)promiseDidComplete:(id)arg1;	// IMP=0x000000010003e684
- (void)promiseDidBegin:(id)arg1;	// IMP=0x000000010003e1e4
- (void)_onQueue_updateLoadingProgress;	// IMP=0x000000010003d67c
- (void)_onQueue_finishLoadingProgress;	// IMP=0x000000010003d558
- (void)_onQueue_cancelLoadingProgress;	// IMP=0x000000010003d434
- (void)_onQueue_resumeProgress;	// IMP=0x000000010003d38c
- (void)_onQueue_pauseProgress;	// IMP=0x000000010003d2ec
- (void)_pauseProgressObject:(id)arg1;	// IMP=0x000000010003d218
- (void)_onQueue_fetchProgressAndRun:(CDUnknownBlockType)arg1;	// IMP=0x000000010003ceb0
- (void)_limitedConcurrency_fetchProgressForPlaceholderInstallType:(unsigned long long)arg1 andRun:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c9dc
- (void)_runWithProgress:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000010003c76c
@property(nonatomic) _Bool loadingPhaseIsComplete; // @synthesize loadingPhaseIsComplete=_loadingPhaseIsComplete;
@property(readonly, copy, nonatomic) NSSet *promiseUUIDs;
@property(nonatomic) unsigned long long effectiveIntent; // @synthesize effectiveIntent=_effectiveIntent;
@property(readonly, nonatomic) unsigned long long originalIntent; // @dynamic originalIntent;
@property(readonly, nonatomic) unsigned long long creator; // @dynamic creator;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(readonly, copy) NSString *description;
- (void)_updatePendingOperationsForChangeFromPreviousState:(unsigned long long)arg1 toNewState:(unsigned long long)arg2;	// IMP=0x000000010003acc0
- (void)_onQueue_removeSavedState;	// IMP=0x000000010003ab14
- (void)_onQueue_saveState;	// IMP=0x000000010003a7cc
- (void)_onQueue_internal_cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000100039ec8
- (void)_onQueue_cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000100039d60
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000100039c60
- (void)_onQueue_cancelPlaceholderIfNeededForReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000100039230
- (void)_onQueue_handleAppAssetPromiseCancellationWhenRestoringWithReason:(id)arg1 client:(unsigned long long)arg2;	// IMP=0x0000000100038f78
- (_Bool)_shouldRemovePlaceholderForReason:(id)arg1;	// IMP=0x0000000100038ddc
- (void)_onQueue_updatePlaceholderForFailureReason:(id)arg1 client:(unsigned long long)arg2 installType:(unsigned long long)arg3;	// IMP=0x0000000100038ad8
- (void)_asyncUpdatePlaceholderMetadataWithInstallType:(unsigned long long)arg1 reason:(long long)arg2 underlyingError:(id)arg3 client:(unsigned long long)arg4;	// IMP=0x0000000100038898
@property(nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (void)_onQueue_unregister;	// IMP=0x0000000100038394
- (void)_onQueue_prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000380f4
- (void)prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100038030
@property(nonatomic) _Bool shouldBeginRestoringUserData; // @dynamic shouldBeginRestoringUserData;
@property(nonatomic) unsigned long long importance; // @synthesize importance=_importance;
- (_Bool)externalGetIsPaused;	// IMP=0x0000000100037c08
- (void)externalSetIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100037b38
- (void)setIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000378a4
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) NSUUID *targetGizmoPairingID; // @synthesize targetGizmoPairingID=_targetGizmoPairingID;
@property(retain, nonatomic) IXSOwnedDataPromise *installOptionsPromise; // @synthesize installOptionsPromise=_installOptionsPromise;
- (void)_internal_setInstallOptionsPromise:(id)arg1;	// IMP=0x0000000100037324
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *preparationPromise; // @synthesize preparationPromise=_preparationPromise;
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *deviceSecurityPromise; // @synthesize deviceSecurityPromise=_deviceSecurityPromise;
@property(retain, nonatomic) IXSPromisedOutOfBandTransfer *userDataPromise; // @synthesize userDataPromise=_userDataPromise;
@property(copy, nonatomic) NSArray *initialODRAssetPromises; // @synthesize initialODRAssetPromises=_initialODRAssetPromises;
@property(nonatomic) unsigned long long appAssetPromiseDRI; // @synthesize appAssetPromiseDRI=_appAssetPromiseDRI;
@property(retain, nonatomic) IXSOwnedDataPromise *appAssetPromise; // @synthesize appAssetPromise=_appAssetPromise;
- (void)_internal_setAppAssetPromise:(id)arg1;	// IMP=0x0000000100035f58
@property(retain, nonatomic) IXSPlaceholder *placeholderPromise; // @synthesize placeholderPromise=_placeholderPromise;
- (void)_onQueue_fireObserversForClient:(id)arg1;	// IMP=0x0000000100034eec
- (void)_onQueue_acquireAssertionAndDoInstall;	// IMP=0x0000000100034058
- (void)_finishAppInstallAtURL:(id)arg1 result:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100033b18
- (void)_onQueue_handleCancelForInstallFailure:(id)arg1;	// IMP=0x00000001000337c4
- (id)_onQueue_fetchInstallOptionsWithError:(id *)arg1;	// IMP=0x00000001000331cc
- (void)_onQueue_acquireAssertionAndInstallPlaceholder;	// IMP=0x0000000100031dd0
- (void)_finishPlaceholderInstallAtURL:(id)arg1 result:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000100031710
- (_Bool)_installApplication:(id)arg1 options:(id)arg2 retries:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000010003125c
- (void)_onQueue_acquireAssertionForPlaceholder:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100030cf4
- (void)_onQueue_handleAssertionAcquisitionFailureForPlaceholder:(_Bool)arg1 withError:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100030578
- (void)_onQueue_runAssertionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000304d4
- (long long)_onQueue_assertionRetrySeconds;	// IMP=0x0000000100030448
- (void)_runAsyncBlockWithDescription:(id)arg1 onLaunchServicesQueue:(CDUnknownBlockType)arg2;	// IMP=0x00000001000302c4
- (void)_onQueue_checkState;	// IMP=0x000000010002fdb8
@property(readonly, nonatomic) unsigned long long state;
- (void)handleUnlockNotification;	// IMP=0x000000010002f3e4
- (void)_releasePowerAssertion:(unsigned int)arg1;	// IMP=0x000000010002f30c
- (unsigned int)_createPowerAssertion;	// IMP=0x000000010002f038
- (_Bool)awakeFromSerializationWithError:(id *)arg1;	// IMP=0x000000010002dd20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002d728
- (void)dealloc;	// IMP=0x000000010002d6a4
- (id)initWithSeed:(id)arg1;	// IMP=0x000000010002d530
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002ce48
- (void)_initInternalState;	// IMP=0x000000010002cc98
- (oneway void)_remote_getCoordinationState:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042184
- (oneway void)_remote_prioritizeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000420bc
- (oneway void)_remote_getIsPausedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041fd0
- (oneway void)_remote_setIsPaused:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041efc
- (oneway void)_remote_fireObserversForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100041ddc
- (oneway void)_remote_getErrorInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041cbc
- (oneway void)_remote_getIsComplete:(CDUnknownBlockType)arg1;	// IMP=0x0000000100041bd0
- (oneway void)_remote_getDeviceSecurityPromise:(CDUnknownBlockType)arg1;	// IMP=0x00000001000419dc
- (oneway void)_remote_setDeviceSecurityPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000417b8
- (oneway void)_remote_getPreparationPromise:(CDUnknownBlockType)arg1;	// IMP=0x00000001000415c0
- (oneway void)_remote_setPreparationPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004139c
- (oneway void)_remote_getUserDataRestoreShouldBegin:(CDUnknownBlockType)arg1;	// IMP=0x00000001000412b0
- (oneway void)_remote_hasUserDataPromise:(CDUnknownBlockType)arg1;	// IMP=0x00000001000411ac
- (oneway void)_remote_getUserDataPromise:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040fb4
- (oneway void)_remote_setUserDataPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040d90
- (oneway void)_remote_hasInitialODRAssetPromises:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040c8c
- (oneway void)_remote_getInitialODRAssetPromises:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040990
- (oneway void)_remote_setInitialODRAssetPromiseUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004060c
- (oneway void)_remote_targetGizmoPairingIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010004050c
- (oneway void)_remote_setTargetGizmoPairingID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000403ec
- (oneway void)_remote_importanceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040300
- (oneway void)_remote_setImportance:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100040208
- (oneway void)_remote_hasInstallOptions:(CDUnknownBlockType)arg1;	// IMP=0x0000000100040104
- (oneway void)_remote_setInstallOptionsPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003fd7c
- (oneway void)_remote_setAppAssetPromiseDRI:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003fc84
- (oneway void)_remote_getAppAssetPromiseDRI:(CDUnknownBlockType)arg1;	// IMP=0x000000010003fb98
- (oneway void)_remote_appAssetPromiseHasBegunFulfillment:(CDUnknownBlockType)arg1;	// IMP=0x000000010003f97c
- (oneway void)_remote_hasAppAssetPromise:(CDUnknownBlockType)arg1;	// IMP=0x000000010003f878
- (oneway void)_remote_getAppAssetPromise:(CDUnknownBlockType)arg1;	// IMP=0x000000010003f684
- (oneway void)_remote_setAppAssetPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003f460
- (oneway void)_remote_hasPlaceholderPromise:(CDUnknownBlockType)arg1;	// IMP=0x000000010003f35c
- (oneway void)_remote_getPlaceholderPromise:(CDUnknownBlockType)arg1;	// IMP=0x000000010003f168
- (oneway void)_remote_setPlaceholderPromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003edf4
- (oneway void)_remote_cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ed70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
