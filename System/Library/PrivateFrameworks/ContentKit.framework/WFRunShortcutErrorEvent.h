/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunShortcutErrorEvent : WFEvent {

	NSString* _key;
	NSString* _actionIdentifier;
	NSString* _errorDomain;
	NSString* _errorCode;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                   //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSString * errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)actionIdentifier;
-(NSString *)errorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
@end

