/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface CKHistoricEvent : NSObject <NSCopying, NSSecureCoding> {

	 identifier;
	 _frequency;
	 _lastDuration;
	 _totalDuration;
	 _metadata;

}

@property (readonly,nonatomic) NSString * identifier; 
@property (readonly,nonatomic) NSDate * firstSeen; 
@property (readonly,nonatomic) NSDate * lastSeen; 
@property (readonly,nonatomic) long long frequency; 
@property (readonly,nonatomic) double lastDuration; 
@property (readonly,nonatomic) double totalDuration; 
@property (readonly,nonatomic) NSDictionary * metadata; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(void*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)metadata;
-(long long)frequency;
-(double)totalDuration;
-(NSDate *)lastSeen;
-(id)init:(id)arg1 ;
-(NSDate *)firstSeen;
-(double)lastDuration;
-(id)initFrom:(id)arg1 withIdentifier:(id)arg2 ;
@end
