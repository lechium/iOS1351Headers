//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFileManagerDelegate-Protocol.h"

@class NSString, NSURL;

@interface NADLibraryPathMigrator : NSObject <NSFileManagerDelegate>
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000df9c
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (_Bool)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4;	// IMP=0x000000010000ddd4
- (void)migrate;	// IMP=0x000000010000db38
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;	// IMP=0x000000010000da78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
