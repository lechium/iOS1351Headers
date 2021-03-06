/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:16 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SARemoteDevice;

@interface SAUILParseExpressions : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * expressions; 
@property (nonatomic,retain) SARemoteDevice * targetDevice; 
+(id)parseExpressions;
+(id)parseExpressionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTargetDevice:(SARemoteDevice *)arg1 ;
-(SARemoteDevice *)targetDevice;
-(id)encodedClassName;
-(NSArray *)expressions;
-(BOOL)requiresResponse;
-(void)setExpressions:(NSArray *)arg1 ;
@end

