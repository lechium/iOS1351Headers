//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CAREventHandling-Protocol.h"

@class NSDictionary, NSString, UIView;

@protocol _CARDashboardWorkspaceEntityPresenting <CAREventHandling>
@property(readonly, nonatomic) NSString *identifier;
- (void)deactivateScene;
- (void)activateSceneWithSettings:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (void)backgroundSceneWithCompletion:(void (^)(void))arg1;
- (void)foregroundSceneWithSettings:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
- (void)invalidatePresentationViewForIdentifier:(NSString *)arg1;
- (UIView *)presentationViewWithIdentifier:(NSString *)arg1;
- (_Bool)presentsFullScreen;
@end

