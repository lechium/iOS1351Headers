//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TUCallContainer-Protocol.h"

@class NSArray, TUCall;

@protocol TUCallContainerPrivate <TUCallContainer>
@property(nonatomic, readonly) _Bool existingCallsHaveMultipleProviders;
@property(nonatomic, readonly) TUCall *frontmostAudioOrVideoCall;
@property(nonatomic, readonly) TUCall *frontmostCall;
@property(nonatomic, readonly) TUCall *conferenceCall;
@property(nonatomic, readonly) TUCall *displayedCall;
- (TUCall *)callPassingTest:(_Bool (^)(TUCall *))arg1 sortedUsingComparator:(long long (^)(id, id))arg2;
@property(nonatomic, readonly) NSArray *_allCalls;
@end
