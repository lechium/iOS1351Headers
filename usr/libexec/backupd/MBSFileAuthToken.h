//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface MBSFileAuthToken : PBCodable <NSCopying>
{
    NSString *_authToken;	// 8 = 0x8
    NSData *_fileID;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSData *fileID; // @synthesize fileID=_fileID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100168f34
- (unsigned long long)hash;	// IMP=0x0000000100168ed8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100168e2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100168d84
- (void)copyTo:(id)arg1;	// IMP=0x0000000100168d1c
- (void)writeTo:(id)arg1;	// IMP=0x0000000100168cbc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100168cb4
- (id)dictionaryRepresentation;	// IMP=0x0000000100168a44
- (id)description;	// IMP=0x00000001001689c4
@property(readonly, nonatomic) _Bool hasAuthToken;
@property(readonly, nonatomic) _Bool hasFileID;
- (void)dealloc;	// IMP=0x0000000100168930

@end
