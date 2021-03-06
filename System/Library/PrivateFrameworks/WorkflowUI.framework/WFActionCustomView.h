/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol WFComponentNavigationContext;
@class WFAction;

@interface WFActionCustomView : UIView {

	WFAction* _action;
	id<WFComponentNavigationContext> _navigationContext;

}

@property (assign,nonatomic,__weak) WFAction * action;                                               //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
+(double)preferredHeightForAction:(id)arg1 ;
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)setNavigationContext:(id<WFComponentNavigationContext>)arg1 ;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
@end

