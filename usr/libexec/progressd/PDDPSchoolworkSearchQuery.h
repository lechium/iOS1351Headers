//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, PDDPSchoolworkSearchCriteria;

@interface PDDPSchoolworkSearchQuery : PBCodable <NSCopying>
{
    NSMutableArray *_contents;	// 8 = 0x8
    PDDPSchoolworkSearchCriteria *_criteria;	// 16 = 0x10
    int _type;	// 24 = 0x18
    CDStruct_f953fb60 _has;	// 28 = 0x1c
}

+ (Class)contentsType;	// IMP=0x000000010009ea00
- (void).cxx_destruct;	// IMP=0x000000010009f8b0
@property(retain, nonatomic) PDDPSchoolworkSearchCriteria *criteria; // @synthesize criteria=_criteria;
@property(retain, nonatomic) NSMutableArray *contents; // @synthesize contents=_contents;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010009f6c8
- (unsigned long long)hash;	// IMP=0x000000010009f63c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010009f530
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010009f358
- (void)copyTo:(id)arg1;	// IMP=0x000000010009f238
- (void)writeTo:(id)arg1;	// IMP=0x000000010009f0c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010009f0c0
- (id)dictionaryRepresentation;	// IMP=0x000000010009ead8
- (id)description;	// IMP=0x000000010009ea24
@property(readonly, nonatomic) _Bool hasCriteria;
- (id)contentsAtIndex:(unsigned long long)arg1;	// IMP=0x000000010009e9e8
- (unsigned long long)contentsCount;	// IMP=0x000000010009e9d0
- (void)addContents:(id)arg1;	// IMP=0x000000010009e95c
- (void)clearContents;	// IMP=0x000000010009e944
- (int)StringAsType:(id)arg1;	// IMP=0x000000010009e884
- (id)typeAsString:(int)arg1;	// IMP=0x000000010009e7f4
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end
