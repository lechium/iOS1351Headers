/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAStartRequest.h>

@class NSData, NSString;

@interface SARefreshRequest : SAStartRequest

@property (nonatomic,copy) NSData * nlResultState; 
@property (nonatomic,copy) NSData * serializedIntent; 
@property (nonatomic,copy) NSString * source; 
+(id)refreshRequest;
+(id)refreshRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)nlResultState;
-(void)setNlResultState:(NSData *)arg1 ;
-(NSData *)serializedIntent;
-(void)setSerializedIntent:(NSData *)arg1 ;
@end

