//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMDRequest.h"

@class FMDAccount, NSDictionary, NSURL;

@interface FMDRequestAckTrack : FMDRequest
{
    FMDAccount *_account;	// 8 = 0x8
    NSDictionary *_trackCommand;	// 16 = 0x10
    NSURL *_ackURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000247cc
@property(retain, nonatomic) NSURL *ackURL; // @synthesize ackURL=_ackURL;
@property(retain, nonatomic) NSDictionary *trackCommand; // @synthesize trackCommand=_trackCommand;
@property(retain, nonatomic) FMDAccount *account; // @synthesize account=_account;
- (_Bool)canReplace:(id)arg1;	// IMP=0x000000010002460c
- (id)requestBody;	// IMP=0x000000010002442c
- (id)requestUrl;	// IMP=0x0000000100024420
- (id)initWithAccount:(id)arg1 trackCommand:(id)arg2 ackURL:(id)arg3;	// IMP=0x0000000100024348

@end
