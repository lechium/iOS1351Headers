/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:18 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <vCard/CNVCardNameComponents.h>

@class NSString;

@interface CNVCardMutableNameComponents : CNVCardNameComponents

@property (copy) NSString * formattedName; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSString * middleName; 
@property (copy) NSString * title; 
@property (copy) NSString * suffix; 
@property (copy) NSString * companyName; 
@property (assign) BOOL isCompany; 
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(void)setFormattedName:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(void)setIsCompany:(BOOL)arg1 ;
@end

