//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ExternalDownloadManifest : NSObject
{
    NSArray *_invalidDownloads;	// 8 = 0x8
    NSArray *_validDownloads;	// 16 = 0x10
}

- (_Bool)_parsePropertyList:(id)arg1;	// IMP=0x000000010008bb58
@property(readonly) NSArray *validDownloads;
@property(readonly) NSArray *invalidDownloads;
- (void)dealloc;	// IMP=0x000000010008baf8
- (id)initWithValidDownloads:(id)arg1 invalidDownloads:(id)arg2;	// IMP=0x000000010008ba78
- (id)initWithPropertyList:(id)arg1;	// IMP=0x000000010008b9ec
- (id)init;	// IMP=0x000000010008b9dc

@end

