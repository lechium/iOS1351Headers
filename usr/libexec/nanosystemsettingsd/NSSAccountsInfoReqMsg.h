//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface NSSAccountsInfoReqMsg : PBCodable <NSCopying>
{
    NSString *_accountType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010001e628
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010001e5e4
- (unsigned long long)hash;	// IMP=0x000000010001e5cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010001e52c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010001e4b0
- (void)copyTo:(id)arg1;	// IMP=0x000000010001e488
- (void)writeTo:(id)arg1;	// IMP=0x000000010001e468
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010001e460
- (id)dictionaryRepresentation;	// IMP=0x000000010001e264
- (id)description;	// IMP=0x000000010001e1b0
@property(readonly, nonatomic) _Bool hasAccountType;

@end

