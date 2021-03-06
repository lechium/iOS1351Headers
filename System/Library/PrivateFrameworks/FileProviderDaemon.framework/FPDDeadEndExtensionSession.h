/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:11 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProviderDaemon/FileProviderDaemon-Structs.h>
#import <libobjc.A.dylib/FPDExtensionSessionProtocol.h>

@class NSString;

@interface FPDDeadEndExtensionSession : NSObject <FPDExtensionSessionProtocol> {

	BOOL hasFileProviderPresenceTCCAccess;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasFileProviderPresenceTCCAccess; 
-(void)invalidate;
-(void)start;
-(void)dumpStateTo:(id)arg1 ;
-(id)newFileProviderProxyWithPID:(int)arg1 ;
-(id)newFileProviderProxyWithoutPID;
-(id)newFileProviderProxyWithoutPIDWithTimeout:(BOOL)arg1 ;
-(void)asyncUnregisterLifetimeExtensionForObject:(id)arg1 ;
-(void)registerLifetimeExtensionForObject:(id)arg1 ;
-(void)unregisterLifetimeExtensionForObject:(id)arg1 ;
-(id)newFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 ;
-(id)existingFileProviderProxyWithTimeout:(BOOL)arg1 pid:(int)arg2 ;
-(BOOL)hasFileProviderPresenceTCCAccess;
-(void)updatePresenceTCCWithAuditToken:(SCD_Struct_FP2)arg1 ;
-(void)setHasFileProviderPresenceTCCAccess:(BOOL)arg1 ;
@end

