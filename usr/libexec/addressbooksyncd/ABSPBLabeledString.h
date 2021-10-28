//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface ABSPBLabeledString : PBCodable <NSCopying>
{
    NSString *_label;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100007690
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000075dc
- (unsigned long long)hash;	// IMP=0x0000000100007580
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000074ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000073fc
- (void)copyTo:(id)arg1;	// IMP=0x0000000100007390
- (void)writeTo:(id)arg1;	// IMP=0x000000010000732c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100007324
- (id)dictionaryRepresentation;	// IMP=0x00000001000070cc
- (id)description;	// IMP=0x0000000100007018
@property(readonly, nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasLabel;

@end
