/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDecimalNumber;


@protocol INRideFareLineItemExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDecimalNumber * price; 
@property (nonatomic,copy) NSString * currencyCode; 
@required
-(id)init;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(NSDecimalNumber *)price;
-(void)setPrice:(id)arg1;

@end

