/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SearchUIFeedbackDelegate <SFFeedbackListener>
@optional
-(void)presentViewController:(id)arg1;
-(void)willDismissViewController:(id)arg1;
-(void)updateViewControllerTitle:(id)arg1;
-(void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
-(BOOL)shouldHandleCardSectionEngagement:(id)arg1;
-(void)presentViewControllerForCard:(id)arg1 animate:(BOOL)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(BOOL)arg2;
-(void)cardSectionViewDidInvalidateSize:(id)arg1;

@end

