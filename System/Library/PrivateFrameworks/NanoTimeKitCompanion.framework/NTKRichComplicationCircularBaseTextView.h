/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@protocol NTKColoringView;
@class UIView;

@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView {

	UIView*<NTKColoringView> _label;
	double _labelScale;

}
-(id)init;
-(id)label;
-(void)layoutSubviews;
-(id)_labelFont;
-(void)setForegroundColor:(id)arg1 ;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(void)_layoutLabel;
-(void)_setLayoutTransformToView:(id)arg1 origin:(CGPoint)arg2 centerScale:(double)arg3 ;
@end
