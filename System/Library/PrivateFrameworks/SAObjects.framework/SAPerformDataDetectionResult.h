/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAPerformDataDetectionResult : SABaseCommand <SAServerBoundCommand, SAAceSerializable>

@property (nonatomic,copy) NSString * detectionTarget; 
@property (nonatomic,copy) NSArray * matches; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)performDataDetectionResult;
+(id)performDataDetectionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)detectionTarget;
-(void)setDetectionTarget:(NSString *)arg1 ;
@end

