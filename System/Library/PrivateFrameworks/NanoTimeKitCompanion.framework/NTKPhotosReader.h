/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:27 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol NTKPhotosReaderDelegate;
@class NSString;

@interface NTKPhotosReader : NSObject <NSFastEnumeration> {

	NSString* _resourceDirectory;
	id<NTKPhotosReaderDelegate> _delegate;
	NSString* _assetCollection;
	unsigned long long _mutationCount;

}

@property (nonatomic,retain) NSString * assetCollection;                               //@synthesize assetCollection=_assetCollection - In the implementation block
@property (assign,nonatomic) unsigned long long mutationCount;                         //@synthesize mutationCount=_mutationCount - In the implementation block
@property (nonatomic,readonly) NSString * resourceDirectory;                           //@synthesize resourceDirectory=_resourceDirectory - In the implementation block
@property (assign,nonatomic,__weak) id<NTKPhotosReaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)readerForResourceDirectory:(id)arg1 ;
+(id)readerForSyncedAlbumWithResourceDirectory:(id)arg1 ;
+(id)readerForMemoriesWithResourceDirectory:(id)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NT26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id<NTKPhotosReaderDelegate>)delegate;
-(void)setDelegate:(id<NTKPhotosReaderDelegate>)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(NSString *)assetCollection;
-(void)setAssetCollection:(NSString *)arg1 ;
-(NSString *)resourceDirectory;
-(id)initWithResourceDirectory:(id)arg1 ;
-(unsigned long long)mutationCount;
-(void)setMutationCount:(unsigned long long)arg1 ;
@end

