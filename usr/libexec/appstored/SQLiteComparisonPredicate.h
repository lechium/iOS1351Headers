//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePropertyPredicate.h"

#import "NSCopying-Protocol.h"

@interface SQLiteComparisonPredicate : SQLitePropertyPredicate <NSCopying>
{
    long long _comparisonType;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x000000010026b948
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;	// IMP=0x000000010026b8e0
+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;	// IMP=0x000000010026b850
- (void).cxx_destruct;	// IMP=0x000000010026bec4
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) long long comparisonType; // @synthesize comparisonType=_comparisonType;
- (id)_comparisonTypeString;	// IMP=0x000000010026be0c
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x000000010026bd3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010026bbe8
- (unsigned long long)hash;	// IMP=0x000000010026bb5c
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x000000010026ba68
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010026ba64

@end

