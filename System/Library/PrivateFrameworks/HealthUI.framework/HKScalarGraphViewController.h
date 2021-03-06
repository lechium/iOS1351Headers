/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HKGraphViewController.h>

@interface HKScalarGraphViewController : HKGraphViewController {

	double _minimumHeight;

}

@property (nonatomic,readonly) double minimumHeight;              //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(void)loadView;
-(void)viewDidLoad;
-(double)minimumHeight;
-(id)initWithMinimumHeight:(double)arg1 ;
-(id)initWithMinimumHeight:(double)arg1 labelDimension:(id)arg2 labelEndings:(long long)arg3 ;
-(id)_buildGraphViewWithLabelDimension:(id)arg1 labelEndings:(long long)arg2 ;
-(void)_setupGraphViewSelectionStyle;
-(void)_pinView:(id)arg1 toParentView:(id)arg2 ;
@end

