/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:51 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PUAlbumGadget.h>

@class PUAlbumListCellContentView;

@interface PUSharedAlbumGadget : PUAlbumGadget {

	PUAlbumListCellContentView* _albumCellContentView;

}

@property (nonatomic,retain) PUAlbumListCellContentView * albumCellContentView;              //@synthesize albumCellContentView=_albumCellContentView - In the implementation block
-(id)contentView;
-(PUAlbumListCellContentView *)albumCellContentView;
-(void)setAlbumCellContentView:(PUAlbumListCellContentView *)arg1 ;
@end
