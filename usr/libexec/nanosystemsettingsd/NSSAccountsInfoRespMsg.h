//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NSSAccountsInfoRespMsg : PBCodable <NSCopying>
{
    NSMutableArray *_accounts;	// 8 = 0x8
}

+ (Class)accountType;	// IMP=0x000000010002cc9c
- (void).cxx_destruct;	// IMP=0x000000010002d6b8
@property(retain, nonatomic) NSMutableArray *accounts; // @synthesize accounts=_accounts;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010002d56c
- (unsigned long long)hash;	// IMP=0x000000010002d554
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010002d4b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002d33c
- (void)copyTo:(id)arg1;	// IMP=0x000000010002d268
- (void)writeTo:(id)arg1;	// IMP=0x000000010002d13c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002d134
- (id)dictionaryRepresentation;	// IMP=0x000000010002cd5c
- (id)description;	// IMP=0x000000010002cca8
- (id)accountAtIndex:(unsigned long long)arg1;	// IMP=0x000000010002cc84
- (unsigned long long)accountsCount;	// IMP=0x000000010002cc6c
- (void)addAccount:(id)arg1;	// IMP=0x000000010002cbf8
- (void)clearAccounts;	// IMP=0x000000010002cbe0

@end

