//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FilterTier;

@interface SRSubsystemCategoryNameFilter : NSObject
{
    FilterTier *_filterTreeRoot;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005dc8
@property(readonly) FilterTier *filterTreeRoot; // @synthesize filterTreeRoot=_filterTreeRoot;
- (void)addEntryWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 cap:(unsigned long long)arg4 downsampleRatio:(unsigned long long)arg5;	// IMP=0x0000000100005cd0
- (id)downsampleEntryForObject:(id)arg1;	// IMP=0x0000000100005ba4
- (_Bool)shouldReportObject:(id)arg1;	// IMP=0x0000000100005b48
- (id)initWithDictionaryArray:(id)arg1;	// IMP=0x00000001000057cc

@end

