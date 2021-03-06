/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:23 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, SPHandle;

@interface SPLocationProvider : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	SPHandle* _provider;

}

@property (nonatomic,copy) NSDate * timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) SPHandle * provider;              //@synthesize provider=_provider - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setProvider:(SPHandle *)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(SPHandle *)provider;
-(id)initWithTimestamp:(id)arg1 provider:(id)arg2 ;
@end

