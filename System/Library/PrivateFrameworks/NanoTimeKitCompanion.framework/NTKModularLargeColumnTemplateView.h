/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:28 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@interface NTKModularLargeColumnTemplateView : NTKModularTemplateView {

	BOOL _useNoColumnPadding;

}

@property (assign,nonatomic) BOOL useNoColumnPadding;              //@synthesize useNoColumnPadding=_useNoColumnPadding - In the implementation block
-(BOOL)useNoColumnPadding;
-(void)setUseNoColumnPadding:(BOOL)arg1 ;
-(id)_newLabelSubviewWithFont:(id)arg1 ;
-(void)_enumerateColumnRowsWithBlock:(/*^block*/id)arg1 ;
-(void)_positionLeadingAlignedImageView:(id)arg1 label:(id)arg2 withBaselineOffset:(double)arg3 ;
-(void)_layoutRowsOfColumnsWithAlignment:(long long)arg1 ;
-(id)_newHeaderLabelSubview;
-(id)_newBodyLabelSubview;
@end

