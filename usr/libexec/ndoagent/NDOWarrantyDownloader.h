//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NDOWarrantyDownloader : NSObject
{
}

- (id)dictionaryFromURL:(id)arg1;	// IMP=0x000000010000737c
- (void)_downloadWarrantyFromServerURL:(id)arg1 withRetries:(int)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100006d3c
- (void)downloadWarranty:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006490

@end

