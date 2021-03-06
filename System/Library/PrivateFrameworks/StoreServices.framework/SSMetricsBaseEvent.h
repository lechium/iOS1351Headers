/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:33 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSNumber * pixelRatio; 
@property (nonatomic,retain) NSNumber * screenHeight; 
@property (nonatomic,retain) NSNumber * screenWidth; 
@property (nonatomic,retain) NSNumber * windowHeight; 
@property (nonatomic,retain) NSString * windowOrientation; 
@property (nonatomic,retain) NSNumber * windowWidth; 
@property (nonatomic,retain) NSString * pageContext; 
@property (nonatomic,retain) NSString * pageDescription; 
@property (assign,nonatomic) unsigned long long pageID; 
@property (nonatomic,retain) NSString * pageType; 
@property (nonatomic,retain) NSString * pageURL; 
-(id)init;
-(id)description;
-(void)setPageURL:(NSString *)arg1 ;
-(NSString *)pageURL;
-(unsigned long long)pageID;
-(void)setPageID:(unsigned long long)arg1 ;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(NSString *)pageContext;
-(NSString *)pageDescription;
-(NSString *)pageType;
-(NSNumber *)pixelRatio;
-(NSNumber *)screenHeight;
-(NSNumber *)screenWidth;
-(void)setPageContext:(NSString *)arg1 ;
-(void)setPageDescription:(NSString *)arg1 ;
-(void)setPageType:(NSString *)arg1 ;
-(void)setPixelRatio:(NSNumber *)arg1 ;
-(void)setScreenHeight:(NSNumber *)arg1 ;
-(void)setScreenWidth:(NSNumber *)arg1 ;
-(void)setWindowHeight:(NSNumber *)arg1 ;
-(void)setWindowOrientation:(NSString *)arg1 ;
-(void)setWindowWidth:(NSNumber *)arg1 ;
-(NSNumber *)windowHeight;
-(NSString *)windowOrientation;
-(NSNumber *)windowWidth;
@end

