/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Contacts/Contacts-Structs.h>
@class NSData;

@interface CNiOSABDependentPropertiesUpdateContext : NSObject {

	BOOL _hasPendingImageData;
	BOOL _hasPendingCropRect;
	BOOL _hasPendingThumbnailImageData;
	BOOL _hasPendingSyncImageData;
	NSData* _pendingImageData;
	NSData* _pendingThumbnailImageData;
	NSData* _pendingFullscreenImageData;
	NSData* _pendingSyncImageData;
	CGRect _pendingCropRect;

}

@property (assign,nonatomic) BOOL hasPendingImageData;                       //@synthesize hasPendingImageData=_hasPendingImageData - In the implementation block
@property (assign,nonatomic) BOOL hasPendingCropRect;                        //@synthesize hasPendingCropRect=_hasPendingCropRect - In the implementation block
@property (assign,nonatomic) BOOL hasPendingThumbnailImageData;              //@synthesize hasPendingThumbnailImageData=_hasPendingThumbnailImageData - In the implementation block
@property (assign,nonatomic) BOOL hasPendingSyncImageData;                   //@synthesize hasPendingSyncImageData=_hasPendingSyncImageData - In the implementation block
@property (nonatomic,copy) NSData * pendingImageData;                        //@synthesize pendingImageData=_pendingImageData - In the implementation block
@property (assign,nonatomic) CGRect pendingCropRect;                         //@synthesize pendingCropRect=_pendingCropRect - In the implementation block
@property (nonatomic,copy) NSData * pendingThumbnailImageData;               //@synthesize pendingThumbnailImageData=_pendingThumbnailImageData - In the implementation block
@property (nonatomic,copy) NSData * pendingFullscreenImageData;              //@synthesize pendingFullscreenImageData=_pendingFullscreenImageData - In the implementation block
@property (nonatomic,copy) NSData * pendingSyncImageData;                    //@synthesize pendingSyncImageData=_pendingSyncImageData - In the implementation block
+(BOOL)shouldSetWatchChanges;
-(BOOL)flushPendingImageChangesToPerson:(void*)arg1 logger:(id)arg2 error:(id*)arg3 ;
-(void)setPendingImageData:(NSData *)arg1 ;
-(void)setPendingCropRect:(CGRect)arg1 ;
-(void)setPendingThumbnailImageData:(NSData *)arg1 ;
-(void)setPendingFullscreenImageData:(NSData *)arg1 ;
-(void)setPendingSyncImageData:(NSData *)arg1 ;
-(void)setHasPendingImageData:(BOOL)arg1 ;
-(void)setHasPendingCropRect:(BOOL)arg1 ;
-(void)setHasPendingThumbnailImageData:(BOOL)arg1 ;
-(void)setHasPendingSyncImageData:(BOOL)arg1 ;
-(BOOL)hasPendingImageData;
-(BOOL)hasPendingCropRect;
-(NSData *)pendingImageData;
-(CGRect)pendingCropRect;
-(NSData *)pendingThumbnailImageData;
-(NSData *)pendingFullscreenImageData;
-(NSData *)pendingSyncImageData;
-(BOOL)hasPendingThumbnailImageData;
-(BOOL)setWatchChangesforThumbnailImageDataToPerson:(void*)arg1 error:(id*)arg2 ;
-(BOOL)hasPendingSyncImageData;
-(void)resetAllData;
@end

