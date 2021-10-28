/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:30 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface PKPickerSection : NSObject {

	NSString* _title;
	NSString* _footer;
	NSMutableArray* _items;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footer;                            //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
+(id)sectionWithTitle:(id)arg1 footer:(id)arg2 ;
+(id)sectionWithTitle:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end
