/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IconServices/IconServices-Structs.h>
@class NSMutableDictionary;

@interface ISImageCache : NSObject {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _imageBagsByDescriptor;

}

@property (assign) os_unfair_lock_s lock;                                    //@synthesize lock=_lock - In the implementation block
@property (retain) NSMutableDictionary * imageBagsByDescriptor;              //@synthesize imageBagsByDescriptor=_imageBagsByDescriptor - In the implementation block
-(id)init;
-(id)debugDescription;
-(os_unfair_lock_s)lock;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)imageForDescriptor:(id)arg1 ;
-(void)setImage:(id)arg1 forDescriptor:(id)arg2 ;
-(id)allImages;
-(NSMutableDictionary *)imageBagsByDescriptor;
-(void)setImageBagsByDescriptor:(NSMutableDictionary *)arg1 ;
@end

