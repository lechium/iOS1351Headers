//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSUUID, TUCall;

@protocol TUCallContainer <NSObject>
@property(nonatomic, readonly) NSArray *callGroupsOnDefaultPairedDevice;
@property(nonatomic, readonly) NSArray *currentCallGroups;
- (_Bool)allCallsAreOfService:(int)arg1;
@property(nonatomic, readonly) _Bool anyCallIsEndpointOnCurrentDevice;
@property(nonatomic, readonly) _Bool anyCallIsHostedOnCurrentDevice;
@property(nonatomic, readonly) _Bool hasCurrentVideoCalls;
@property(nonatomic, readonly) _Bool hasCurrentAudioCalls;
@property(nonatomic, readonly) _Bool hasCurrentCalls;
- (_Bool)allCallsPassTest:(_Bool (^)(TUCall *))arg1;
- (_Bool)anyCallPassesTest:(_Bool (^)(TUCall *))arg1;
@property(nonatomic, readonly) long long callCountOnDefaultPairedDevice;
@property(nonatomic, readonly) long long currentAudioAndVideoCallCount;
@property(nonatomic, readonly) long long currentVideoCallCount;
@property(nonatomic, readonly) long long currentCallCount;
- (long long)countOfCallsPassingTest:(_Bool (^)(TUCall *))arg1;
- (TUCall *)displayedCallFromCalls:(NSArray *)arg1;
- (TUCall *)callWithCallUUID:(NSString *)arg1;
- (TUCall *)callWithUniqueProxyIdentifier:(NSString *)arg1;
- (TUCall *)audioOrVideoCallWithStatus:(int)arg1;
- (TUCall *)videoCallWithStatus:(int)arg1;
- (TUCall *)callWithStatus:(int)arg1;
@property(nonatomic, readonly) TUCall *currentVideoCall;
@property(nonatomic, readonly) TUCall *activeVideoCall;
@property(nonatomic, readonly) TUCall *incomingVideoCall;
@property(nonatomic, readonly) TUCall *incomingCall;
- (TUCall *)callPassingTest:(_Bool (^)(TUCall *))arg1;
- (NSArray *)callsWithGroupUUID:(NSUUID *)arg1;
- (NSArray *)audioAndVideoCallsWithStatus:(int)arg1;
- (NSArray *)callsWithStatus:(int)arg1;
@property(nonatomic, readonly) NSArray *callsOnDefaultPairedDevice;
@property(nonatomic, readonly) NSArray *callsHostedOrAnEndpointElsewhere;
@property(nonatomic, readonly) NSArray *callsWithAnEndpointElsewhere;
@property(nonatomic, readonly) NSArray *callsHostedElsewhere;
@property(nonatomic, readonly) NSArray *conferenceParticipantCalls;
@property(nonatomic, readonly) NSArray *displayedAudioAndVideoCalls;
@property(nonatomic, readonly) NSArray *displayedCalls;
@property(nonatomic, readonly) NSArray *incomingCalls;
@property(nonatomic, readonly) NSArray *currentAudioAndVideoCalls;
@property(nonatomic, readonly) NSArray *currentVideoCalls;
@property(nonatomic, readonly) NSArray *currentCalls;
- (NSArray *)callsPassingTest:(_Bool (^)(TUCall *))arg1;
@end
