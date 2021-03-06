//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "ISStoreURLOperationDelegate-Protocol.h"

@class NSMutableArray, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, SSURLRequestProperties;

@interface LoadDownloadQueueOperation : ISOperation <ISStoreURLOperationDelegate>
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    NSMutableOrderedSet *_downloads;	// 104 = 0x68
    _Bool _needsAuthentication;	// 112 = 0x70
    NSMutableArray *_rangesToLoad;	// 120 = 0x78
    long long _reason;	// 128 = 0x80
    NSString *_requestIdentifier;	// 136 = 0x88
    SSURLRequestProperties *_requestProperties;	// 144 = 0x90
    NSString *_mdSyncState;	// 152 = 0x98
}

+ (id)newLoadAutomaticDownloadQueueOperation;	// IMP=0x0000000100014998
- (void).cxx_destruct;	// IMP=0x0000000100016a58
- (_Bool)_shouldSendKeyBagSync;	// IMP=0x000000010001691c
- (id)_newURLOperationWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2;	// IMP=0x00000001000161bc
- (_Bool)_runMachineDataOperationWithRequest:(id)arg1 syncState:(id *)arg2;	// IMP=0x000000010001609c
- (_Bool)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2;	// IMP=0x0000000100015938
- (void)_handleResponse:(id)arg1;	// IMP=0x0000000100015830
- (id)_account;	// IMP=0x0000000100015750
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;	// IMP=0x00000001000154a0
- (void)run;	// IMP=0x0000000100014f0c
@property(copy) NSString *requestIdentifier;
@property long long reason;
@property _Bool needsAuthentication;
@property(retain) NSNumber *accountIdentifier;
@property(readonly) SSURLRequestProperties *requestProperties;
@property(readonly) NSOrderedSet *downloads;
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x000000010001486c
- (id)init;	// IMP=0x000000010001485c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

