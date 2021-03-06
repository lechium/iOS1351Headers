/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:57 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@protocol PSTimeRangeCellDelegate;
@class UILabel, NSArray;

@interface PSTimeRangeCell : PSTableCell {

	UILabel* _fromTitle;
	UILabel* _toTitle;
	UILabel* _fromTime;
	UILabel* _toTime;
	NSArray* _constraints;
	id<PSTimeRangeCellDelegate> _delegate;

}
-(void)layoutSubviews;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)accessibilityConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 ;
-(id)regularConstraintsWithVariableBindings:(id)arg1 metrics:(id)arg2 ;
@end

