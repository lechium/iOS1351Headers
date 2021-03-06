/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface _CDUserActivity : NSObject <NSSecureCoding> {

	NSString* _bundleId;
	NSString* _type;
	NSString* _title;
	NSDate* _date;
	NSDictionary* _payload;

}

@property (copy) NSString * bundleId;                 //@synthesize bundleId=_bundleId - In the implementation block
@property (copy) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (copy) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (copy) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)createFromUserActivity:(id)arg1 ;
-(id)description;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)payload;
@end

