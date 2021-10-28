/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class NSString, NSURL;

@interface SBSRelaunchAction : BSAction

@property (nonatomic,copy,readonly) NSString * reason; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,retain,readonly) NSURL * targetURL; 
+(id)actionWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3 ;
-(unsigned long long)options;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 options:(unsigned long long)arg2 targetURL:(id)arg3 ;
-(NSURL *)targetURL;
@end
