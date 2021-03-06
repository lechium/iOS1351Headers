//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSString;
@protocol StoreKitBagContract;

@interface StoreKitMessagesServerRequest : NSObject
{
    id <StoreKitBagContract> _bagContract;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    NSString *_bundleID;	// 24 = 0x18
    long long _status;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000037a4
- (id)_requestURL;	// IMP=0x0000000100003498
- (id)_parseURLFromResponseData:(id)arg1;	// IMP=0x00000001000032e0
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100002f54
- (id)initWithBagContract:(id)arg1 account:(id)arg2 bundleID:(id)arg3 status:(long long)arg4;	// IMP=0x0000000100002e7c

@end

