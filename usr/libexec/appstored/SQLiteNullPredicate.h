//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePropertyPredicate.h"

#import "NSCopying-Protocol.h"

@interface SQLiteNullPredicate : SQLitePropertyPredicate <NSCopying>
{
    _Bool _matchesNull;	// 16 = 0x10
}

+ (id)isNullPredicateWithProperty:(id)arg1;	// IMP=0x000000010026c87c
+ (id)isNotNullPredicateWithProperty:(id)arg1;	// IMP=0x000000010026c7e8
@property(readonly, nonatomic) _Bool matchesNull; // @synthesize matchesNull=_matchesNull;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x000000010026c9b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010026c918
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010026c914

@end

