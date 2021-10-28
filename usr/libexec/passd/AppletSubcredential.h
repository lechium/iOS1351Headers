//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AppletSubcredential : SQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x00000001001543b0
+ (id)_propertySetters;	// IMP=0x0000000100153e50
+ (id)_predicateForAppletSubcredentialWithPaymentApplicationPID:(long long)arg1;	// IMP=0x0000000100153ddc
+ (id)_predicateForAppletSubcredentialIdentifier:(id)arg1;	// IMP=0x0000000100153dbc
+ (id)_predicateForAppletSubcredentialPID:(long long)arg1;	// IMP=0x0000000100153d48
+ (id)dictionaryFromAppletSubcredential:(id)arg1 paymentApplication:(id)arg2;	// IMP=0x0000000100153354
+ (id)setAppletSubcredentials:(id)arg1 forPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100152b24
+ (id)insertOrUpdateAppletSubcredential:(id)arg1 withPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100152a18
+ (void)deleteEntitiesInDatabase:(id)arg1 forPaymentApplication:(id)arg2;	// IMP=0x000000010015296c
+ (id)appletSubcredentialWithPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001528dc
+ (id)appletSubcredentialWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000100152838
+ (id)appletSubcredentialsInDatabase:(id)arg1 forPaymentApplicationPID:(long long)arg2;	// IMP=0x00000001001525f0
+ (id)credentialIdentifiersForAidInDatabase:(id)arg1;	// IMP=0x00000001001523ec
- (_Bool)deleteFromDatabase;	// IMP=0x0000000100153cc0
- (long long)paymentApplicationPID;	// IMP=0x0000000100153c6c
- (id)appletSubcredential;	// IMP=0x0000000100153960
- (void)updateWithAppletSubcredential:(id)arg1 paymentApplication:(id)arg2;	// IMP=0x00000001001537f0
- (id)initWithAppletSubcredential:(id)arg1 forPaymentApplication:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100152fa8

@end
