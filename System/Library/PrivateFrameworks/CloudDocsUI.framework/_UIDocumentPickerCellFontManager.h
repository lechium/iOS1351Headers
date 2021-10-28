/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIFont;

@interface _UIDocumentPickerCellFontManager : NSObject {

	UIFont* _titleFontForGridLayout;
	UIFont* _subtitleFontForGridLayout;
	UIFont* _titleFontForTableLayout;
	UIFont* _subtitleFontForTableLayout;

}

@property (nonatomic,retain) UIFont * titleFontForGridLayout;                  //@synthesize titleFontForGridLayout=_titleFontForGridLayout - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFontForGridLayout;               //@synthesize subtitleFontForGridLayout=_subtitleFontForGridLayout - In the implementation block
@property (nonatomic,retain) UIFont * titleFontForTableLayout;                 //@synthesize titleFontForTableLayout=_titleFontForTableLayout - In the implementation block
@property (nonatomic,retain) UIFont * subtitleFontForTableLayout;              //@synthesize subtitleFontForTableLayout=_subtitleFontForTableLayout - In the implementation block
+(id)sharedFontManager;
-(id)init;
-(void)cacheFonts;
-(void)setTitleFontForTableLayout:(UIFont *)arg1 ;
-(void)setSubtitleFontForTableLayout:(UIFont *)arg1 ;
-(void)setTitleFontForGridLayout:(UIFont *)arg1 ;
-(void)setSubtitleFontForGridLayout:(UIFont *)arg1 ;
-(UIFont *)titleFontForGridLayout;
-(UIFont *)subtitleFontForGridLayout;
-(UIFont *)titleFontForTableLayout;
-(UIFont *)subtitleFontForTableLayout;
@end
