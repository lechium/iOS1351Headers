/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary, NSDate;


@protocol PXDisplaySuggestion <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short type; 
@property (nonatomic,readonly) unsigned short subtype; 
@property (nonatomic,copy,readonly) NSString * localIdentifier; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) NSDictionary * actionProperties; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@required
-(unsigned short)type;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned short)state;
-(NSString *)title;
-(unsigned short)subtype;
-(NSString *)localIdentifier;
-(NSDictionary *)actionProperties;
-(id)fetchKeyAssets;

@end

