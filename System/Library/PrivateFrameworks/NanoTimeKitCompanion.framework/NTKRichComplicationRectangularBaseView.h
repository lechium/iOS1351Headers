/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKRichComplicationView.h>

@protocol NTKRichComplicationRectangularBaseViewDelegate;
@interface NTKRichComplicationRectangularBaseView : NTKRichComplicationView {

	id<NTKRichComplicationRectangularBaseViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKRichComplicationRectangularBaseViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)viewWithLegacyComplicationType:(unsigned long long)arg1 ;
+(void)updateCustomDataAnimationFromEarlierView:(id)arg1 laterView:(id)arg2 isForward:(BOOL)arg3 animationType:(unsigned long long)arg4 animationDuration:(double)arg5 animationFraction:(float)arg6 ;
-(id)init;
-(id<NTKRichComplicationRectangularBaseViewDelegate>)delegate;
-(void)setDelegate:(id<NTKRichComplicationRectangularBaseViewDelegate>)arg1 ;
-(id)_createAndAddColoringLabelWithFontSize:(double)arg1 weight:(double)arg2 usesTextProviderTintColoring:(BOOL)arg3 ;
-(id)initWithFamily:(long long)arg1 ;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
@end
