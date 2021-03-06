//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface ElementaryFile : PBCodable <NSCopying>
{
    NSData *_content;	// 8 = 0x8
    unsigned int _efId;	// 16 = 0x10
    struct {
        unsigned int efId:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000010004f9e0
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(nonatomic) unsigned int efId; // @synthesize efId=_efId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010004f934
- (unsigned long long)hash;	// IMP=0x000000010004f8d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010004f7f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004f750
- (void)copyTo:(id)arg1;	// IMP=0x000000010004f6d8
- (void)writeTo:(id)arg1;	// IMP=0x000000010004f668
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010004f660
- (id)dictionaryRepresentation;	// IMP=0x000000010004f1f0
- (id)description;	// IMP=0x000000010004f13c
@property(readonly, nonatomic) _Bool hasContent;
@property(nonatomic) _Bool hasEfId;

@end

