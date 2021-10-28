/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNFileServices;
@interface CNFileUtilities : NSObject {

	id<CNFileServices> _services;

}
+(id)sharedInstance;
+(id)os_log;
+(id)initializeFileLock;
+(id)sharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)requestSharedLockDirectoryURLWithFileServices:(id)arg1 ;
+(id)fileLock;
-(id)init;
-(id)initWithFileServices:(id)arg1 ;
-(id)sharedLockUrlWithName:(id)arg1 ;
-(id)sharedLockDirectoryUrl;
-(BOOL)isFileAtUrlOnARemoteFileSystem:(id)arg1 ;
-(id)proxyLockUrlForFileAtUrl:(id)arg1 ;
@end
