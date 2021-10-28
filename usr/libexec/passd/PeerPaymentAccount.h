//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface PeerPaymentAccount : SQLiteEntity
{
}

+ (id)_propertySettersForPeerPaymentAccount;	// IMP=0x00000001000d7dc4
+ (id)anyInDatabase:(id)arg1;	// IMP=0x00000001000d7c10
+ (id)insertPeerPaymentAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000d7b9c
+ (id)joinClauseForProperty:(id)arg1;	// IMP=0x00000001000d7a2c
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00000001000d79f4
+ (id)databaseTable;	// IMP=0x00000001000d79e8
- (long long)_passPersistentIDForPeerPaymentAccount:(id)arg1 database:(id)arg2;	// IMP=0x00000001000d7ca0
- (_Bool)deleteFromDatabase;	// IMP=0x00000001000d7b00
- (id)associatedPassUniqueID;	// IMP=0x00000001000d7964
- (id)associatedPassSerialNumber;	// IMP=0x00000001000d7918
- (id)associatedPassTypeIdentifier;	// IMP=0x00000001000d78cc
- (unsigned long long)state;	// IMP=0x00000001000d7878
- (id)currentBalance;	// IMP=0x00000001000d7758
- (id)peerPaymentAccount;	// IMP=0x00000001000d7540
- (void)updateWithPeerPaymentAccount:(id)arg1;	// IMP=0x00000001000d6e90
- (id)initWithPeerPaymentAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001000d6820

@end
