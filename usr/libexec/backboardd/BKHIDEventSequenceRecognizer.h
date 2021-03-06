//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKHIDEventRecognizer-Protocol.h"

@class NSArray, NSString;

@interface BKHIDEventSequenceRecognizer : NSObject <BKHIDEventRecognizer>
{
    long long _descriptorIndex;	// 8 = 0x8
    _Bool _shouldConsumeEvents;	// 16 = 0x10
    NSArray *_descriptors;	// 24 = 0x18
}

+ (id)recognizerForEventDescriptors:(id)arg1;	// IMP=0x000000010002bcf8
+ (id)recognizerForEventDescriptor:(id)arg1;	// IMP=0x000000010002bc4c
- (void).cxx_destruct;	// IMP=0x000000010002be28
@property(readonly, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property(nonatomic) _Bool shouldConsumeEvents; // @synthesize shouldConsumeEvents=_shouldConsumeEvents;
- (long long)processEvent:(struct __IOHIDEvent *)arg1 shouldConsume:(_Bool *)arg2;	// IMP=0x000000010002bd60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

