//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TURouteController.h>

@class NSArray, TURoute, UIImage;

@interface TURouteController (UI)
+ (unsigned long long)priorityForRoute:(id)arg1;	// IMP=0x0000000100084908
@property(readonly, nonatomic) UIImage *audioControlsGlyph;
@property(readonly, nonatomic) UIImage *audioRouteGlyph;
@property(readonly, nonatomic) _Bool isInSplitterMode;
@property(readonly, nonatomic) _Bool areAuxiliaryRoutesAvailable;
@property(readonly, nonatomic) _Bool areNonRelayAuxiliaryRoutesAvailable;
@property(readonly, copy, nonatomic) NSArray *sortedRoutes;
@property(readonly, copy, nonatomic) TURoute *routeForSpeakerDisable;
@property(readonly, copy, nonatomic) TURoute *routeForSpeakerEnable;
@end
