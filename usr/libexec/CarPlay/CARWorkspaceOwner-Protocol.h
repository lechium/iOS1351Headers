//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CARWorkspaceStateChangeSessionDelegate-Protocol.h"

@class CARWorkspace;
@protocol CARWorkspaceStateChangeSession;

@protocol CARWorkspaceOwner <CARWorkspaceStateChangeSessionDelegate>
- (void)workspace:(CARWorkspace *)arg1 didEndStateChangeSession:(id <CARWorkspaceStateChangeSession>)arg2;
- (void)workspace:(CARWorkspace *)arg1 didBeginStateChangeSession:(id <CARWorkspaceStateChangeSession>)arg2;
@end

