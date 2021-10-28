/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DIAttributePickerItem, NSArray;

@interface DIAttributePicker : DIAttribute <NSSecureCoding> {

	DIAttributePickerItem* defaultValue;
	DIAttributePickerItem* currentValue;
	NSArray* _pickerItems;

}

@property (nonatomic,copy) DIAttributePickerItem * defaultValue; 
@property (nonatomic,copy) NSArray * pickerItems;                                                    //@synthesize pickerItems=_pickerItems - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) DIAttributePickerItem * currentValue; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DIAttributePickerItem *)defaultValue;
-(void)setDefaultValue:(DIAttributePickerItem *)arg1 ;
-(void)setCurrentValue:(DIAttributePickerItem *)arg1 ;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
-(id)getCurrentValue;
@end
