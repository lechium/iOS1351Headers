//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UserDefaultsDomain : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSMutableDictionary *_keyArrays;	// 16 = 0x10
    NSMutableDictionary *_keyPrefixArrays;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100021df8
@property(retain, nonatomic) NSMutableDictionary *keyPrefixArrays; // @synthesize keyPrefixArrays=_keyPrefixArrays;
@property(retain, nonatomic) NSMutableDictionary *keyArrays; // @synthesize keyArrays=_keyArrays;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)log;	// IMP=0x0000000100021bb0
- (id)description;	// IMP=0x0000000100021b2c

@end

