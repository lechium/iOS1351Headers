/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SBDaemonRequest : NSObject {

	/*^block*/id _enabler;
	/*^block*/id _disabler;

}

@property (nonatomic,copy) id enabler;               //@synthesize enabler=_enabler - In the implementation block
@property (nonatomic,copy) id disabler;              //@synthesize disabler=_disabler - In the implementation block
+(id)requestWithEnabler:(/*^block*/id)arg1 disabler:(/*^block*/id)arg2 ;
-(void)setEnabler:(id)arg1 ;
-(void)setDisabler:(id)arg1 ;
-(void)dispatchEnablerOnQueue:(id)arg1 ;
-(void)dispatchDisablerOnQueue:(id)arg1 ;
-(id)enabler;
-(id)disabler;
@end

