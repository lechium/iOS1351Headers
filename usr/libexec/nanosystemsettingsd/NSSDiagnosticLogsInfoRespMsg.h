//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NSSDiagnosticLogsInfoRespMsg : PBCodable <NSCopying>
{
    NSMutableArray *_paths;	// 8 = 0x8
}

+ (Class)pathsType;	// IMP=0x00000001000230ec
- (void).cxx_destruct;	// IMP=0x0000000100023944
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000237f8
- (unsigned long long)hash;	// IMP=0x00000001000237e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100023740
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000235c8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000234f4
- (void)writeTo:(id)arg1;	// IMP=0x00000001000233c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000233c0
- (id)dictionaryRepresentation;	// IMP=0x00000001000231ac
- (id)description;	// IMP=0x00000001000230f8
- (id)pathsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000230d4
- (unsigned long long)pathsCount;	// IMP=0x00000001000230bc
- (void)addPaths:(id)arg1;	// IMP=0x0000000100023048
- (void)clearPaths;	// IMP=0x0000000100023030

@end
