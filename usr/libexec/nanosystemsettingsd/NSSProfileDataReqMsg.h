//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NSSProfileDataReqMsg : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010002186c
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100021828
- (unsigned long long)hash;	// IMP=0x0000000100021810
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100021770
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000216f4
- (void)copyTo:(id)arg1;	// IMP=0x00000001000216cc
- (void)writeTo:(id)arg1;	// IMP=0x00000001000216ac
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000216a4
- (id)dictionaryRepresentation;	// IMP=0x00000001000214a8
- (id)description;	// IMP=0x00000001000213f4
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

