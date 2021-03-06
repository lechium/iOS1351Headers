/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions {

	BOOL _editing;
	double _minimumFontSize;
	double _editingBackgroundHeight;
	double _headlineBaselineOffset;
	long long _viewSizeSubclass;
	double _viewWidth;
	double _containerLeadingMargin;
	double _containerTrailingMargin;

}

@property (nonatomic,readonly) long long viewSizeSubclass;                        //@synthesize viewSizeSubclass=_viewSizeSubclass - In the implementation block
@property (nonatomic,readonly) double viewWidth;                                  //@synthesize viewWidth=_viewWidth - In the implementation block
@property (nonatomic,readonly) double containerLeadingMargin;                     //@synthesize containerLeadingMargin=_containerLeadingMargin - In the implementation block
@property (nonatomic,readonly) double containerTrailingMargin;                    //@synthesize containerTrailingMargin=_containerTrailingMargin - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                       //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) double minimumFontSize;                              //@synthesize minimumFontSize=_minimumFontSize - In the implementation block
@property (assign,nonatomic) double editingBackgroundHeight;                      //@synthesize editingBackgroundHeight=_editingBackgroundHeight - In the implementation block
@property (assign,nonatomic) double headlineBaselineOffset;                       //@synthesize headlineBaselineOffset=_headlineBaselineOffset - In the implementation block
@property (nonatomic,readonly) double editingBackgroundMinimumWidth; 
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2 viewWidth:(double)arg3 navigationBarBottomInset:(double)arg4 containerLeadingMargin:(double)arg5 containerTrailingMargin:(double)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)minimumFontSize;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setMinimumFontSize:(double)arg1 ;
-(double)viewWidth;
-(long long)viewSizeSubclass;
-(double)cellInnerMargin;
-(double)headlineBaselineOffset;
-(double)editingBackgroundMinimumWidth;
-(double)editingBackgroundHeight;
-(void)setHeadlineBaselineOffset:(double)arg1 ;
-(void)setEditingBackgroundHeight:(double)arg1 ;
-(double)containerLeadingMargin;
-(double)containerTrailingMargin;
@end

