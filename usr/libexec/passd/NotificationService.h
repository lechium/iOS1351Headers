//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface NotificationService : SQLiteEntity
{
}

+ (id)_propertySettersForPaymentTransaction;	// IMP=0x000000010007c818
+ (id)_predicateForNotificationServicePID:(id)arg1;	// IMP=0x000000010007c7f8
+ (id)_predicateForNoRegistrationURL;	// IMP=0x000000010007c7dc
+ (id)_predicateForRegistrationURL:(id)arg1;	// IMP=0x000000010007c774
+ (id)_predicateForServiceURL:(id)arg1;	// IMP=0x000000010007c70c
+ (id)_predicateForServiceType:(unsigned long long)arg1;	// IMP=0x000000010007c698
+ (id)_predicateForPushTopic:(id)arg1;	// IMP=0x000000010007c678
+ (id)_notificationServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x000000010007c468
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x000000010007bda0
+ (id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x000000010007bd14
+ (id)notificationServicesInDatabase:(id)arg1;	// IMP=0x000000010007bd04
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned long long)arg3 serviceURL:(id)arg4 registrationURL:(id)arg5;	// IMP=0x000000010007bb04
+ (id)anyInDatabase:(id)arg1 withServiceURL:(id)arg2 registrationURL:(id)arg3;	// IMP=0x000000010007b998
+ (id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2;	// IMP=0x000000010007b90c
+ (id)insertNotificationServiceWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x000000010007b82c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x000000010007b7f4
+ (id)databaseTable;	// IMP=0x000000010007b7e8
- (void)updateWithNotificationService:(id)arg1;	// IMP=0x000000010007c278
- (void)updateWithLastUpdatedTag:(id)arg1;	// IMP=0x000000010007c1a4
- (void)updateWithLastUpdatedDate:(id)arg1;	// IMP=0x000000010007c114
- (void)updateWithAppLaunchToken:(id)arg1;	// IMP=0x000000010007c100
- (void)updateWithAuthenticationToken:(id)arg1;	// IMP=0x000000010007c0ec
- (void)updateWithPushToken:(id)arg1;	// IMP=0x000000010007c0d8
- (id)notificationService;	// IMP=0x000000010007bfa0
- (id)initWithPushTopic:(id)arg1 serviceType:(unsigned long long)arg2 serviceURL:(id)arg3 registrationURL:(id)arg4 deviceIdentifier:(id)arg5 inDatabase:(id)arg6;	// IMP=0x000000010007b62c

@end

