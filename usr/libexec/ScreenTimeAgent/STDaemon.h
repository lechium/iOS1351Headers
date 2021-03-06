//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCListener, STAWDLoggingManager, STAgentListenerDelegate, STAskForTimeListenerDelegate, STDaemonPersistenceController, STScreenTimeOrganizationController, STToolServerDelegate, STUserNotificationManager, STXPCStoreServer;

@interface STDaemon : NSObject
{
    STDaemonPersistenceController *_persistenceController;	// 8 = 0x8
    STXPCStoreServer *_storeServer;	// 16 = 0x10
    STUserNotificationManager *_notificationManager;	// 24 = 0x18
    STScreenTimeOrganizationController *_screenTimeOrganizationController;	// 32 = 0x20
    STAskForTimeListenerDelegate *_askForTimeListenerDelegate;	// 40 = 0x28
    NSXPCListener *_askForTimeListener;	// 48 = 0x30
    NSXPCListener *_privateAgentListener;	// 56 = 0x38
    NSXPCListener *_contactsAgentListener;	// 64 = 0x40
    STAgentListenerDelegate *_agentListenerDelegate;	// 72 = 0x48
    STToolServerDelegate *_commandLineToolDelegate;	// 80 = 0x50
    NSXPCListener *_commandLineToolListener;	// 88 = 0x58
    STAWDLoggingManager *_awdLoggingManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100012908
@property(readonly, nonatomic) STAWDLoggingManager *awdLoggingManager; // @synthesize awdLoggingManager=_awdLoggingManager;
@property(readonly, nonatomic) NSXPCListener *commandLineToolListener; // @synthesize commandLineToolListener=_commandLineToolListener;
@property(readonly, nonatomic) STToolServerDelegate *commandLineToolDelegate; // @synthesize commandLineToolDelegate=_commandLineToolDelegate;
@property(readonly, nonatomic) STAgentListenerDelegate *agentListenerDelegate; // @synthesize agentListenerDelegate=_agentListenerDelegate;
@property(readonly, nonatomic) NSXPCListener *contactsAgentListener; // @synthesize contactsAgentListener=_contactsAgentListener;
@property(readonly, nonatomic) NSXPCListener *privateAgentListener; // @synthesize privateAgentListener=_privateAgentListener;
@property(readonly, nonatomic) NSXPCListener *askForTimeListener; // @synthesize askForTimeListener=_askForTimeListener;
@property(readonly, nonatomic) STAskForTimeListenerDelegate *askForTimeListenerDelegate; // @synthesize askForTimeListenerDelegate=_askForTimeListenerDelegate;
@property(readonly, nonatomic) STScreenTimeOrganizationController *screenTimeOrganizationController; // @synthesize screenTimeOrganizationController=_screenTimeOrganizationController;
@property(readonly, nonatomic) STUserNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) STXPCStoreServer *storeServer; // @synthesize storeServer=_storeServer;
@property(readonly, nonatomic) STDaemonPersistenceController *persistenceController; // @synthesize persistenceController=_persistenceController;
- (void)_startGeneralServers;	// IMP=0x00000001000126e0
- (void)_startOrganizationControllers;	// IMP=0x0000000100012600
- (void)_listenForLocaleChanges;	// IMP=0x0000000100012548
- (void)start;	// IMP=0x0000000100012438
- (id)init;	// IMP=0x0000000100012184

@end

