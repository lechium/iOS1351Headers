/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:03 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKFileBackedConfigurationSourceDelegate.h>
#import <libobjc.A.dylib/CRKConfigurationSource.h>

@class NSURL, CRKFileBackedConfigurationSource, NSString;

@interface CRKDirectoryBackedConfigurationSource : NSObject <CRKFileBackedConfigurationSourceDelegate, CRKConfigurationSource> {

	NSURL* mDirectoryURL;
	CRKFileBackedConfigurationSource* mFileBackedSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2 callbackQueue:(id)arg3 ;
-(void)setConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchConfiguration:(/*^block*/id)arg1 ;
-(void)fileBackedConfigurationSource:(id)arg1 didDeleteConfigurationAtURL:(id)arg2 inDirectory:(id)arg3 ;
-(id)initWithDirectoryURL:(id)arg1 fileName:(id)arg2 ;
-(BOOL)isDirectoryEmpty:(id)arg1 ;
@end
