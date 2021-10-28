/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@class OITSUColor, NSDictionary;

@interface MFPColorAdjust : NSObject {

	MFPColorMatrix* mColorMatrix;
	MFPColorMatrix* mGrayMatrix;
	int mColorMatrixFlags;
	OITSUColor* mTransparentRangeLow;
	OITSUColor* mTransparentRangeHigh;
	float mGamma;
	NSDictionary* mRecolorMap;
	float mThreshold;
	BOOL mEnabled;

}
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(float)threshold;
-(void)setThreshold:(float)arg1 ;
-(MFPColorMatrix*)colorMatrix;
-(float)gamma;
-(void)setGamma:(float)arg1 ;
-(void)setColorMatrix:(MFPColorMatrix*)arg1 ;
-(MFPColorMatrix*)grayMatrix;
-(void)setGrayMatrix:(MFPColorMatrix*)arg1 ;
-(int)colorMatrixFlags;
-(void)setColorMatrixFlags:(int)arg1 ;
-(id)transparentLow;
-(id)transparentHigh;
-(void)setTransparentLow:(id)arg1 high:(id)arg2 ;
-(id)recolorMap;
-(void)setRecolorMap:(id)arg1 ;
@end
