//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IPCMessageObject.h"

__attribute__((visibility("hidden")))
@interface IPCGuidanceStateMessage : IPCMessageObject
{
    _Bool _includeRoute;	// 8 = 0x8
}

@property(nonatomic) _Bool includeRoute; // @synthesize includeRoute=_includeRoute;
- (id)description;	// IMP=0x000000010003e114
- (id)dictionaryValue;	// IMP=0x000000010003e02c
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000010003df74

@end

