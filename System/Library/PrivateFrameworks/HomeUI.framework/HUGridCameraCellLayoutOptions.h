/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:30 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridCameraCellLayoutOptions : HUGridCellLayoutOptions {

	double _headerViewHeight;
	double _cameraViewAspectRatio;
	double _headerHorizontalInnerMargins;
	double _cellHeight;

}

@property (assign,nonatomic) double headerViewHeight;                          //@synthesize headerViewHeight=_headerViewHeight - In the implementation block
@property (assign,nonatomic) double cameraViewAspectRatio;                     //@synthesize cameraViewAspectRatio=_cameraViewAspectRatio - In the implementation block
@property (assign,nonatomic) double headerHorizontalInnerMargins;              //@synthesize headerHorizontalInnerMargins=_headerHorizontalInnerMargins - In the implementation block
@property (assign,nonatomic) double cellHeight;                                //@synthesize cellHeight=_cellHeight - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cellHeight;
-(double)headerViewHeight;
-(void)setHeaderViewHeight:(double)arg1 ;
-(void)setCellHeight:(double)arg1 ;
-(double)headerHorizontalInnerMargins;
-(double)cameraViewAspectRatio;
-(void)setCameraViewAspectRatio:(double)arg1 ;
-(void)setHeaderHorizontalInnerMargins:(double)arg1 ;
@end

