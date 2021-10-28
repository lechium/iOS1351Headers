/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:18 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CTPlan.h>

@class NSString;

@interface CTPendingPlan : CTPlan {

	NSString* _smdpURL;
	NSString* _matchingID;

}

@property (nonatomic,readonly) NSString * smdpURL;                 //@synthesize smdpURL=_smdpURL - In the implementation block
@property (nonatomic,readonly) NSString * matchingID;              //@synthesize matchingID=_matchingID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)smdpURL;
-(NSString *)matchingID;
-(id)initWithSmdpURL:(id)arg1 matchingID:(id)arg2 ;
@end
