//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDMAssetStatus : NSObject
{
    long long _status;	// 8 = 0x8
    NSString *_modelPath;	// 16 = 0x10
}

+ (id)assetStatusCodeToString:(long long)arg1;	// IMP=0x0000000100017954
- (void).cxx_destruct;	// IMP=0x00000001000179dc
@property(copy, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property long long status; // @synthesize status=_status;

@end

