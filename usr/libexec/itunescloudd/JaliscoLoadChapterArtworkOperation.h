//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class ICURLSession, NSDictionary, NSOperationQueue, NSString;

@interface JaliscoLoadChapterArtworkOperation : CloudLibraryOperation
{
    NSDictionary *_chapterArtworkToLoad;	// 8 = 0x8
    NSString *_powerAssertionIdentifier;	// 16 = 0x10
    ICURLSession *_artworkDownloadSession;	// 24 = 0x18
    NSOperationQueue *_artworkDownloadOperationQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100006f5c
- (void)cancel;	// IMP=0x0000000100006f04
- (void)main;	// IMP=0x0000000100006740
- (id)initWithConfiguration:(id)arg1 dictionary:(id)arg2;	// IMP=0x0000000100006568
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000001000064f4

@end
