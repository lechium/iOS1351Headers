//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface TRANSITPbMacModePair : PBCodable <NSCopying>
{
    double _mode;	// 8 = 0x8
    NSString *_mac;	// 16 = 0x10
    CDStruct_ad4540a6 _has;	// 24 = 0x18
}

@property(nonatomic) double mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001009ff194
- (unsigned long long)hash;	// IMP=0x00000001009ff0ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001009ff03c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001009fef98
- (void)copyTo:(id)arg1;	// IMP=0x00000001009fef2c
- (void)writeTo:(id)arg1;	// IMP=0x00000001009feec0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001009feeb8
- (id)dictionaryRepresentation;	// IMP=0x00000001009febf0
- (id)description;	// IMP=0x00000001009feb70
@property(nonatomic) _Bool hasMode;
@property(readonly, nonatomic) _Bool hasMac;
- (void)dealloc;	// IMP=0x00000001009feab4

@end
