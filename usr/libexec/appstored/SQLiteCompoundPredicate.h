//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePredicate.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SQLiteCompoundPredicate : SQLitePredicate <NSCopying>
{
    NSString *_combinationOperation;	// 8 = 0x8
    NSArray *_predicates;	// 16 = 0x10
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;	// IMP=0x000000010026cbe0
+ (id)predicateMatchingAnyPredicates:(id)arg1;	// IMP=0x000000010026cb3c
+ (id)predicateMatchingAllPredicates:(id)arg1;	// IMP=0x000000010026ca98
- (void).cxx_destruct;	// IMP=0x000000010026d458
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x000000010026d2b8
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x000000010026d0a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010026cf84
- (unsigned long long)hash;	// IMP=0x000000010026cee8
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x000000010026cda4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010026cda0

@end
