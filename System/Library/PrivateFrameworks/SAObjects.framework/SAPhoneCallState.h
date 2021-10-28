/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAPhoneCallState : AceObject <SABackgroundContextObject>

@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL incoming; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callState;
+(id)callStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setActive:(BOOL)arg1 ;
-(id)groupIdentifier;
-(BOOL)active;
-(id)encodedClassName;
-(BOOL)incoming;
-(void)setIncoming:(BOOL)arg1 ;
@end
