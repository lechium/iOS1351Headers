/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIPointerInteractionDriverSink <NSObject>
@required
-(void)_cursorDidExit;
-(void)_updatePointerWithPoint:(CGPoint)arg1 modifiers:(long long)arg2 buttonMask:(long long)arg3 forReason:(long long)arg4;
-(void)_configureHoverGestureRecognizer:(id)arg1 forView:(id)arg2;
-(void)_cursorDidHide;

@end
