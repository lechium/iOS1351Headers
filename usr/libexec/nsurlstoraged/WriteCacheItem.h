//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WriteCacheItem : NSObject
{
    NSString *_key;	// 8 = 0x8
    NSDictionary *_dictData;	// 16 = 0x10
}

+ (id)writeCacheItemWithKey:(id)arg1 dictData:(id)arg2;	// IMP=0x000000010000e0a4
- (void).cxx_destruct;	// IMP=0x000000010000e074
@property(retain, nonatomic) NSDictionary *dictData; // @synthesize dictData=_dictData;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithKey:(id)arg1 dictData:(id)arg2;	// IMP=0x000000010000df88

@end

