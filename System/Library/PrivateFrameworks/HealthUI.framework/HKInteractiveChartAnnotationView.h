/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:25 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@protocol HKInteractiveChartAnnotationViewDataSource;
@class UIStackView;

@interface HKInteractiveChartAnnotationView : UIView {

	id<HKInteractiveChartAnnotationViewDataSource> _dataSource;
	UIStackView* _columnStack;
	UIStackView* _containerStack;
	UIStackView* _marginStack;
	long long _context;

}

@property (nonatomic,retain) UIStackView * columnStack;                                                     //@synthesize columnStack=_columnStack - In the implementation block
@property (nonatomic,retain) UIStackView * containerStack;                                                  //@synthesize containerStack=_containerStack - In the implementation block
@property (nonatomic,retain) UIStackView * marginStack;                                                     //@synthesize marginStack=_marginStack - In the implementation block
@property (assign,nonatomic) long long context;                                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<HKInteractiveChartAnnotationViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(id)initWithContext:(long long)arg1 ;
-(id<HKInteractiveChartAnnotationViewDataSource>)dataSource;
-(void)setDataSource:(id<HKInteractiveChartAnnotationViewDataSource>)arg1 ;
-(void)reloadData;
-(UIStackView *)containerStack;
-(void)setContainerStack:(UIStackView *)arg1 ;
-(id)_createSeparatorView;
-(UIStackView *)columnStack;
-(void)_configureStacks;
-(void)setColumnStack:(UIStackView *)arg1 ;
-(void)setMarginStack:(UIStackView *)arg1 ;
-(UIStackView *)marginStack;
-(void)lowerPriorityConstraint:(id)arg1 ;
@end

