//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSUUID;

@interface NTKDCollectionStoreKey : NSObject <NSCopying>
{
    NSString *_collectionIdentifier;	// 8 = 0x8
    NSUUID *_deviceUUID;	// 16 = 0x10
}

+ (id)keyWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2;	// IMP=0x0000000100022f80
- (void).cxx_destruct;	// IMP=0x00000001000231e4
@property(readonly, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(readonly, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
- (id)description;	// IMP=0x00000001000231c8
- (id)plistRepresentation;	// IMP=0x000000010002312c
- (unsigned long long)hash;	// IMP=0x00000001000230e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100023004
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100023000

@end
