//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ICDJaliscoMediaFilter : NSObject
{
    NSArray *_excludedKinds;	// 8 = 0x8
    NSArray *_supportedMediaKinds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000378d0
@property(readonly, copy, nonatomic) NSString *daapQueryFilterString;
@property(readonly, copy, nonatomic) NSArray *supportedMediaKinds;
- (id)initWithKindsToExclude:(id)arg1;	// IMP=0x00000001000371d4

@end

