/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class NSString, SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,retain) SACFProvideContext * updateContext; 
+(id)flowCompleted;
+(id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)domain;
-(id)groupIdentifier;
-(void)setDomain:(NSString *)arg1 ;
-(void)setUpdateContext:(SACFProvideContext *)arg1 ;
-(SACFProvideContext *)updateContext;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

