//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSData, NSString, NSURL;

@interface WriteReceiptTask : Task
{
    _Bool _sandbox;	// 8 = 0x8
    NSURL *_absoluteURL;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSURL *_bundleURL;	// 32 = 0x20
    NSData *_receiptData;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000db3b4
@property(readonly, nonatomic) NSData *receiptData; // @synthesize receiptData=_receiptData;
@property(readonly, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSURL *absoluteURL; // @synthesize absoluteURL=_absoluteURL;
- (void)_writeReceipt:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000db054
- (void)_writeReceipt:(id)arg1 toBundleURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000dac20
- (id)_receiptURLForContainerURL:(id)arg1;	// IMP=0x00000001000dab5c
- (void)main;	// IMP=0x00000001000da894
- (id)_initWithReceiptData:(id)arg1;	// IMP=0x00000001000da7a8
- (id)initWithReceiptData:(id)arg1 bundleURL:(id)arg2;	// IMP=0x00000001000da6c8
- (id)initWithReceiptData:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x00000001000da5e8
- (id)initWithReceiptData:(id)arg1 absoluteURL:(id)arg2;	// IMP=0x00000001000da564

@end

