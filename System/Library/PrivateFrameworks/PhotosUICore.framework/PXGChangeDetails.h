/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:26 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PXGDiagnosticsProvider.h>

@class NSIndexSet, PXArrayChangeDetails, NSString;

@interface PXGChangeDetails : NSObject <NSCopying, PXGDiagnosticsProvider> {

	unsigned* _nextSpriteIndexByPreviousSpriteIndex;
	long long _nextSpriteIndexByPreviousSpriteIndexCapacity;
	NSIndexSet* _spriteIndexesThatWereRemoved;
	NSIndexSet* _spriteIndexesThatWereInserted;
	NSIndexSet* _spriteIndexesThatWereModified;
	BOOL _hasMoves;
	char* _tempBuffer;
	long long _tempBufferCapacity;
	PXArrayChangeDetails* _cachedArrayChangeDetails;
	unsigned _numberOfSpritesAfterChange;
	unsigned _numberOfSpritesBeforeChange;
	long long _layoutVersionBeforeChange;
	long long _layoutVersionAfterChange;

}

@property (nonatomic,readonly) unsigned numberOfSpritesAfterChange;                                          //@synthesize numberOfSpritesAfterChange=_numberOfSpritesAfterChange - In the implementation block
@property (nonatomic,readonly) unsigned numberOfSpritesBeforeChange;                                         //@synthesize numberOfSpritesBeforeChange=_numberOfSpritesBeforeChange - In the implementation block
@property (nonatomic,readonly) PXGChangeDetails * inverse; 
@property (nonatomic,readonly) BOOL hasAnyInsertionsRemovalsOrMoves; 
@property (nonatomic,readonly) NSIndexSet * removedSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * insertedSpriteIndexes; 
@property (nonatomic,readonly) NSIndexSet * modifiedSpriteIndexes; 
@property (nonatomic,readonly) const unsigned* spriteIndexAfterChangeBySpriteIndexBeforeChange; 
@property (nonatomic,readonly) PXArrayChangeDetails * arrayChangeDetails; 
@property (assign,nonatomic) long long layoutVersionBeforeChange;                                            //@synthesize layoutVersionBeforeChange=_layoutVersionBeforeChange - In the implementation block
@property (assign,nonatomic) long long layoutVersionAfterChange;                                             //@synthesize layoutVersionAfterChange=_layoutVersionAfterChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * diagnosticDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PXGChangeDetails *)inverse;
-(NSString *)diagnosticDescription;
-(void)removeSpritesAtIndexes:(id)arg1 ;
-(BOOL)hasAnyInsertionsRemovalsOrMoves;
-(void)configureWithNumberOfSpritesAfterChange:(unsigned)arg1 changeDetails:(id)arg2 ;
-(PXGSpriteIndexRange)replaceRemovalsWithMovesToEndForIndexes:(id)arg1 ;
-(void)increaseNumberOfSpritesBy:(unsigned)arg1 ;
-(PXGSpriteIndexRange)splitIndexesIntoMovesToEndAndReinsertions:(id)arg1 ;
-(void)applySpriteTransferMap:(const unsigned*)arg1 ;
-(void)_invalidateLayoutVersions;
-(void)_resizeStorageIfNeeded;
-(NSIndexSet *)removedSpriteIndexes;
-(NSIndexSet *)insertedSpriteIndexes;
-(NSIndexSet *)modifiedSpriteIndexes;
-(const unsigned*)spriteIndexAfterChangeBySpriteIndexBeforeChange;
-(id)indexSetAfterApplyingChangeDetails:(id)arg1 ;
-(void)applyToSpriteIndexes:(unsigned*)arg1 atIndexes:(id)arg2 ;
-(void)applyToArray:(void*)arg1 elementSize:(unsigned long long)arg2 countAfterChanges:(unsigned long long)arg3 insertionHandler:(/*^block*/id)arg4 modifiedHandler:(/*^block*/id)arg5 ;
-(void)applyToDictionary:(id)arg1 removalHandler:(/*^block*/id)arg2 ;
-(void)_invalidateCachedArrayChangeDetails;
-(PXArrayChangeDetails *)arrayChangeDetails;
-(unsigned)numberOfSpritesAfterChange;
-(unsigned)numberOfSpritesBeforeChange;
-(long long)layoutVersionBeforeChange;
-(void)setLayoutVersionBeforeChange:(long long)arg1 ;
-(long long)layoutVersionAfterChange;
-(void)setLayoutVersionAfterChange:(long long)arg1 ;
@end

