//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDSService, NPDBulletinManager, NPDCardSetupReminderNotificationScheduler, NPDCompanionPassSyncService, NPDCompanionPaymentPassDatabase, NPKRemoteAdminConnectionServiceAgent, NPSDomainAccessor, NPSManager, NSMutableArray, PKPaymentWebService;

@protocol NPDCompanionAgentClientDataSource <NSObject>
- (NPDBulletinManager *)bulletinManager;
- (PKPaymentWebService *)paymentWebService;
- (NPSManager *)npsManager;
- (NPSDomainAccessor *)npsDomainAccessor;
- (IDSService *)generalService;
- (NPDCompanionPassSyncService *)passSyncService;
- (NSMutableArray *)watchOfferProvisioningCompletionHandlers;
- (NPDCompanionPaymentPassDatabase *)companionPaymentPassDatabase;
- (NPKRemoteAdminConnectionServiceAgent *)remoteAdminConnectionServiceAgent;
- (NPDCardSetupReminderNotificationScheduler *)bulletinScheduler;
@end
