//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FMFBaseCmd.h"

@interface FMFAllowFriendRequestsCommand : FMFBaseCmd
{
    _Bool _allowFriendRequests;	// 16 = 0x10
}

@property(nonatomic) _Bool allowFriendRequests; // @synthesize allowFriendRequests=_allowFriendRequests;
- (_Bool)isUserAction;	// IMP=0x00000001000536b4
- (id)jsonBodyDictionary;	// IMP=0x00000001000535e8
- (id)pathSuffix;	// IMP=0x00000001000535dc
- (id)initWithAllowFriendRequests:(_Bool)arg1 forSession:(id)arg2;	// IMP=0x0000000100053578

@end

