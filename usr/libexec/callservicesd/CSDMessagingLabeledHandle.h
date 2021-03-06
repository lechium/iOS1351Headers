//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class CSDMessagingHandle, NSString, TULabeledHandle;

@interface CSDMessagingLabeledHandle : PBCodable <NSCopying>
{
    CSDMessagingHandle *_handle;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
}

+ (id)handleWithTULabeledHandle:(id)arg1;	// IMP=0x000000010004323c
- (void).cxx_destruct;	// IMP=0x00000001000e2ddc
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000e2d10
- (unsigned long long)hash;	// IMP=0x00000001000e2cb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000e2be0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e2b30
- (void)copyTo:(id)arg1;	// IMP=0x00000001000e2ac4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000e2a60
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000e2a58
- (id)dictionaryRepresentation;	// IMP=0x00000001000e278c
- (id)description;	// IMP=0x00000001000e26d8
@property(readonly, nonatomic) _Bool hasLabel;
@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) TULabeledHandle *tuLabeledHandle;

@end

