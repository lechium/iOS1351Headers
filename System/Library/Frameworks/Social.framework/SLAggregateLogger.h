/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:31 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Social.framework/Social
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SLAggregateLogger : NSObject
+(void)logWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(void)logFacebookPost:(id)arg1 fromProcessWithPID:(int)arg2 ;
+(void)logTweetWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(id)_logIdentifierForPID:(int)arg1 ;
+(void)logPostWithServiceNameKey:(id)arg1 text:(id)arg2 attachments:(id)arg3 locationAttached:(BOOL)arg4 fromProcessWithPID:(int)arg5 ;
+(BOOL)_attachmentsContainImage:(id)arg1 ;
+(BOOL)_attachmentsContainURL:(id)arg1 ;
+(void)logFacebookAppInstallChoice:(BOOL)arg1 ;
+(void)logTwitterAppInstallChoice:(BOOL)arg1 ;
+(void)logTencentWeiboWithText:(id)arg1 attachments:(id)arg2 locationAttached:(BOOL)arg3 fromProcessWithPID:(int)arg4 ;
+(void)logWeiboAppInstallChoice:(BOOL)arg1 ;
+(void)logTencentWeiboAppInstallChoice:(BOOL)arg1 ;
+(void)logFlickrAppInstallChoice:(BOOL)arg1 ;
+(void)logVimeoAppInstallChoice:(BOOL)arg1 ;
@end
