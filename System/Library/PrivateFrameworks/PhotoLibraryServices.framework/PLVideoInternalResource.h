/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:00 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLVideoResource.h>

@protocol PLResource;
@class NSString;

@interface PLVideoInternalResource : NSObject <PLVideoResource> {

	id<PLResource> _backingResource;

}

@property (nonatomic,readonly) id<PLResource> backingResource;              //@synthesize backingResource=_backingResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isPlayable;
-(BOOL)isLocallyAvailable;
-(BOOL)isLocallyGeneratable;
-(BOOL)isStreamable;
-(BOOL)isRemotelyAvailable;
-(BOOL)isMediumHighQuality;
-(BOOL)isOriginalVideoComplement;
-(BOOL)matchesOrExceedsQualityLevel:(unsigned)arg1 ;
-(id)fileURLIfLocal;
-(id)initWithBackingResource:(id)arg1 ;
-(id<PLResource>)backingResource;
@end

