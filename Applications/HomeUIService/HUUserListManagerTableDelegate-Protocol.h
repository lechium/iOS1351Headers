//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMOutgoingHomeInvitation, HMUser, NSArray, NSError;

@protocol HUUserListManagerTableDelegate <NSObject>
- (void)managerDidSendInvitations:(NSArray *)arg1;
- (void)managerDidDismissWithError:(NSError *)arg1;

@optional
- (void)managerDidUpdateUserList;
- (void)managerDidCancelInvite:(HMOutgoingHomeInvitation *)arg1 error:(NSError *)arg2;
- (void)managerDidRemoveUser:(HMUser *)arg1 error:(NSError *)arg2;
@end
