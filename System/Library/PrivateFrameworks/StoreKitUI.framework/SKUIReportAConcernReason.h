/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:50 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface SKUIReportAConcernReason : NSObject {

	NSNumber* _reasonID;
	NSString* _name;
	NSString* _uppercaseName;

}

@property (nonatomic,copy) NSNumber * reasonID;                   //@synthesize reasonID=_reasonID - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * uppercaseName;              //@synthesize uppercaseName=_uppercaseName - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)reasonID;
-(NSString *)uppercaseName;
-(void)setReasonID:(NSNumber *)arg1 ;
-(void)setUppercaseName:(NSString *)arg1 ;
@end

