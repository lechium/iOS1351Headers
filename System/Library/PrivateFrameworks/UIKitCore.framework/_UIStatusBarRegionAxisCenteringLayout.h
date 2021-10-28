/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarRegionAxisLayout.h>

@class NSString;

@interface _UIStatusBarRegionAxisCenteringLayout : NSObject <_UIStatusBarRegionAxisLayout> {

	double _interspace;
	double _margin;
	long long _maxNumberOfItems;

}

@property (assign,nonatomic) double interspace;                       //@synthesize interspace=_interspace - In the implementation block
@property (assign,nonatomic) double margin;                           //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) long long maxNumberOfItems;              //@synthesize maxNumberOfItems=_maxNumberOfItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canOverflowItems; 
-(id)init;
-(void)setMargin:(double)arg1 ;
-(double)margin;
-(id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4 ;
-(BOOL)mayFitDisplayItems:(id)arg1 ;
-(BOOL)canOverflowItems;
-(double)interspace;
-(void)setInterspace:(double)arg1 ;
-(long long)maxNumberOfItems;
-(void)setMaxNumberOfItems:(long long)arg1 ;
@end
