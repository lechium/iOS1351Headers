//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface AppReceiptHandleInvalidOperation : ISOperation
{
    CDUnknownBlockType _resultsBlock;	// 96 = 0x60
    NSString *_bundleIdentifier;	// 104 = 0x68
    NSString *_clientIdentifierHeader;	// 112 = 0x70
    NSString *_userAgent;	// 120 = 0x78
}

- (void)setResultsBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010005441c
- (void)run;	// IMP=0x0000000100053d30
@property(retain, nonatomic) NSString *userAgent;
@property(retain, nonatomic) NSString *clientIdentifierHeader;
- (void)dealloc;	// IMP=0x0000000100053b54
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0000000100053af4

@end
