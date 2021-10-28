//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount, NSURL;

@interface PostRequestTask : AMSTask
{
    ACAccount *_account;	// 8 = 0x8
    NSURL *_requestURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000f198
@property(readonly, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)_requestIdentifierFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010000f034
- (_Bool)_storeRequestWithResult:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000ee18
- (id)_serverRequestWithError:(id *)arg1;	// IMP=0x000000010000ea4c
- (id)perform;	// IMP=0x000000010000e738
- (id)initWithRequestURL:(id)arg1 account:(id)arg2;	// IMP=0x000000010000e684

@end
