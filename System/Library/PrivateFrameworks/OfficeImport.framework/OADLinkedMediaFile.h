/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OADMovie.h>

@class NSURL;

@interface OADLinkedMediaFile : OADMovie {

	NSURL* mUrl;
	BOOL mIsExternal;

}

@property (retain) NSURL * url; 
@property (assign) BOOL isExternal; 
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)isExternal;
-(void)setIsExternal:(BOOL)arg1 ;
@end

