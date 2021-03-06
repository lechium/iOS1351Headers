/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideosUI/VideosUI-Structs.h>
@class VUITextLayout, VUIScoreboardRowLayout;

@interface VUIScoreboardLayout : NSObject {

	double _padding;
	VUITextLayout* _textLayout;
	VUIScoreboardRowLayout* _topRowLayout;
	VUIScoreboardRowLayout* _bottomRowLayout;
	TVCornerRadii _borderRadii;

}

@property (assign,nonatomic) TVCornerRadii borderRadii;                             //@synthesize borderRadii=_borderRadii - In the implementation block
@property (assign,nonatomic) double padding;                                        //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) VUITextLayout * textLayout;                            //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUIScoreboardRowLayout * topRowLayout;                 //@synthesize topRowLayout=_topRowLayout - In the implementation block
@property (nonatomic,retain) VUIScoreboardRowLayout * bottomRowLayout;              //@synthesize bottomRowLayout=_bottomRowLayout - In the implementation block
+(id)scoreboardALayout;
+(id)scoreboardBLayout;
+(id)scoreboardCLayoutWithInnerMargin:(double)arg1 ;
+(int)_textBlendMode;
+(id)_textColor:(long long)arg1 ;
-(void)setPadding:(double)arg1 ;
-(double)padding;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
-(TVCornerRadii)borderRadii;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(VUIScoreboardRowLayout *)topRowLayout;
-(VUIScoreboardRowLayout *)bottomRowLayout;
-(void)setTopRowLayout:(VUIScoreboardRowLayout *)arg1 ;
-(void)setBottomRowLayout:(VUIScoreboardRowLayout *)arg1 ;
@end

