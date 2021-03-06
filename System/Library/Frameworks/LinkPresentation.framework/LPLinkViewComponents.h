/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class LPCaptionBarView, LPComponentView, UIView, LPTextView;

@interface LPLinkViewComponents : NSObject {

	LPCaptionBarView* _captionBar;
	LPComponentView* _media;
	UIView* _mediaBackground;
	LPCaptionBarView* _mediaTopCaptionBar;
	LPCaptionBarView* _mediaBottomCaptionBar;
	LPTextView* _quote;

}

@property (nonatomic,retain) LPCaptionBarView * captionBar;                         //@synthesize captionBar=_captionBar - In the implementation block
@property (nonatomic,retain) LPComponentView * media;                               //@synthesize media=_media - In the implementation block
@property (nonatomic,retain) UIView * mediaBackground;                              //@synthesize mediaBackground=_mediaBackground - In the implementation block
@property (nonatomic,retain) LPCaptionBarView * mediaTopCaptionBar;                 //@synthesize mediaTopCaptionBar=_mediaTopCaptionBar - In the implementation block
@property (nonatomic,retain) LPCaptionBarView * mediaBottomCaptionBar;              //@synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar - In the implementation block
@property (nonatomic,retain) LPTextView * quote;                                    //@synthesize quote=_quote - In the implementation block
-(LPComponentView *)media;
-(void)setMedia:(LPComponentView *)arg1 ;
-(LPCaptionBarView *)captionBar;
-(LPCaptionBarView *)mediaBottomCaptionBar;
-(LPCaptionBarView *)mediaTopCaptionBar;
-(void)setCaptionBar:(LPCaptionBarView *)arg1 ;
-(void)setMediaBottomCaptionBar:(LPCaptionBarView *)arg1 ;
-(void)setMediaTopCaptionBar:(LPCaptionBarView *)arg1 ;
-(UIView *)mediaBackground;
-(void)setMediaBackground:(UIView *)arg1 ;
-(LPTextView *)quote;
-(void)setQuote:(LPTextView *)arg1 ;
@end

