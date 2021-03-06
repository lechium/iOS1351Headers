/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HUGarageDoorStateTransition : NSObject {

	BOOL _fromOpenState;
	BOOL _toOpenState;

}

@property (assign,nonatomic) BOOL fromOpenState;              //@synthesize fromOpenState=_fromOpenState - In the implementation block
@property (assign,nonatomic) BOOL toOpenState;                //@synthesize toOpenState=_toOpenState - In the implementation block
+(id)transitionFromState:(BOOL)arg1 toState:(BOOL)arg2 ;
-(void)setFromOpenState:(BOOL)arg1 ;
-(void)setToOpenState:(BOOL)arg1 ;
-(BOOL)fromOpenState;
-(BOOL)toOpenState;
@end

