//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CSDFaceTimeProviderDelegate-Protocol.h"

@class NSUUID;

@protocol CSDDualFaceTimeProviderDelegate <CSDFaceTimeProviderDelegate>
- (void)endCallWithUUID:(NSUUID *)arg1;
- (void)endCallWithUUIDAsDeclinedElsewhere:(NSUUID *)arg1;
- (void)endCallWithUUIDAsAnsweredElsewhere:(NSUUID *)arg1;
- (_Bool)hasCallStartedConnectingWithUUID:(NSUUID *)arg1;
@end
