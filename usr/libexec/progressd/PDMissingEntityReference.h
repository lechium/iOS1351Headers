//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDDatabaseEntity-Protocol.h"

@class NSString;
@protocol PDDatabaseValue;

@interface PDMissingEntityReference : NSObject <PDDatabaseEntity>
{
    NSString *_entityName;	// 8 = 0x8
    NSString *_referencingEntityName;	// 16 = 0x10
    NSString *_entityID;	// 24 = 0x18
    NSString *_referencingEntityID;	// 32 = 0x20
}

+ (id)identityColumnName;	// IMP=0x00000001001408ec
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0000000100140808
+ (long long)migrationOrder;	// IMP=0x000000010014053c
+ (id)entityName;	// IMP=0x0000000100140530
- (void).cxx_destruct;	// IMP=0x0000000100140918
@property(readonly, copy, nonatomic) NSString *referencingEntityID; // @synthesize referencingEntityID=_referencingEntityID;
@property(readonly, copy, nonatomic) NSString *entityID; // @synthesize entityID=_entityID;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x000000010014076c
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x000000010014064c
@property(readonly, copy, nonatomic) Class referencingEntityClass;
@property(readonly, copy, nonatomic) Class entityClass;
- (id)initWithEntityIdentity:(id)arg1 entityClass:(Class)arg2 referencedByEntity:(id)arg3 withClass:(Class)arg4;	// IMP=0x0000000100140544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

