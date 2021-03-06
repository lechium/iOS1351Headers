/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:13 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelObject, MPMediaLibraryAlbumAppData;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying> {

	MPModelObject* _modelObject;
	MPMediaLibraryAlbumAppData* _albumAppData;

}

@property (nonatomic,retain) MPModelObject * modelObject;                            //@synthesize modelObject=_modelObject - In the implementation block
@property (nonatomic,retain) MPMediaLibraryAlbumAppData * albumAppData;              //@synthesize albumAppData=_albumAppData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelObject *)modelObject;
-(void)setModelObject:(MPModelObject *)arg1 ;
-(MPMediaLibraryAlbumAppData *)albumAppData;
-(void)setAlbumAppData:(MPMediaLibraryAlbumAppData *)arg1 ;
@end

