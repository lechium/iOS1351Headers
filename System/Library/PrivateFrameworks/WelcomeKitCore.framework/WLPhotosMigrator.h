/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WLDataclassMigrating.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface WLPhotosMigrator : NSObject <WLDataclassMigrating> {

	NSObject*<OS_dispatch_semaphore> _importSema;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentType;
-(id)init;
-(id)contentType;
-(id)dataType;
-(BOOL)accountBased;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
@end

