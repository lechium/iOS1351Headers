/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:09 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlaySupport/CPSButton.h>

@class CPSNavigationAlertProgressView;

@interface CPSNavigationAlertFocusButton : CPSButton {

	CPSNavigationAlertProgressView* _altFocusProgressView;

}

@property (assign,nonatomic,__weak) CPSNavigationAlertProgressView * altFocusProgressView;              //@synthesize altFocusProgressView=_altFocusProgressView - In the implementation block
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CPSNavigationAlertProgressView *)altFocusProgressView;
-(void)setAltFocusProgressView:(CPSNavigationAlertProgressView *)arg1 ;
@end

