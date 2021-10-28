/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface VSCredentialEntryPicker : NSObject {

	NSString* _title;
	NSArray* _pickerItems;
	long long _selectedIndex;

}

@property (nonatomic,copy) NSString * title;                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * pickerItems;                  //@synthesize pickerItems=_pickerItems - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
-(id)pickerItemAtCurrentIndex;
@end
