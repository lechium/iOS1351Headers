//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSClass.h>

#import "PDDatabaseEntity-Protocol.h"
#import "PDDatabaseEntityWithImmutability-Protocol.h"
#import "PDExpirableDatabaseEntity-Protocol.h"
#import "PDSearchableDatabaseEntity-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSClass (PDDatabaseEntity) <PDDatabaseEntity, PDSearchableDatabaseEntity, PDDatabaseEntityWithImmutability, PDExpirableDatabaseEntity>
+ (long long)migrationOrder;	// IMP=0x0000000100072108
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100071e0c
+ (id)searchColumnName;	// IMP=0x00000001000717a4
+ (id)entityName;	// IMP=0x0000000100071798
- (void)setExpiration:(double)arg1;	// IMP=0x0000000100072110
- (void)bindTo:(id)arg1;	// IMP=0x0000000100071b30
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x0000000100071878
@property(readonly, nonatomic) NSArray *immutableColumnNames;
@property(readonly, nonatomic) NSArray *tokenizableColumnNames;
@property(readonly, nonatomic) NSArray *searchableColumnNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isImmutablilityEnforced) _Bool enforceImmutablility;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end
