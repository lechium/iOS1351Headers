//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC13callservicesd17BlockedCallFilter : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010013bf3c
- (id)init;	// IMP=0x000000010013bf4c
- (long long)filterStatusForAddresses:(id)arg1 withBundleIdentifier:(id)arg2;	// IMP=0x000000010013bf04
- (_Bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;	// IMP=0x000000010013befc
- (_Bool)isUnknownCall:(id)arg1;	// IMP=0x000000010013bef4
- (_Bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000010013beec
- (_Bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x000000010013bee4
- (_Bool)shouldDisconnectCall:(id)arg1;	// IMP=0x000000010013bedc
- (_Bool)shouldFilterIncomingCall:(id)arg1;	// IMP=0x000000010013bed4
- (_Bool)containsRecentsRestrictedHandle:(id)arg1;	// IMP=0x000000010013bec4
- (_Bool)containsOutgoingRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(_Bool)arg3;	// IMP=0x000000010013bebc
- (_Bool)containsRestrictedHandle:(id)arg1;	// IMP=0x000000010013beb4
- (id)initWithQueue:(id)arg1;	// IMP=0x000000010013be5c

@end

