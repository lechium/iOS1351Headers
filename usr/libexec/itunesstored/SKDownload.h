//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (void)deleteContentForProductID:(id)arg1;	// IMP=0x0000000100011d84
+ (id)contentURLForProductID:(id)arg1;	// IMP=0x0000000100011d7c
- (void).cxx_destruct;	// IMP=0x0000000100012168
- (id)copyXPCEncoding;	// IMP=0x0000000100012048
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000100011d88
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100011c30
- (void)_setVersion:(id)arg1;	// IMP=0x0000000100011bf4
- (void)_setTransaction:(id)arg1;	// IMP=0x0000000100011b54
- (void)_setTimeRemaining:(double)arg1;	// IMP=0x0000000100011b48
- (void)_setProgress:(float)arg1;	// IMP=0x0000000100011b3c
- (void)_setError:(id)arg1;	// IMP=0x0000000100011b00
- (void)_setDownloadState:(long long)arg1;	// IMP=0x0000000100011af4
- (void)_setContentURL:(id)arg1;	// IMP=0x0000000100011ab8
- (void)_setContentLength:(id)arg1;	// IMP=0x0000000100011a50
- (void)_setContentIdentifier:(id)arg1;	// IMP=0x0000000100011a14
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
- (void)_applyChangeset:(id)arg1;	// IMP=0x0000000100011818
@property(readonly, nonatomic) SKPaymentTransaction *transaction;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *contentVersion;
@property(readonly, nonatomic) long long contentLength;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSURL *contentURL;
@property(readonly, nonatomic) long long downloadState;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *contentIdentifier;
- (id)init;	// IMP=0x0000000100011708

@end

