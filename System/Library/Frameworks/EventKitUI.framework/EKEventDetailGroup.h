/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:26 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject {

	long long _tag;
	NSArray* _items;
	NSString* _headerTitle;

}

@property (assign,nonatomic) long long tag;                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * headerTitle;              //@synthesize headerTitle=_headerTitle - In the implementation block
-(id)description;
-(long long)tag;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfRows;
-(void)setTag:(long long)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)itemAtIndex:(unsigned long long)arg1 subitemIndex:(unsigned long long*)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2 ;
-(id)initWithTag:(long long)arg1 headerTitle:(id)arg2 ;
-(BOOL)hasSubitemForIndexPathRow:(unsigned long long)arg1 ;
-(void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)arg1 ;
@end
