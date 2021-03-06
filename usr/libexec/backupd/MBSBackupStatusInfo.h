//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MBSBackupStatusInfo : PBCodable <NSCopying>
{
    unsigned int _errorCode;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    CDStruct_70a7dc3e _has;	// 24 = 0x18
}

@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001001255a8
- (unsigned long long)hash;	// IMP=0x0000000100125544
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100125490
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001253ec
- (void)copyTo:(id)arg1;	// IMP=0x0000000100125398
- (void)writeTo:(id)arg1;	// IMP=0x000000010012532c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100125324
- (id)dictionaryRepresentation;	// IMP=0x0000000100125014
- (id)description;	// IMP=0x0000000100124f94
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasErrorCode;
- (void)dealloc;	// IMP=0x0000000100124ed8

@end

