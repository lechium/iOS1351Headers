//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SPAssetCacheAssets : NSObject
{
    NSMutableArray *_assets;	// 8 = 0x8
}

+ (id)fromProto:(id)arg1;	// IMP=0x0000000100007900
+ (id)toProto:(id)arg1;	// IMP=0x0000000100007774
- (void).cxx_destruct;	// IMP=0x0000000100007ac4
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
- (void)addAsset:(id)arg1;	// IMP=0x0000000100007764
- (id)init;	// IMP=0x00000001000076f0

@end
