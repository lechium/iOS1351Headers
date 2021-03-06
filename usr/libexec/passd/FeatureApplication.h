//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteEntity.h"

@interface FeatureApplication : SQLiteEntity
{
}

+ (id)_propertySettersForFeatureApplication;	// IMP=0x00000001001e0cac
+ (id)_predicateForFeatureApplicationIdentifier:(id)arg1;	// IMP=0x00000001001e0c8c
+ (void)deleteFeatureApplicationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001e0b58
+ (void)deleteAllFeatureApplicationsInDatabase:(id)arg1;	// IMP=0x00000001001e0ab8
+ (void)deleteFeatureApplicationsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001e09ec
+ (id)databaseTable;	// IMP=0x00000001001e09e0
+ (id)insertOrUpdateFeatureApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001dff64
+ (id)featureApplicationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001dfec0
+ (id)featureApplicationsInDatabase:(id)arg1;	// IMP=0x00000001001dfc8c
- (_Bool)deleteFromDatabase;	// IMP=0x00000001001e0bd0
- (unsigned long long)state;	// IMP=0x00000001001e098c
- (id)featureApplication;	// IMP=0x00000001001e0790
- (void)updateWithFeatureApplication:(id)arg1;	// IMP=0x00000001001e03dc
- (id)initWithFeatureApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00000001001e0044

@end

