/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/UNSContentProtectionStrategy.h>

@class NSString, NSMutableDictionary;

@interface UNSFileHandleContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {

	NSString* _fileProtectionType;
	NSMutableDictionary* _keyedFileHandles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithFileProtectionType:(id)arg1 ;
-(BOOL)dataIsAvailableAtPath:(id)arg1 ;
-(id)dataAtPath:(id)arg1 ;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)allPaths;
-(id)allDataAtPath:(id)arg1 ;
-(BOOL)removeAllDataAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_fileHandleForCreatingStoreAtPath:(id)arg1 protectionType:(id)arg2 ;
-(BOOL)_isFileProtectionTypeSupported:(id)arg1 ;
@end

