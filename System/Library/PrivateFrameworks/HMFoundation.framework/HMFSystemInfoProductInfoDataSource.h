/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:42 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol HMFSystemInfoProductInfoDataSource <NSObject>
@property (nonatomic,readonly) long long productPlatform; 
@property (nonatomic,readonly) long long productClass; 
@property (nonatomic,readonly) long long productVariant; 
@property (nonatomic,copy,readonly) NSString * modelIdentifier; 
@required
-(NSString *)modelIdentifier;
-(long long)productClass;
-(long long)productVariant;
-(long long)productPlatform;

@end
