//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSPredicate;

@interface RMPredicateDescription : NSObject <NSSecureCoding>
{
    NSArray *_keyPaths;	// 8 = 0x8
    NSPredicate *_predicate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010004eecc
- (void).cxx_destruct;	// IMP=0x000000010004f448
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, copy) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
- (long long)evaluateWithProperties:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004f1ec
- (id)debugDescription;	// IMP=0x000000010004f11c
- (id)description;	// IMP=0x000000010004f0c8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010004f010
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010004eed4
- (id)initWithFormat:(id)arg1 error:(id *)arg2;	// IMP=0x000000010004eae8

@end
