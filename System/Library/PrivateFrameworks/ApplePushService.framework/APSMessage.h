/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:40 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString, NSDictionary;

@interface APSMessage : NSObject <NSCoding> {

	NSMutableDictionary* _plist;
	NSMutableDictionary* _properties;
	void* _xpcMessage;
	NSObject*<OS_dispatch_queue> _ivarQueue;

}

@property (nonatomic,retain) NSString * topic; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long identifier; 
@property (nonatomic,retain) NSString * correlationIdentifier; 
@property (assign,nonatomic) unsigned long long sendRTT; 
-(id)objectForKey:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)topic;
-(void)setTopic:(NSString *)arg1 ;
-(void)setGuid:(id)arg1 ;
-(id)guid;
-(void)setSendRTT:(unsigned long long)arg1 ;
-(void)setInstanceObject:(id)arg1 forKey:(id)arg2 ;
-(id)instanceObjectForKey:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 xpcMessage:(id)arg2 ;
-(id)initWithTopic:(id)arg1 userInfo:(id)arg2 ;
-(NSString *)correlationIdentifier;
-(void)setCorrelationIdentifier:(NSString *)arg1 ;
-(unsigned long long)sendRTT;
@end

