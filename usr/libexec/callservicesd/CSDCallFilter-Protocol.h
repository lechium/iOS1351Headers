//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CSDCall, NSSet, NSString, TUCall, TUHandle;

@protocol CSDCallFilter
- (_Bool)isUnknownAddress:(NSString *)arg1 normalizedAddress:(NSString *)arg2 forBundleIdentifier:(NSString *)arg3;
- (_Bool)isUnknownCall:(CSDCall *)arg1;
- (long long)filterStatusForAddresses:(NSSet *)arg1 withBundleIdentifier:(NSString *)arg2;
- (_Bool)willRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (_Bool)shouldRestrictAddresses:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(_Bool)arg3;
- (_Bool)shouldFilterIncomingCall:(CSDCall *)arg1;
- (_Bool)shouldDisconnectCall:(TUCall *)arg1;
- (_Bool)containsRecentsRestrictedHandle:(TUHandle *)arg1;
- (_Bool)containsOutgoingRestrictedHandle:(TUHandle *)arg1 forBundleIdentifier:(NSString *)arg2 performSynchronously:(_Bool)arg3;
- (_Bool)containsRestrictedHandle:(TUHandle *)arg1;
@end

