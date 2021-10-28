//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NARPBApplicationWrapper, NARPBWorkspaceMetadata;

@interface NARPBProtoBuffMessage : PBCodable <NSCopying>
{
    NARPBApplicationWrapper *_applicationWrapper;	// 8 = 0x8
    NARPBWorkspaceMetadata *_workspaceMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100005c68
@property(retain, nonatomic) NARPBWorkspaceMetadata *workspaceMetadata; // @synthesize workspaceMetadata=_workspaceMetadata;
@property(retain, nonatomic) NARPBApplicationWrapper *applicationWrapper; // @synthesize applicationWrapper=_applicationWrapper;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100005b80
- (unsigned long long)hash;	// IMP=0x0000000100005b24
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100005a50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000059a0
- (void)copyTo:(id)arg1;	// IMP=0x0000000100005934
- (void)writeTo:(id)arg1;	// IMP=0x00000001000058d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000058c8
- (id)dictionaryRepresentation;	// IMP=0x00000001000055b0
- (id)description;	// IMP=0x00000001000054fc
@property(readonly, nonatomic) _Bool hasWorkspaceMetadata;
@property(readonly, nonatomic) _Bool hasApplicationWrapper;

@end
