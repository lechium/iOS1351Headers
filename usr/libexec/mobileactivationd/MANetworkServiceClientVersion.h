//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSString;

@interface MANetworkServiceClientVersion : NSObject <NSURLSessionDataDelegate>
{
    _Bool _allowInvalidCert;	// 8 = 0x8
}

@property _Bool allowInvalidCert; // @synthesize allowInvalidCert=_allowInvalidCert;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000eb4c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
