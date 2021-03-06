/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray;

@interface MCDetailsDescriptionView : UIView {

	NSArray* _information;
	NSMutableArray* _labels;
	NSMutableArray* _fields;
	CGSize* _sizes;
	unsigned long long _sizesCount;
	double _idealHeight;
	BOOL _usesDynamicAlignment;
	double _labelMaxWidth;

}
-(void)dealloc;
-(id)_labelFont;
-(void)drawRect:(CGRect)arg1 ;
-(id)_valueFont;
-(void)setUsesDynamicAlignment:(BOOL)arg1 ;
-(double)heightForTableView;
-(void)_calculateHeightsForFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 data:(id)arg2 ;
@end

