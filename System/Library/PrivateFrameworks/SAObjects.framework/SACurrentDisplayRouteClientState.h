/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceClientState.h>

@class NSArray;

@interface SACurrentDisplayRouteClientState : SAAceClientState

@property (nonatomic,copy) NSArray * activeDisplayRoutes; 
+(id)deliveryDeadline;
+(id)persistencePolicy;
+(id)currentDisplayRouteClientState;
+(id)currentDisplayRouteClientStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)activeDisplayRoutes;
-(void)setActiveDisplayRoutes:(NSArray *)arg1 ;
@end
