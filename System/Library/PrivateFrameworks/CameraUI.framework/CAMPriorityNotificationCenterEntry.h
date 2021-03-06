/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CAMPriorityNotificationCenterEntry : NSObject {

	id _observer;
	SEL _selector;
	id _object;

}

@property (assign,nonatomic,__weak) id observer;              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;                    //@synthesize selector=_selector - In the implementation block
@property (nonatomic,retain) id object;                       //@synthesize object=_object - In the implementation block
-(id)description;
-(SEL)selector;
-(id)object;
-(id)observer;
-(void)setObject:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(void)setObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
@end

