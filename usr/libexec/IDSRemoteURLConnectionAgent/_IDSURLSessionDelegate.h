//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSString;
@protocol NSURLSessionDataDelegate;

@interface _IDSURLSessionDelegate : NSObject <NSURLSessionDataDelegate>
{
    id <NSURLSessionDataDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100005b68
@property(nonatomic) __weak id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100005a98
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x0000000100005a10
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100005964
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000001000058f8
- (id)init;	// IMP=0x00000001000058e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

