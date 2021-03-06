//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _CPLFakeDerivativeMapper : NSObject
{
    unsigned long long _resourceType;	// 8 = 0x8
    NSString *_outputType;	// 16 = 0x10
    double _maxPixelCount;	// 24 = 0x18
}

+ (unsigned long long)destinationResourceTypeFromShortDecription:(id)arg1;	// IMP=0x0000000100087290
+ (void)initialize;	// IMP=0x0000000100087228
- (void).cxx_destruct;	// IMP=0x0000000100087c64
@property(readonly, nonatomic) double maxPixelCount; // @synthesize maxPixelCount=_maxPixelCount;
@property(readonly, nonatomic) NSString *outputType; // @synthesize outputType=_outputType;
@property(readonly, nonatomic) unsigned long long resourceType; // @synthesize resourceType=_resourceType;
- (id)description;	// IMP=0x0000000100087bbc
- (void)updateResources:(id)arg1;	// IMP=0x00000001000879c8
- (struct CGSize)_dimensionsFromBaseResource:(id)arg1;	// IMP=0x0000000100087904
- (id)_bestSourceResourceFromResources:(id)arg1;	// IMP=0x0000000100087634
- (id)initWithRule:(id)arg1;	// IMP=0x00000001000872c0

@end

