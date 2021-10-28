/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

@class NTKDateComplicationLabel;

@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView {

	NTKDateComplicationLabel* _label;
	unsigned long long _dateStyle;

}

@property (nonatomic,readonly) unsigned long long dateStyle;              //@synthesize dateStyle=_dateStyle - In the implementation block
-(unsigned long long)dateStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg1 ;
-(id)foregroundColor;
-(id)accentColor;
-(void)setAccentColor:(id)arg1 ;
-(void)setDateComplicationText:(id)arg1 withDayRange:(NSRange)arg2 forDateStyle:(unsigned long long)arg3 ;
-(double)_widthThatFits;
-(void)_invalidateLabelSize;
@end
