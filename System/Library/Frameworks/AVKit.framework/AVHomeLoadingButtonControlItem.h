/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:28 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVControlItem.h>

@class AVLoadingButtonView;

@interface AVHomeLoadingButtonControlItem : AVControlItem {

	AVLoadingButtonView* _loadingButtonView;

}

@property (nonatomic,retain) AVLoadingButtonView * loadingButtonView;              //@synthesize loadingButtonView=_loadingButtonView - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator; 
-(id)view;
-(void)_updateTintColor;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(id)initWithTitle:(id)arg1 type:(long long)arg2 ;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(AVLoadingButtonView *)loadingButtonView;
-(void)setLoadingButtonView:(AVLoadingButtonView *)arg1 ;
@end

