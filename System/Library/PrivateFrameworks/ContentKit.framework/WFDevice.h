/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContentKit/ContentKit-Structs.h>
@class NSArray, NSString;

@interface WFDevice : NSObject {

	NSArray* _capabilities;

}

@property (nonatomic,readonly) CGRect screenBounds; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSString * localizedModel; 
@property (nonatomic,readonly) NSString * systemName; 
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) long long platform; 
@property (nonatomic,readonly) NSArray * capabilities;                           //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSString * localizedWiFiDisplayName; 
@property (nonatomic,readonly) NSString * marketingName; 
@property (nonatomic,readonly) long long chipID; 
+(id)currentDevice;
-(NSString *)name;
-(NSString *)systemVersion;
-(long long)platform;
-(NSString *)model;
-(long long)idiom;
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(CGRect)screenBounds;
-(NSString *)localizedModel;
-(NSString *)systemName;
-(double)screenScale;
-(NSArray *)capabilities;
-(NSString *)marketingName;
-(BOOL)hasCapability:(id)arg1 ;
-(long long)chipID;
-(NSString *)localizedWiFiDisplayName;
@end

