/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface UIGestureRecognizerTarget : NSObject {

	id _target;
	SEL _action;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                    //@synthesize action=_action - In the implementation block
+(id)gestureTargetWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)description;
-(id)target;
-(SEL)action;
-(BOOL)isEqualToTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_sendActionWithGestureRecognizer:(id)arg1 ;
@end

