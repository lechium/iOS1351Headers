//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, StoreSinfArray;

@interface StoreDRM : NSObject
{
    NSArray *_storeSinfs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010019e2f0
- (id)_sinfsArrayWithDataKey:(id)arg1;	// IMP=0x000000010019e200
- (id)firstDataForSinfDataKey:(id)arg1;	// IMP=0x000000010019e050
@property(readonly) StoreSinfArray *sinfsArray;
- (id)initWithSinfsArray:(id)arg1;	// IMP=0x000000010019df2c

@end
