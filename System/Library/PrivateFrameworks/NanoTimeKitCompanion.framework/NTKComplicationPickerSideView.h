/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKEditOptionPickerSideView.h>
#import <libobjc.A.dylib/NTKCurvedPickerSideView.h>

@class NTKComplicationLayoutRule, NSString;

@interface NTKComplicationPickerSideView : NTKEditOptionPickerSideView <NTKCurvedPickerSideView> {

	NTKComplicationLayoutRule* _layoutRule;
	long long _style;

}

@property (nonatomic,copy) NTKComplicationLayoutRule * layoutRule;              //@synthesize layoutRule=_layoutRule - In the implementation block
@property (assign,nonatomic) long long style;                                   //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(NTKComplicationLayoutRule *)layoutRule;
-(void)setLayoutRule:(NTKComplicationLayoutRule *)arg1 ;
-(void)setCurvedAngle:(double)arg1 ;
@end

