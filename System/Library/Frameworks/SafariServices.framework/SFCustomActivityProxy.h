/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIImage;

@interface SFCustomActivityProxy : NSObject <NSCopying, NSSecureCoding> {

	NSString* _activityType;
	NSString* _activityTitle;
	UIImage* _activityImage;
	unsigned long long _activityProxyID;

}

@property (nonatomic,readonly) NSString * activityType;                         //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * activityTitle;                        //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,readonly) UIImage * activityImage;                         //@synthesize activityImage=_activityImage - In the implementation block
@property (nonatomic,readonly) unsigned long long activityProxyID;              //@synthesize activityProxyID=_activityProxyID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)activityType;
-(id)initWithActivity:(id)arg1 ;
-(NSString *)activityTitle;
-(UIImage *)activityImage;
-(unsigned long long)activityProxyID;
-(id)activityTypeWithActivity:(id)arg1 ;
-(id)_initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 proxyID:(unsigned long long)arg4 ;
@end

