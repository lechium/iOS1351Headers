/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:34 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIFont, NSString, NSDictionary;

@interface ASDisplayContext : NSObject {

	double _nameFontSize;
	double _dataFontSize;
	double _multilineDataFontSize;
	UIFont* _nameFont;
	UIFont* _dataFont;
	UIFont* _multilineDataFont;
	UIFont* _unitFont;
	UIFont* _multilineUnitFont;
	NSString* _contentSizeCategory;
	UIFont* _descriptionFont;
	NSDictionary* _titleColors;
	NSDictionary* _keyColors;

}

@property (nonatomic,retain) UIFont * nameFont;                       //@synthesize nameFont=_nameFont - In the implementation block
@property (nonatomic,retain) UIFont * dataFont;                       //@synthesize dataFont=_dataFont - In the implementation block
@property (nonatomic,retain) UIFont * multilineDataFont;              //@synthesize multilineDataFont=_multilineDataFont - In the implementation block
@property (nonatomic,retain) UIFont * unitFont;                       //@synthesize unitFont=_unitFont - In the implementation block
@property (nonatomic,retain) UIFont * multilineUnitFont;              //@synthesize multilineUnitFont=_multilineUnitFont - In the implementation block
@property (nonatomic,retain) UIFont * descriptionFont;                //@synthesize descriptionFont=_descriptionFont - In the implementation block
@property (nonatomic,retain) NSDictionary * titleColors;              //@synthesize titleColors=_titleColors - In the implementation block
@property (nonatomic,retain) NSDictionary * keyColors;                //@synthesize keyColors=_keyColors - In the implementation block
+(void)_contentSizeChangeForContext:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)_companionContext;
+(id)_gizmoContext;
+(id)displayContextWithName:(id)arg1 ;
-(UIFont *)descriptionFont;
-(void)setNameFont:(UIFont *)arg1 ;
-(UIFont *)nameFont;
-(void)setDescriptionFont:(UIFont *)arg1 ;
-(NSDictionary *)keyColors;
-(UIFont *)dataFont;
-(UIFont *)unitFont;
-(id)keyColorForDisplayMode:(long long)arg1 ;
-(UIFont *)multilineDataFont;
-(UIFont *)multilineUnitFont;
-(void)setDataFont:(UIFont *)arg1 ;
-(void)setMultilineDataFont:(UIFont *)arg1 ;
-(void)setUnitFont:(UIFont *)arg1 ;
-(void)setMultilineUnitFont:(UIFont *)arg1 ;
-(void)setTitleColors:(NSDictionary *)arg1 ;
-(void)setKeyColors:(NSDictionary *)arg1 ;
-(NSDictionary *)titleColors;
-(id)titleColorForDisplayMode:(long long)arg1 ;
@end

