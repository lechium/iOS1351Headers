/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:08 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface INSerializedCacheItem : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _identifier;
	NSDictionary* _payload;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)serializeCacheableObjects:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)deserializeCacheItems:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)deserializeCacheItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)payload;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 payload:(id)arg3 ;
@end
