//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOAnalyticsPipelineHandlingPolicy : NSObject
{
    _Bool _sendImmediately;	// 8 = 0x8
    int _type;	// 12 = 0xc
    double _ttl;	// 16 = 0x10
    NSArray *_uploadStages;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010000a4b4
@property(retain, nonatomic) NSArray *uploadStages; // @synthesize uploadStages=_uploadStages;
@property(nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(nonatomic) _Bool sendImmediately; // @synthesize sendImmediately=_sendImmediately;
@property(nonatomic) int type; // @synthesize type=_type;

@end

