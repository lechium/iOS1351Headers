//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AppletSubcredentialInvitation : SQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x00000001001b90e4
+ (id)_propertySetters;	// IMP=0x00000001001b8c84
+ (id)_dictionaryFromSharedCredentialInvitation:(id)arg1;	// IMP=0x00000001001b8798
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00000001001b8778
+ (_Bool)deleteInvitationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001b86b8
+ (id)addInvitation:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001b8470
+ (id)invitationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001b83cc
+ (id)invitationsInDatabase:(id)arg1;	// IMP=0x00000001001b8198
- (id)invitation;	// IMP=0x00000001001b8b4c

@end
