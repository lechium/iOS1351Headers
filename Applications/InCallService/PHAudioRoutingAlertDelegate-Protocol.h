//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PHAudioRoutingAlertController, TURoute;

@protocol PHAudioRoutingAlertDelegate <NSObject>

@optional
- (void)audioRoutingAlertControllerDidDismiss:(PHAudioRoutingAlertController *)arg1;
- (void)audioRoutingAlertController:(PHAudioRoutingAlertController *)arg1 didToggleMute:(_Bool)arg2;
- (void)audioRoutingAlertController:(PHAudioRoutingAlertController *)arg1 didSelectRoute:(TURoute *)arg2;
@end

