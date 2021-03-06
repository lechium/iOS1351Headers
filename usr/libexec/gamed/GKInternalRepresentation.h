//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010007eafc
+ (id)codedPropertyKeys;	// IMP=0x000000010007ead8
+ (id)internalRepresentation;	// IMP=0x000000010007e5f8
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010007e5f0
+ (id)internalRepresentationWithProperties:(id)arg1;	// IMP=0x00000001001410e4
+ (id)propertiesToFetch;	// IMP=0x0000000100141008
+ (id)internalRepresentationForCacheObject:(id)arg1;	// IMP=0x0000000100140bd8
- (void)mergePropertiesFrom:(id)arg1;	// IMP=0x000000010007f1e4
- (id)serverRepresentation;	// IMP=0x000000010007f1d4
- (id)description;	// IMP=0x000000010007f1c4
- (id)_gkDescriptionWithChildren:(int)arg1;	// IMP=0x000000010007eb1c
- (id)descriptionSubstitutionMap;	// IMP=0x000000010007eb0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010007e948
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010007e800
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007e60c
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100141174
- (id)initWithProperties:(id)arg1;	// IMP=0x0000000100141114
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100140d64
- (id)initWithCacheObject:(id)arg1;	// IMP=0x0000000100140c08

@end

