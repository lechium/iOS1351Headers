//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDDatabaseEntity-Protocol.h"

@class NSData, NSString;
@protocol PDDatabaseValue;

@interface PDSyncMetadataCache : NSObject <PDDatabaseEntity>
{
    Class _entity;	// 8 = 0x8
    NSObject<PDDatabaseValue> *_entityIdentity;	// 16 = 0x10
    NSData *_metadata;	// 24 = 0x18
}

+ (id)identityColumnName;	// IMP=0x00000001000c4560
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00000001000c44b0
+ (id)entityName;	// IMP=0x00000001000c41bc
- (void).cxx_destruct;	// IMP=0x00000001000c45b4
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSObject<PDDatabaseValue> *entityIdentity; // @synthesize entityIdentity=_entityIdentity;
@property(retain, nonatomic) Class entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x00000001000c43b8
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00000001000c4270
- (id)initWithObject:(id)arg1;	// IMP=0x00000001000c41c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
