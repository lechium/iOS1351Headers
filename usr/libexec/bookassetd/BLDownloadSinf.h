//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BLDownloadSinf : NSObject
{
    NSDictionary *_info;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100019cb0
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly) long long identifier;
- (id)dataForSinfDataKey:(id)arg1;	// IMP=0x0000000100019c34
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100019bb4

@end
