//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDataDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class NSData, NSMutableData, NSRunLoop, NSString, NSURL, NSURLConnection;

@interface FAFamilyCircleOperation : NSOperation <NSURLConnectionDataDelegate, NSURLConnectionDelegate>
{
    NSURL *_url;	// 8 = 0x8
    NSURLConnection *_conn;	// 16 = 0x10
    NSMutableData *_mutableData;	// 24 = 0x18
    NSString *_username;	// 32 = 0x20
    NSString *_password;	// 40 = 0x28
    NSRunLoop *_operationRunLoop;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100007ef0
@property(retain) NSRunLoop *operationRunLoop; // @synthesize operationRunLoop=_operationRunLoop;
@property(readonly, copy) NSString *password; // @synthesize password=_password;
@property(readonly, copy) NSString *username; // @synthesize username=_username;
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000100007eb0
- (void)didReceivePropertyListResponse:(id)arg1;	// IMP=0x0000000100007eac
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x0000000100007ccc
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100007bd0
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x0000000100007bb4
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x0000000100007bb0
- (id)_authHeaderString;	// IMP=0x0000000100007abc
- (void)stopRunLoop;	// IMP=0x0000000100007a70
- (int)runRunLoopUntilStopped;	// IMP=0x0000000100007a00
- (void)main;	// IMP=0x0000000100007924
@property(readonly, nonatomic) NSData *receivedData;
- (id)urlRequest;	// IMP=0x0000000100007804
- (id)initWithURL:(id)arg1 username:(id)arg2 password:(id)arg3;	// IMP=0x0000000100007720

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
