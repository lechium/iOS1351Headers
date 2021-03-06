//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface AppletSubcredentialEntitlement : SQLiteEntity
{
}

+ (id)databaseTable;	// IMP=0x000000010016d2f8
+ (id)_propertySetters;	// IMP=0x000000010016d114
+ (id)_predicateForType:(long long)arg1;	// IMP=0x000000010016d0a0
+ (id)_predicateForValue:(long long)arg1;	// IMP=0x000000010016d02c
+ (id)_predicateForCredentialPID:(long long)arg1;	// IMP=0x000000010016cfb8
+ (id)dictionaryFromEntitlement:(id)arg1;	// IMP=0x000000010016ccfc
+ (id)setSupportedEntitlements:(id)arg1 forCredential:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010016c718
+ (id)setEntitlement:(id)arg1 forCredential:(id)arg2 inDatabase:(id)arg3;	// IMP=0x000000010016c560
+ (id)supportedEntitlementsInDatabase:(id)arg1 forCredential:(id)arg2;	// IMP=0x000000010016c230
+ (id)supportedEntitlementInDatabase:(id)arg1 forCredentialPID:(long long)arg2 withValue:(long long)arg3;	// IMP=0x000000010016c098
+ (id)entitlementInDatabase:(id)arg1 forCredential:(id)arg2;	// IMP=0x000000010016bf2c
- (id)entitlement;	// IMP=0x000000010016ce80

@end

