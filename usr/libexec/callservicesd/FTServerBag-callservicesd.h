//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTServerBag.h>

#import "CSDFaceTimeIDSProviderDelegateServerBag-Protocol.h"
#import "CSDMomentsServerBag-Protocol.h"

@interface FTServerBag (callservicesd) <CSDFaceTimeIDSProviderDelegateServerBag, CSDMomentsServerBag>
- (_Bool)isQuickRelaySupported;	// IMP=0x000000010013fe78
@property(nonatomic, readonly) double momentsRequestTimeout;
- (_Bool)isMomentsDisabled;	// IMP=0x0000000100179914

// Remaining properties
@property(nonatomic, readonly) _Bool momentsDisabled;
@property(nonatomic, readonly) _Bool quickRelaySupported;
@end

