//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLitePredicate.h"

#import "NSCopying-Protocol.h"

@interface SQLiteBooleanPredicate : SQLitePredicate <NSCopying>
{
    _Bool _booleanValue;	// 8 = 0x8
}

+ (id)falsePredicate;	// IMP=0x00000001000513f4
+ (id)truePredicate;	// IMP=0x00000001000513b8
@property(readonly, nonatomic) _Bool booleanValue; // @synthesize booleanValue=_booleanValue;
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x00000001000514cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100051430
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005142c

@end

