/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLValidatedExternalResource.h>

@class NSString;

@interface PLSharedStreamsValidatedExternalResource : PLValidatedExternalResource {

	unsigned _sharedStreamsType;
	NSString* _fingerprint;

}

@property (assign,nonatomic) unsigned sharedStreamsType;              //@synthesize sharedStreamsType=_sharedStreamsType - In the implementation block
@property (nonatomic,retain) NSString * fingerprint;                  //@synthesize fingerprint=_fingerprint - In the implementation block
-(id)description;
-(void)setFingerprint:(NSString *)arg1 ;
-(NSString *)fingerprint;
-(void)setSharedStreamsType:(unsigned)arg1 ;
-(unsigned)sharedStreamsType;
@end
