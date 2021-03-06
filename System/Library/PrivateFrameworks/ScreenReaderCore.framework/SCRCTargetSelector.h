/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SCRCTargetSelector : NSObject {

	id _target;
	SEL _selector;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
+(id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(SEL)selector;
-(id)target;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

