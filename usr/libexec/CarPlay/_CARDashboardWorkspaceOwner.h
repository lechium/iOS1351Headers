//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"
#import "CAREventHandling-Protocol.h"
#import "CARWorkspaceOwner-Protocol.h"

@class CARWorkspace, NSMutableDictionary, NSString, _CARDashboardRootViewController, _CARDashboardWorkspaceStateResolver, _CARSiriViewController;
@protocol CAREnvironment, CARNotificationSuspending, CARWorkspaceStateChangeSession;

@interface _CARDashboardWorkspaceOwner : NSObject <CARWorkspaceOwner, CAREventHandling, BSInvalidatable>
{
    CARWorkspace *_workspace;	// 8 = 0x8
    _CARDashboardWorkspaceStateResolver *_stateResolver;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    _CARDashboardRootViewController *_rootViewController;	// 32 = 0x20
    _CARSiriViewController *_siriViewController;	// 40 = 0x28
    id <CARWorkspaceStateChangeSession> _currentSession;	// 48 = 0x30
    NSMutableDictionary *_entityIdentifierToViewControllerMap;	// 56 = 0x38
    id <CARNotificationSuspending> _notificationSuspender;	// 64 = 0x40
    id <CAREnvironment> _environment;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000100015da4
@property(nonatomic) __weak id <CAREnvironment> environment; // @synthesize environment=_environment;
@property(nonatomic) __weak id <CARNotificationSuspending> notificationSuspender; // @synthesize notificationSuspender=_notificationSuspender;
@property(nonatomic) __weak CARWorkspace *workspace; // @synthesize workspace=_workspace;
- (void)_handleSuspendedActivationForEntity:(id)arg1 changeItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015a1c
- (void)_updateViewControllerForEntity:(id)arg1 changeItem:(id)arg2 oldEntity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001000156d8
- (void)_newViewControllerForEntity:(id)arg1 changeItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100015054
- (id)_existingViewControllerForEntity:(id)arg1;	// IMP=0x0000000100014ff0
- (void)handleEvent:(id)arg1;	// IMP=0x0000000100014fd4
- (void)session:(id)arg1 handleStateChangeRequest:(id)arg2;	// IMP=0x0000000100013568
- (unsigned long long)session:(id)arg1 policyForRequest:(id)arg2;	// IMP=0x0000000100013504
- (void)workspace:(id)arg1 didEndStateChangeSession:(id)arg2;	// IMP=0x0000000100013430
- (void)workspace:(id)arg1 didBeginStateChangeSession:(id)arg2;	// IMP=0x0000000100013364
@property(readonly, nonatomic) NSString *activeBaseApplicationBundleID;
- (void)invalidate;	// IMP=0x0000000100013158
- (id)initWithStateResolver:(id)arg1 environment:(id)arg2 rootViewController:(id)arg3 siriViewController:(id)arg4;	// IMP=0x0000000100013048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

