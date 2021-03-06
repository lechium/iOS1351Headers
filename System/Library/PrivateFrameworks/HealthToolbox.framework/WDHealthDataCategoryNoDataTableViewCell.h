/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:24 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSString;

@interface WDHealthDataCategoryNoDataTableViewCell : UITableViewCell {

	UILabel* _displayTypeLabel;
	NSString* _displayTypeText;

}

@property (nonatomic,copy) NSString * displayTypeText;              //@synthesize displayTypeText=_displayTypeText - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupUI;
-(void)setDisplayTypeText:(NSString *)arg1 ;
-(NSString *)displayTypeText;
@end

