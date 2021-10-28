//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, OSVersion;

@interface VariantDescriptor : NSObject <NSCopying>
{
    NSArray *_components;	// 8 = 0x8
    _Bool _universal;	// 16 = 0x10
    long long _version;	// 24 = 0x18
}

+ (id)_findCompatibleDescriptor:(id)arg1;	// IMP=0x000000010016f928
+ (id)_filterAndSortDescriptors:(id)arg1 compatibleWithProductType:(id)arg2;	// IMP=0x000000010016f640
+ (_Bool)hasCompatibleDescriptorFromDictionary:(id)arg1 usingKeyProfile:(long long)arg2;	// IMP=0x000000010016f3f0
+ (_Bool)hasCompatibleDescriptorFromArray:(id)arg1;	// IMP=0x000000010016f388
+ (id)findCompatibleDescriptorFromDictionary:(id)arg1 usingKeyProfile:(long long)arg2;	// IMP=0x000000010016f2f8
+ (id)findCompatibleDescriptorFromArray:(id)arg1;	// IMP=0x000000010016f2a0
+ (id)descriptorForUniversal;	// IMP=0x000000010016ee28
+ (id)descriptorForString:(id)arg1;	// IMP=0x000000010016edd8
+ (id)descriptorsForDictionary:(id)arg1 usingKeyProfile:(long long)arg2;	// IMP=0x000000010016ea74
- (void).cxx_destruct;	// IMP=0x000000010016fbf4
@property(readonly, getter=isUniversal) _Bool universal; // @synthesize universal=_universal;
- (id)_valueForComponent:(CDStruct_4bcfbbae)arg1;	// IMP=0x000000010016fb80
- (_Bool)_isValid;	// IMP=0x000000010016fb2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010016f5c4
- (unsigned long long)hash;	// IMP=0x000000010016f590
- (id)description;	// IMP=0x000000010016f510
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010016f50c
- (_Bool)isEqualToDescriptor:(id)arg1;	// IMP=0x000000010016f488
@property(readonly, copy) NSString *productType;
@property(readonly, copy) OSVersion *osVersion;
@property(readonly, copy) NSString *canonicalIdentifier;
- (id)_initWithComponents:(id)arg1;	// IMP=0x000000010016efc4
- (id)initWithString:(id)arg1;	// IMP=0x000000010016ee44

@end
