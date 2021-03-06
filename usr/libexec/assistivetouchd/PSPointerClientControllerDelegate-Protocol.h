//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PSPointerClientController;

@protocol PSPointerClientControllerDelegate <NSObject>

@optional
- (void)pointerClientControllerWillDecelerate:(PSPointerClientController *)arg1 targetPointerPosition:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3 inContextID:(unsigned int)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7 resultHandler:(void (^)(struct CGPoint))arg8;
- (void)pointerClientControllerWillDecelerate:(PSPointerClientController *)arg1 targetPointerPosition:(inout struct CGPoint *)arg2 velocity:(struct CGPoint)arg3 inContextID:(unsigned int)arg4 cursorRegionLookupRadius:(double)arg5 cursorRegionLookupResolution:(double)arg6 lookupConeAngle:(double)arg7;
- (void)pointerClientControllerClientInteractionEnabledDidChange:(PSPointerClientController *)arg1;
- (void)pointerClientControllerClientInteractionStateDidChange:(PSPointerClientController *)arg1;
- (void)pointerClientControllerDidInvalidateRemoteSources:(PSPointerClientController *)arg1;
@end

