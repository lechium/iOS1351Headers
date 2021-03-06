/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:04 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Photos/Photos-Structs.h>
@class NSMutableDictionary, NSDictionary;

@interface PHCompositeMediaResult : NSObject {

	NSMutableDictionary* _mutableInfo;
	NSDictionary* _imageProperties;

}
-(id)error;
-(BOOL)isCancelled;
-(void)setError:(id)arg1 ;
-(void)setSandboxExtensionToken:(id)arg1 ;
-(id)sandboxExtensionToken;
-(BOOL)isPlaceholder;
-(id)imageProperties;
-(id)info;
-(void)setCancelled:(BOOL)arg1 ;
-(CGImageRef)imageRef;
-(id)exifOrientation;
-(id)imageURL;
-(id)imageData;
-(id)initWithRequestID:(int)arg1 ;
-(id)mediaMetadata;
-(id)adjustmentData;
-(id)videoURL;
-(BOOL)containsValidData;
-(id)imageUTI;
-(long long)uiOrientation;
-(unsigned)cgOrientation;
-(id)videoAdjustmentData;
-(BOOL)canHandleAdjustmentData;
-(id)baseVersionNeeded;
-(id)imagePropertiesLoadIfNeeded:(BOOL)arg1 ;
-(void)setInfo:(id)arg1 forKey:(id)arg2 ;
-(void)addInfoFromDictionary:(id)arg1 ;
-(void)clearError;
-(void)setErrorIfNone:(id)arg1 ;
-(void)setIsInCloud:(BOOL)arg1 ;
-(BOOL)isInCloud;
-(void)setDegraded:(BOOL)arg1 ;
-(BOOL)isDegraded;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)imageSandboxExtensionToken;
-(id)videoSandboxExtensionToken;
@end

