/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSArray;

@interface MKTextItemView : UIView {

	NSArray* _labels;

}

@property (nonatomic,copy) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(id)initWithStrings:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 labelsNumberOfLines:(long long)arg4 ;
@end

