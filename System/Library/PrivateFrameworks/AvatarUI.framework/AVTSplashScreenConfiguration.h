/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVPlayerItem, NSString;

@interface AVTSplashScreenConfiguration : NSObject {

	AVPlayerItem* _primaryPlayerItem;
	AVPlayerItem* _secondaryPlayerItem;
	NSString* _titleString;
	NSString* _subTitleString;
	NSString* _buttonString;

}

@property (nonatomic,retain) AVPlayerItem * primaryPlayerItem;                //@synthesize primaryPlayerItem=_primaryPlayerItem - In the implementation block
@property (nonatomic,retain) AVPlayerItem * secondaryPlayerItem;              //@synthesize secondaryPlayerItem=_secondaryPlayerItem - In the implementation block
@property (nonatomic,retain) NSString * titleString;                          //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) NSString * subTitleString;                       //@synthesize subTitleString=_subTitleString - In the implementation block
@property (nonatomic,retain) NSString * buttonString;                         //@synthesize buttonString=_buttonString - In the implementation block
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setSubTitleString:(NSString *)arg1 ;
-(void)setButtonString:(NSString *)arg1 ;
-(void)setPrimaryPlayerItem:(AVPlayerItem *)arg1 ;
-(NSString *)subTitleString;
-(NSString *)buttonString;
-(AVPlayerItem *)primaryPlayerItem;
-(AVPlayerItem *)secondaryPlayerItem;
-(void)setSecondaryPlayerItem:(AVPlayerItem *)arg1 ;
@end

