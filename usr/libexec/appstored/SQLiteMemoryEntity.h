//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface SQLiteMemoryEntity : NSObject <NSCopying>
{
    long long _databaseID;	// 8 = 0x8
    NSMutableDictionary *_propertyValues;	// 16 = 0x10
    NSMutableDictionary *_externalPropertyValues;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x0000000100109cfc
+ (Class)databaseEntityClass;	// IMP=0x0000000100109cf0
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;	// IMP=0x000000010025b2e0
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010025b278
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;	// IMP=0x000000010025b108
- (void).cxx_destruct;	// IMP=0x000000010010a32c
@property(readonly, copy, nonatomic) NSDictionary *externalPropertyValues; // @synthesize externalPropertyValues=_externalPropertyValues;
@property(readonly, copy, nonatomic) NSDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010010a284
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010010a120
- (unsigned long long)hash;	// IMP=0x000000010010a110
- (id)description;	// IMP=0x000000010010a07c
- (id)valueForExternalProperty:(id)arg1;	// IMP=0x000000010010a06c
- (id)valueForProperty:(id)arg1;	// IMP=0x000000010010a05c
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x0000000100109fd4
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;	// IMP=0x0000000100109f4c
- (void)setValuesWithDictionary:(id)arg1;	// IMP=0x0000000100109f3c
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;	// IMP=0x0000000100109eb4
- (void)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x0000000100109e2c
- (void)setExternalValuesWithDictionary:(id)arg1;	// IMP=0x0000000100109e1c
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x0000000100109d04
- (id)initWithPropertyValues:(id)arg1;	// IMP=0x0000000100109c90
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;	// IMP=0x0000000100109be4
- (id)init;	// IMP=0x0000000100109b68
- (id)urlValueForProperty:(id)arg1;	// IMP=0x000000010010a520
- (id)uuidValueForProperty:(id)arg1;	// IMP=0x000000010010a4bc
- (id)stringValueForProperty:(id)arg1;	// IMP=0x000000010010a458
- (id)numberValueForProperty:(id)arg1;	// IMP=0x000000010010a3f4
- (long long)integerValueForProperty:(id)arg1;	// IMP=0x000000010010a3a8
- (_Bool)boolValueForProperty:(id)arg1;	// IMP=0x000000010010a35c

@end
