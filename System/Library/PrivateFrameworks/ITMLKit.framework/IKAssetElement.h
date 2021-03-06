/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:46 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKViewElement.h>

@class NSNumber, NSURL, NSString;

@interface IKAssetElement : IKViewElement {

	BOOL _infiniteDuration;

}

@property (nonatomic,retain,readonly) NSNumber * persistentID; 
@property (nonatomic,retain,readonly) NSNumber * rentalAdamID; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long keyDelivery; 
@property (getter=isInfiniteDuration,nonatomic,readonly) BOOL infiniteDuration;              //@synthesize infiniteDuration=_infiniteDuration - In the implementation block
@property (nonatomic,retain,readonly) NSString * actionParams; 
@property (nonatomic,retain,readonly) NSString * adamID; 
@property (nonatomic,retain,readonly) NSURL * extrasURL; 
@property (nonatomic,retain,readonly) NSString * bookmarkID; 
@property (nonatomic,retain,readonly) NSString * contentID; 
@property (nonatomic,retain,readonly) NSString * externalID; 
@property (nonatomic,retain,readonly) NSString * serviceID; 
+(BOOL)shouldParseChildDOMElements;
-(long long)type;
-(NSURL *)url;
-(NSNumber *)persistentID;
-(NSString *)externalID;
-(NSString *)adamID;
-(NSString *)contentID;
-(id)_numberForAttribute:(id)arg1 ;
-(long long)keyDelivery;
-(BOOL)infiniteDuration;
-(NSString *)actionParams;
-(NSURL *)extrasURL;
-(NSString *)bookmarkID;
-(NSNumber *)rentalAdamID;
-(NSString *)serviceID;
-(BOOL)isInfiniteDuration;
@end

