//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface CDMUserVocabList : NSObject
{
    NSArray *_entries;	// 8 = 0x8
    NSNumber *_hashValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100035c60
@property(readonly, nonatomic) NSNumber *hashValue; // @synthesize hashValue=_hashValue;
@property(readonly, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (id)initWithEntries:(id)arg1 hashValue:(id)arg2;	// IMP=0x0000000100035bac

@end
